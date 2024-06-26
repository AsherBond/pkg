#include <libecc/lib_ecc_config.h>
#ifdef WITH_CURVE_GOST_R3410_2012_512_PARAMSETB

#ifndef __EC_PARAMS_GOST_R3410_2012_512_PARAMSETB_H__
#define __EC_PARAMS_GOST_R3410_2012_512_PARAMSETB_H__
#include <libecc/curves/known/ec_params_external.h>
static const u8 gost_R3410_2012_512_paramSetB_p[] = {
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_p);

#define CURVE_GOST_R3410_2012_512_PARAMSETB_P_BITLEN 512
static const u8 gost_R3410_2012_512_paramSetB_p_bitlen[] = {
	0x02, 0x00,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_p_bitlen);

#if (WORD_BYTES == 8)     /* 64-bit words */
static const u8 gost_R3410_2012_512_paramSetB_r[] = {
	0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x91,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_r);

static const u8 gost_R3410_2012_512_paramSetB_r_square[] = {
	0xc0, 0x84,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_r_square);

static const u8 gost_R3410_2012_512_paramSetB_mpinv[] = {
	0x4e, 0x6a, 0x17, 0x10, 0x24, 0xe6, 0xa1, 0x71,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_mpinv);

static const u8 gost_R3410_2012_512_paramSetB_p_shift[] = {
	0x00,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_p_shift);

static const u8 gost_R3410_2012_512_paramSetB_p_normalized[] = {
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_p_normalized);

static const u8 gost_R3410_2012_512_paramSetB_p_reciprocal[] = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_p_reciprocal);

#elif (WORD_BYTES == 4)   /* 32-bit words */
static const u8 gost_R3410_2012_512_paramSetB_r[] = {
	0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x91,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_r);

static const u8 gost_R3410_2012_512_paramSetB_r_square[] = {
	0xc0, 0x84,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_r_square);

static const u8 gost_R3410_2012_512_paramSetB_mpinv[] = {
	0x24, 0xe6, 0xa1, 0x71,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_mpinv);

static const u8 gost_R3410_2012_512_paramSetB_p_shift[] = {
	0x00,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_p_shift);

static const u8 gost_R3410_2012_512_paramSetB_p_normalized[] = {
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_p_normalized);

static const u8 gost_R3410_2012_512_paramSetB_p_reciprocal[] = {
	0xff, 0xff, 0xff, 0xff,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_p_reciprocal);

#elif (WORD_BYTES == 2)   /* 16-bit words */
static const u8 gost_R3410_2012_512_paramSetB_r[] = {
	0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x91,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_r);

static const u8 gost_R3410_2012_512_paramSetB_r_square[] = {
	0xc0, 0x84,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_r_square);

static const u8 gost_R3410_2012_512_paramSetB_mpinv[] = {
	0xa1, 0x71,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_mpinv);

static const u8 gost_R3410_2012_512_paramSetB_p_shift[] = {
	0x00,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_p_shift);

static const u8 gost_R3410_2012_512_paramSetB_p_normalized[] = {
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6f,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_p_normalized);

static const u8 gost_R3410_2012_512_paramSetB_p_reciprocal[] = {
	0xff, 0xff,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_p_reciprocal);

#else                     /* unknown word size */
#error "Unsupported word size"
#endif

static const u8 gost_R3410_2012_512_paramSetB_a[] = {
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6c,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_a);

static const u8 gost_R3410_2012_512_paramSetB_b[] = {
	0x68, 0x7d, 0x1b, 0x45, 0x9d, 0xc8, 0x41, 0x45,
	0x7e, 0x3e, 0x06, 0xcf, 0x6f, 0x5e, 0x25, 0x17,
	0xb9, 0x7c, 0x7d, 0x61, 0x4a, 0xf1, 0x38, 0xbc,
	0xbf, 0x85, 0xdc, 0x80, 0x6c, 0x4b, 0x28, 0x9f,
	0x3e, 0x96, 0x5d, 0x2d, 0xb1, 0x41, 0x6d, 0x21,
	0x7f, 0x8b, 0x27, 0x6f, 0xad, 0x1a, 0xb6, 0x9c,
	0x50, 0xf7, 0x8b, 0xee, 0x1f, 0xa3, 0x10, 0x6e,
	0xfb, 0x8c, 0xcb, 0xc7, 0xc5, 0x14, 0x01, 0x16,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_b);

