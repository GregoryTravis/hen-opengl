#include <stdio.h>
#include <GLUT/glut.h>
int main() {
#ifdef __LDBL_MANT_DIG__
printf("__LDBL_MANT_DIG__ %d\n", 64);
#endif
#ifdef __LDBL_DIG__
printf("__LDBL_DIG__ %d\n", 18);
#endif
#ifdef __i386
printf("__i386 %d\n", 1);
#endif
#ifdef __LONG_LONG_MAX__
#endif
#ifdef __INTMAX_TYPE__
#endif
#ifdef __APPLE_CC__
printf("__APPLE_CC__ %d\n", 5493);
#endif
#ifdef __DECIMAL_DIG__
printf("__DECIMAL_DIG__ %d\n", 21);
#endif
#ifdef __LDBL_MIN__
#endif
#ifdef __LDBL_HAS_INFINITY__
printf("__LDBL_HAS_INFINITY__ %d\n", 1);
#endif
#ifdef __FLT_DENORM_MIN__
#endif
#ifdef __LDBL_HAS_QUIET_NAN__
printf("__LDBL_HAS_QUIET_NAN__ %d\n", 1);
#endif
#ifdef __DBL_MAX__
#endif
#ifdef __PTRDIFF_TYPE__
#endif
#ifdef __USER_LABEL_PREFIX__
#endif
#ifdef __DBL_MAX_10_EXP__
printf("__DBL_MAX_10_EXP__ %d\n", 308);
#endif
#ifdef __DBL_HAS_INFINITY__
printf("__DBL_HAS_INFINITY__ %d\n", 1);
#endif
#ifdef __GNUC__
printf("__GNUC__ %d\n", 4);
#endif
#ifdef __SSE2_MATH__
printf("__SSE2_MATH__ %d\n", 1);
#endif
#ifdef __DBL_MIN_EXP__
#endif
#ifdef __i386__
printf("__i386__ %d\n", 1);
#endif
#ifdef __FLT_DIG__
printf("__FLT_DIG__ %d\n", 6);
#endif
#ifdef OBJC_NEW_PROPERTIES
printf("OBJC_NEW_PROPERTIES %d\n", 1);
#endif
#ifdef __FLT_EPSILON__
#endif
#ifdef __LDBL_MAX_10_EXP__
printf("__LDBL_MAX_10_EXP__ %d\n", 4932);
#endif
#ifdef __MACH__
printf("__MACH__ %d\n", 1);
#endif
#ifdef __DBL_MAX_EXP__
printf("__DBL_MAX_EXP__ %d\n", 1024);
#endif
#ifdef __FLT_MANT_DIG__
printf("__FLT_MANT_DIG__ %d\n", 24);
#endif
#ifdef __LDBL_MAX_EXP__
printf("__LDBL_MAX_EXP__ %d\n", 16384);
#endif
#ifdef __UINTMAX_TYPE__
#endif
#ifdef __LDBL_MAX__
#endif
#ifdef __CHAR_BIT__
printf("__CHAR_BIT__ %d\n", 8);
#endif
#ifdef __CONSTANT_CFSTRINGS__
printf("__CONSTANT_CFSTRINGS__ %d\n", 1);
#endif
#ifdef __DBL_DENORM_MIN__
#endif
#ifdef __ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__
printf("__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ %d\n", 1058);
#endif
#ifdef i386
printf("i386 %d\n", 1);
#endif
#ifdef __FLT_MAX_EXP__
printf("__FLT_MAX_EXP__ %d\n", 128);
#endif
#ifdef __FLT_MIN__
#endif
#ifdef __APPLE__
printf("__APPLE__ %d\n", 1);
#endif
#ifdef __FLT_MIN_10_EXP__
#endif
#ifdef __LONG_MAX__
#endif
#ifdef __MMX__
printf("__MMX__ %d\n", 1);
#endif
#ifdef __SSE_MATH__
printf("__SSE_MATH__ %d\n", 1);
#endif
#ifdef __DBL_DIG__
printf("__DBL_DIG__ %d\n", 15);
#endif
#ifdef __LDBL_MIN_10_EXP__
#endif
#ifdef __FLT_MAX_10_EXP__
printf("__FLT_MAX_10_EXP__ %d\n", 38);
#endif
#ifdef __LDBL_DENORM_MIN__
#endif
#ifdef __GNUC_GNU_INLINE__
printf("__GNUC_GNU_INLINE__ %d\n", 1);
#endif
#ifdef __INTMAX_MAX__
#endif
#ifdef __DBL_MIN__
#endif
#ifdef __FLT_EVAL_METHOD__
printf("__FLT_EVAL_METHOD__ %d\n", 0);
#endif
#ifdef __GXX_ABI_VERSION
printf("__GXX_ABI_VERSION %d\n", 1002);
#endif
#ifdef __SSE2__
printf("__SSE2__ %d\n", 1);
#endif
#ifdef __VERSION__
#endif
#ifdef __SSE__
printf("__SSE__ %d\n", 1);
#endif
#ifdef __WCHAR_TYPE__
#endif
#ifdef __SHRT_MAX__
printf("__SHRT_MAX__ %d\n", 32767);
#endif
#ifdef __FLT_RADIX__
printf("__FLT_RADIX__ %d\n", 2);
#endif
#ifdef __SCHAR_MAX__
printf("__SCHAR_MAX__ %d\n", 127);
#endif
#ifdef __FLT_HAS_QUIET_NAN__
printf("__FLT_HAS_QUIET_NAN__ %d\n", 1);
#endif
#ifdef __LITTLE_ENDIAN__
printf("__LITTLE_ENDIAN__ %d\n", 1);
#endif
#ifdef __NO_INLINE__
printf("__NO_INLINE__ %d\n", 1);
#endif
#ifdef __GNUC_MINOR__
printf("__GNUC_MINOR__ %d\n", 0);
#endif
#ifdef __FINITE_MATH_ONLY__
printf("__FINITE_MATH_ONLY__ %d\n", 0);
#endif
#ifdef __FLT_MAX__
#endif
#ifdef __LDBL_EPSILON__
#endif
#ifdef __DBL_MIN_10_EXP__
#endif
#ifdef __FLT_HAS_INFINITY__
printf("__FLT_HAS_INFINITY__ %d\n", 1);
#endif
#ifdef __WINT_TYPE__
#endif
#ifdef __DBL_EPSILON__
#endif
#ifdef __WCHAR_MAX__
printf("__WCHAR_MAX__ %d\n", 2147483647);
#endif
#ifdef __DYNAMIC__
printf("__DYNAMIC__ %d\n", 1);
#endif
#ifdef __STDC_HOSTED__
printf("__STDC_HOSTED__ %d\n", 1);
#endif
#ifdef __DBL_MANT_DIG__
printf("__DBL_MANT_DIG__ %d\n", 53);
#endif
#ifdef __PIC__
printf("__PIC__ %d\n", 1);
#endif
#ifdef __INT_MAX__
printf("__INT_MAX__ %d\n", 2147483647);
#endif
#ifdef __FLT_MIN_EXP__
#endif
#ifdef __SIZE_TYPE__
#endif
#ifdef __DBL_HAS_QUIET_NAN__
printf("__DBL_HAS_QUIET_NAN__ %d\n", 1);
#endif
#ifdef __GNUC_PATCHLEVEL__
printf("__GNUC_PATCHLEVEL__ %d\n", 1);
#endif
#ifdef __LDBL_MIN_EXP__
#endif
}
