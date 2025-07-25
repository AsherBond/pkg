/*-
 * Copyright (c) 2019-2025 Baptiste Daroussin <bapt@FreeBSD.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include "pkg_config.h"

#ifdef HAVE_SYS_PROCCTL_H
#include <sys/procctl.h>
#endif

#include <sys/types.h>
#include <sys/wait.h>

#include <errno.h>
#include <poll.h>
#include <xstring.h>
#include <err.h>
#include <stdio.h>

#include "pkg.h"
#include "private/pkg.h"
#include "private/event.h"
#include "private/lua.h"

extern char **environ;

int
pkg_lua_script_run(struct pkg * const pkg, pkg_lua_script type, bool upgrade)
{
	int ret = EPKG_OK;
	int pstat;
#ifdef PROC_REAP_KILL
	bool do_reap;
	pid_t mypid;
	struct procctl_reaper_status info;
	struct procctl_reaper_kill killemall;
#endif
	int cur_pipe[2];
	char *line = NULL;

	if (vec_len(&pkg->lua_scripts[type]) == 0)
		return (EPKG_OK);

	if (!pkg_object_bool(pkg_config_get("RUN_SCRIPTS"))) {
		return (EPKG_OK);
	}

#ifdef PROC_REAP_KILL
	mypid = getpid();
	do_reap = procctl(P_PID, mypid, PROC_REAP_ACQUIRE, NULL) == 0;
#endif

	vec_foreach(pkg->lua_scripts[type], i) {
		char *script = pkg->lua_scripts[type].d[i];
		if (get_socketpair(cur_pipe) == -1) {
			pkg_emit_errno("pkg_lua_script_script", "socketpair");
			goto cleanup;
		}
		pid_t pid = fork();
		if (pid == 0) {
			static const luaL_Reg pkg_lib[] = {
				{ "print_msg", lua_print_msg },
				{ "prefixed_path", lua_prefix_path },
				{ "filecmp", lua_pkg_filecmp },
				{ "copy", lua_pkg_copy },
				{ "stat", lua_stat },
				{ "readdir", lua_readdir },
				{ "exec", lua_exec },
				{ "symlink", lua_pkg_symlink },
				{ NULL, NULL },
			};
			close(cur_pipe[0]);
			lua_State *L = luaL_newstate();
			luaL_openlibs( L );
			lua_atpanic(L, (lua_CFunction)stack_dump );
			lua_pushinteger(L, cur_pipe[1]);
			lua_setglobal(L, "msgfd");
			lua_pushlightuserdata(L, pkg);
			lua_setglobal(L, "package");
			lua_pushinteger(L, pkg->rootfd);
			lua_setglobal(L, "rootfd");
			lua_pushstring(L, pkg->prefix);
			lua_setglobal(L, "pkg_prefix");
			lua_pushstring(L, pkg->name);
			lua_setglobal(L, "pkg_name");
			if (ctx.pkg_rootdir == NULL)
				ctx.pkg_rootdir = "/";
			lua_pushstring(L, ctx.pkg_rootdir);
			lua_setglobal(L, "pkg_rootdir");
			if (ctx.metalog != NULL) {
				lua_pushstring(L, ctx.metalog);
				lua_setglobal(L, "pkg_metalog");
			}
			lua_pushboolean(L, (upgrade));
			lua_setglobal(L, "pkg_upgrade");
			luaL_newlib(L, pkg_lib);
			lua_setglobal(L, "pkg");
			lua_override_ios(L, true);

			/* parse and set arguments of the line is in the comments */
			if (STARTS_WITH(script, "-- args: ")) {
				char *walk, *begin, *line = NULL;
				int spaces, argc = 0;
				char **args = NULL;

				walk = strchr(script, '\n');
				begin = script + strlen("-- args: ");
				line = xstrndup(begin, walk - begin);
				spaces = pkg_utils_count_spaces(line);
				args = xmalloc((spaces + 1)* sizeof(char *));
				walk = xstrdup(line);
				while (walk != NULL) {
					args[argc++] = pkg_utils_tokenize(&walk);
				}
				lua_args_table(L, args, argc);
			}

			pkg_debug(3, "Scripts: executing lua\n--- BEGIN ---\n%s\nScripts: --- END ---", script);
			if (luaL_dostring(L, script)) {
				pkg_emit_error("Failed to execute lua script: %s", lua_tostring(L, -1));
				lua_close(L);
				_exit(1);
			}

			if (lua_tonumber(L, -1) != 0) {
				lua_close(L);
				_exit(1);
			}

			lua_close(L);
			_exit(0);
		} else if (pid < 0) {
			pkg_emit_errno("Cannot fork", "lua_script");
			ret = EPKG_FATAL;
			goto cleanup;
		}

		close(cur_pipe[1]);

		ret = pkg_script_run_child(pid, &pstat, cur_pipe[0], "lua");
	}


cleanup:
#ifdef PROC_REAP_KILL
	/*
	 * If the prior PROCCTL_REAP_ACQUIRE call failed, the kernel
	 * probably doesn't support this, so don't try.
	 */
	if (!do_reap)
		return (ret);

	procctl(P_PID, mypid, PROC_REAP_STATUS, &info);
	if (info.rs_children != 0) {
		killemall.rk_sig = SIGKILL;
		killemall.rk_flags = 0;
		if (procctl(P_PID, mypid, PROC_REAP_KILL, &killemall) != 0) {
			pkg_errno("%s", "Fail to kill all processes");
		}
	}
	procctl(P_PID, mypid, PROC_REAP_RELEASE, NULL);
#endif
	free(line);

	return (ret);
}

ucl_object_t *
pkg_lua_script_to_ucl(charv_t *scripts)
{
	ucl_object_t *array;

	array = ucl_object_typed_new(UCL_ARRAY);
	vec_foreach(*scripts, i)
		ucl_array_append(array, ucl_object_fromstring_common(scripts->d[i],
		    strlen(scripts->d[i]), UCL_STRING_RAW|UCL_STRING_TRIM));

	return (array);
}

int
pkg_lua_script_from_ucl(struct pkg *pkg, const ucl_object_t *obj, pkg_lua_script type)
{
	const ucl_object_t *cur;
	ucl_object_iter_t it = NULL;

	while ((cur = ucl_iterate_object(obj, &it, true))) {
		if (ucl_object_type(cur) != UCL_STRING) {
			pkg_emit_error("lua scripts be strings");
			return (EPKG_FATAL);
		}
		vec_push(&pkg->lua_scripts[type], xstrdup(ucl_object_tostring(cur)));
	}
	return (EPKG_OK);
}