#define CURVE_GOST_R3410_2012_512_PARAMSETB_CURVE_ORDER_BITLEN 512
static const u8 gost_R3410_2012_512_paramSetB_curve_order[] = {
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0x49, 0xa1, 0xec, 0x14, 0x25, 0x65, 0xa5, 0x45,
	0xac, 0xfd, 0xb7, 0x7b, 0xd9, 0xd4, 0x0c, 0xfa,
	0x8b, 0x99, 0x67, 0x12, 0x10, 0x1b, 0xea, 0x0e,
	0xc6, 0x34, 0x6c, 0x54, 0x37, 0x4f, 0x25, 0xbd,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_curve_order);

static const u8 gost_R3410_2012_512_paramSetB_gx[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_gx);

static const u8 gost_R3410_2012_512_paramSetB_gy[] = {
	0x1a, 0x8f, 0x7e, 0xda, 0x38, 0x9b, 0x09, 0x4c,
	0x2c, 0x07, 0x1e, 0x36, 0x47, 0xa8, 0x94, 0x0f,
	0x3c, 0x12, 0x3b, 0x69, 0x75, 0x78, 0xc2, 0x13,
	0xbe, 0x6d, 0xd9, 0xe6, 0xc8, 0xec, 0x73, 0x35,
	0xdc, 0xb2, 0x28, 0xfd, 0x1e, 0xdf, 0x4a, 0x39,
	0x15, 0x2c, 0xbc, 0xaa, 0xf8, 0xc0, 0x39, 0x88,
	0x28, 0x04, 0x10, 0x55, 0xf9, 0x4c, 0xee, 0xec,
	0x7e, 0x21, 0x34, 0x07, 0x80, 0xfe, 0x41, 0xbd,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_gy);

static const u8 gost_R3410_2012_512_paramSetB_gz[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_gz);

static const u8 gost_R3410_2012_512_paramSetB_gen_order[] = {
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0x49, 0xa1, 0xec, 0x14, 0x25, 0x65, 0xa5, 0x45,
	0xac, 0xfd, 0xb7, 0x7b, 0xd9, 0xd4, 0x0c, 0xfa,
	0x8b, 0x99, 0x67, 0x12, 0x10, 0x1b, 0xea, 0x0e,
	0xc6, 0x34, 0x6c, 0x54, 0x37, 0x4f, 0x25, 0xbd,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_gen_order);

#define CURVE_GOST_R3410_2012_512_PARAMSETB_Q_BITLEN 512
static const u8 gost_R3410_2012_512_paramSetB_gen_order_bitlen[] = {
	0x02, 0x00,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_gen_order_bitlen);

static const u8 gost_R3410_2012_512_paramSetB_cofactor[] = {
	0x01,
};

TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_cofactor);

static const u8 gost_R3410_2012_512_paramSetB_alpha_montgomery[] = {
	0x00,
};
TO_EC_STR_PARAM_FIXED_SIZE(gost_R3410_2012_512_paramSetB_alpha_montgomery, 0);

static const u8 gost_R3410_2012_512_paramSetB_gamma_montgomery[] = {
	0x00,
};
TO_EC_STR_PARAM_FIXED_SIZE(gost_R3410_2012_512_paramSetB_gamma_montgomery, 0);

static const u8 gost_R3410_2012_512_paramSetB_alpha_edwards[] = {
	0x00,
};
TO_EC_STR_PARAM_FIXED_SIZE(gost_R3410_2012_512_paramSetB_alpha_edwards, 0);

static const u8 gost_R3410_2012_512_paramSetB_name[] = "GOST_R3410_2012_512_PARAMSETB";
TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_name);

static const u8 gost_R3410_2012_512_paramSetB_oid[] = "1.2.643.7.1.2.1.2.2";
TO_EC_STR_PARAM(gost_R3410_2012_512_paramSetB_oid);

