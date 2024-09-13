#pragma once

#define XIEITE_LANGUAGE_STANDARD_C_1978 0
#define XIEITE_LANGUAGE_STANDARD_C_1989 0
#define XIEITE_LANGUAGE_STANDARD_C_1990 0
#define XIEITE_LANGUAGE_STANDARD_C_1994 0
#define XIEITE_LANGUAGE_STANDARD_C_1999 0
#define XIEITE_LANGUAGE_STANDARD_C_2011 0
#define XIEITE_LANGUAGE_STANDARD_C_2018 0
#define XIEITE_LANGUAGE_STANDARD_C_2023 0
#define XIEITE_LANGUAGE_STANDARD_CPP_1998 0
#define XIEITE_LANGUAGE_STANDARD_CPP_2011 0
#define XIEITE_LANGUAGE_STANDARD_CPP_2014 0
#define XIEITE_LANGUAGE_STANDARD_CPP_2017 0
#define XIEITE_LANGUAGE_STANDARD_CPP_2020 0
#define XIEITE_LANGUAGE_STANDARD_CPP_2023 0
#define XIEITE_LANGUAGE_STANDARD_CPP_CLI 0
#define XIEITE_LANGUAGE_STANDARD_CPP_EMBEDDED 0

#if 1
#	undef XIEITE_LANGUAGE_STANDARD_C_1978
#	define XIEITE_LANGUAGE_STANDARD_C_1978 1
#endif

#ifdef __STDC__
#	undef XIEITE_LANGUAGE_STANDARD_C_1989
#	define XIEITE_LANGUAGE_STANDARD_C_1989 1
#	undef XIEITE_LANGUAGE_STANDARD_C_1990
#	define XIEITE_LANGUAGE_STANDARD_C_1990 1
#endif

#ifdef __STDC_VERSION__
#	if __STDC_VERSION__ >= 199409
#		undef XIEITE_LANGUAGE_STANDARD_C_1994
#		define XIEITE_LANGUAGE_STANDARD_C_1994 1
#	endif

#	if __STDC_VERSION__ >= 199901
#		undef XIEITE_LANGUAGE_STANDARD_C_1999
#		define XIEITE_LANGUAGE_STANDARD_C_1999 1
#	endif

#	if __STDC_VERSION__ >= 201112
#		undef XIEITE_LANGUAGE_STANDARD_C_2011
#		define XIEITE_LANGUAGE_STANDARD_C_2011 1
#	endif

#	if __STDC_VERSION__ >= 201710
#		undef XIEITE_LANGUAGE_STANDARD_C_2018
#		define XIEITE_LANGUAGE_STANDARD_C_2018 1
#	endif

#	if __STDC_VERSION__ >= 202000
#		undef XIEITE_LANGUAGE_STANDARD_C_2023
#		define XIEITE_LANGUAGE_STANDARD_C_2023 1
#	endif
#endif

#ifdef __cplusplus
#	if __cplusplus >= 199711
#		undef XIEITE_LANGUAGE_STANDARD_CPP_1998
#		define XIEITE_LANGUAGE_STANDARD_CPP_1998 1
#	endif

#	if __cplusplus >= 201103
#		undef XIEITE_LANGUAGE_STANDARD_CPP_2011
#		define XIEITE_LANGUAGE_STANDARD_CPP_2011 1
#	endif

#	if __cplusplus >= 201402
#		undef XIEITE_LANGUAGE_STANDARD_CPP_2014
#		define XIEITE_LANGUAGE_STANDARD_CPP_2014 1
#	endif

#	if __cplusplus >= 201703
#		undef XIEITE_LANGUAGE_STANDARD_CPP_2017
#		define XIEITE_LANGUAGE_STANDARD_CPP_2017 1
#	endif

#	if __cplusplus >= 202002
#		undef XIEITE_LANGUAGE_STANDARD_CPP_2020
#		define XIEITE_LANGUAGE_STANDARD_CPP_2020 1
#	endif

#	if __cplusplus >= 202302
#		undef XIEITE_LANGUAGE_STANDARD_CPP_2023
#		define XIEITE_LANGUAGE_STANDARD_CPP_2023 1
#	endif
#endif

#ifdef __cplusplus_cli
#	if __cplusplus_cli >= 200406
#		undef XIEITE_LANGUAGE_STANDARD_CPP_CLI
#		define XIEITE_LANGUAGE_STANDARD_CPP_CLI 1
#	endif
#endif

#ifdef __embedded_cplusplus
#	undef XIEITE_LANGUAGE_STANDARD_CPP_EMBEDDED
#	define XIEITE_LANGUAGE_STANDARD_CPP_EMBEDDED 1
#endif

// https://sourceforge.net/p/predef/wiki/Standards/