static const ec_str_params gost_R3410_2012_512_paramSetB_str_params = {
	.p = &gost_R3410_2012_512_paramSetB_p_str_param,
	.p_bitlen = &gost_R3410_2012_512_paramSetB_p_bitlen_str_param,
	.r = &gost_R3410_2012_512_paramSetB_r_str_param,
	.r_square = &gost_R3410_2012_512_paramSetB_r_square_str_param,
	.mpinv = &gost_R3410_2012_512_paramSetB_mpinv_str_param,
	.p_shift = &gost_R3410_2012_512_paramSetB_p_shift_str_param,
	.p_normalized = &gost_R3410_2012_512_paramSetB_p_normalized_str_param,
	.p_reciprocal = &gost_R3410_2012_512_paramSetB_p_reciprocal_str_param,
	.a = &gost_R3410_2012_512_paramSetB_a_str_param,
	.b = &gost_R3410_2012_512_paramSetB_b_str_param,
	.curve_order = &gost_R3410_2012_512_paramSetB_curve_order_str_param,
	.gx = &gost_R3410_2012_512_paramSetB_gx_str_param,
	.gy = &gost_R3410_2012_512_paramSetB_gy_str_param,
	.gz = &gost_R3410_2012_512_paramSetB_gz_str_param,
	.gen_order = &gost_R3410_2012_512_paramSetB_gen_order_str_param,
	.gen_order_bitlen = &gost_R3410_2012_512_paramSetB_gen_order_bitlen_str_param,
	.cofactor = &gost_R3410_2012_512_paramSetB_cofactor_str_param,
	.alpha_montgomery = &gost_R3410_2012_512_paramSetB_alpha_montgomery_str_param,
	.gamma_montgomery = &gost_R3410_2012_512_paramSetB_gamma_montgomery_str_param,
	.alpha_edwards = &gost_R3410_2012_512_paramSetB_alpha_edwards_str_param,
	.oid = &gost_R3410_2012_512_paramSetB_oid_str_param,
	.name = &gost_R3410_2012_512_paramSetB_name_str_param,
};

/*
 * Compute max bit length of all curves for p and q
 */
#ifndef CURVES_MAX_P_BIT_LEN
#define CURVES_MAX_P_BIT_LEN    0
#endif
#if (CURVES_MAX_P_BIT_LEN < CURVE_GOST_R3410_2012_512_PARAMSETB_P_BITLEN)
#undef CURVES_MAX_P_BIT_LEN
#define CURVES_MAX_P_BIT_LEN CURVE_GOST_R3410_2012_512_PARAMSETB_P_BITLEN
#endif
#ifndef CURVES_MAX_Q_BIT_LEN
#define CURVES_MAX_Q_BIT_LEN    0
#endif
#if (CURVES_MAX_Q_BIT_LEN < CURVE_GOST_R3410_2012_512_PARAMSETB_Q_BITLEN)
#undef CURVES_MAX_Q_BIT_LEN
#define CURVES_MAX_Q_BIT_LEN CURVE_GOST_R3410_2012_512_PARAMSETB_Q_BITLEN
#endif
#ifndef CURVES_MAX_CURVE_ORDER_BIT_LEN
#define CURVES_MAX_CURVE_ORDER_BIT_LEN    0
#endif
#if (CURVES_MAX_CURVE_ORDER_BIT_LEN < CURVE_GOST_R3410_2012_512_PARAMSETB_CURVE_ORDER_BITLEN)
#undef CURVES_MAX_CURVE_ORDER_BIT_LEN
#define CURVES_MAX_CURVE_ORDER_BIT_LEN CURVE_GOST_R3410_2012_512_PARAMSETB_CURVE_ORDER_BITLEN
#endif

/*
 * Compute and adapt max name and oid length
 */
#ifndef MAX_CURVE_OID_LEN
#define MAX_CURVE_OID_LEN 0
#endif
#ifndef MAX_CURVE_NAME_LEN
#define MAX_CURVE_NAME_LEN 0
#endif
#if (MAX_CURVE_OID_LEN < 20)
#undef MAX_CURVE_OID_LEN
#define MAX_CURVE_OID_LEN 20
#endif
#if (MAX_CURVE_NAME_LEN < 50)
#undef MAX_CURVE_NAME_LEN
#define MAX_CURVE_NAME_LEN 50
#endif

#endif /* __EC_PARAMS_GOST_R3410_2012_512_PARAMSETB_H__ */

#endif /* WITH_CURVE_GOST_R3410_2012_512_PARAMSETB */
