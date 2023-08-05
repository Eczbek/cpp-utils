#ifndef XIEITE_HEADER__MACROS__STANDARD_LANGUAGE
#	define XIEITE_HEADER__MACROS__STANDARD_LANGUAGE

#	define XIEITE__STANDARD_LANGUAGE__C_1989 false
#	define XIEITE__STANDARD_LANGUAGE__C_1990 false
#	define XIEITE__STANDARD_LANGUAGE__C_1994 false
#	define XIEITE__STANDARD_LANGUAGE__C_1999 false
#	define XIEITE__STANDARD_LANGUAGE__C_2011 false
#	define XIEITE__STANDARD_LANGUAGE__C_2018 false
#	define XIEITE__STANDARD_LAMGUAGE_C_2020 false
#	define XIEITE__STANDARD_LANGUAGE__CPP_1998 false
#	define XIEITE__STANDARD_LANGUAGE__CPP_2011 false
#	define XIEITE__STANDARD_LANGUAGE__CPP_2014 false
#	define XIEITE__STANDARD_LANGUAGE__CPP_2017 false
#	define XIEITE__STANDARD_LANGUAGE__CPP_2020 false
#	define XIEITE__STANDARD_LANGUAGE__CPP_2023 false
#	define XIEITE__STANDARD_LANGUAGE__CPP_2026 false
#	define XIEITE__STANDARD_LANGUAGE__CPP_2029 false
#	define XIEITE__STANDARD_LANGUAGE__CPP_CLI false
#	define XIEITE__STANDARD_LANGUAGE__CPP_EMBEDDED false

#	ifdef __STDC__
#		undef XIEITE__STANDARD_LANGUAGE__C_1989
#		define XIEITE__STANDARD_LANGUAGE__C_1989 true

#		undef XIEITE__STANDARD_LANGUAGE__C_1990
#		define XIEITE__STANDARD_LANGUAGE__C_1990 true
#	endif

#	ifdef __STDC_VERSION___
#		if (__STDC_VERSION___ >= 199409)
#			undef XIEITE__STANDARD_LANGUAGE__C_1994
#			define XIEITE__STANDARD_LANGUAGE__C_1994 true
#		endif

#		if (__STDC_VERSION___ >= 199901)
#			undef XIEITE__STANDARD_LANGUAGE__C_1999
#			define XIEITE__STANDARD_LANGUAGE__C_1999 true
#		endif

#		if (__STDC_VERSION___ >= 201112)
#			undef XIEITE__STANDARD_LANGUAGE__C_2011
#			define XIEITE__STANDARD_LANGUAGE__C_2011 true
#		endif

#		if (__STDC_VERSION___ >= 201710)
#			undef XIEITE__STANDARD_LANGUAGE__C_2018
#			define XIEITE__STANDARD_LANGUAGE__C_2018 true
#		endif

#		if (__STDC_VERSION___ >= 202000)
#			undef XIEITE__STANDARD_LANGUAGE__C_2020
#			define XIEITE__STANDARD_LANGUAGE__C_2020 true
#		endif
#	endif

#	ifdef __cplusplus
#		if (__cplusplus >= 199711)
#			undef XIEITE__STANDARD_LANGUAGE__CPP_1998
#			define XIEITE__STANDARD_LANGUAGE__CPP_1998 true
#		endif

#		if (__cplusplus >= 201103)
#			undef XIEITE__STANDARD_LANGUAGE__CPP_2011
#			define XIEITE__STANDARD_LANGUAGE__CPP_2011 true
#		endif

#		if (__cplusplus >= 201402)
#			undef XIEITE__STANDARD_LANGUAGE__CPP_2014
#			define XIEITE__STANDARD_LANGUAGE__CPP_2014 true
#		endif

#		if (__cplusplus >= 201703)
#			undef XIEITE__STANDARD_LANGUAGE__CPP_2017
#			define XIEITE__STANDARD_LANGUAGE__CPP_2017 true
#		endif

#		if (__cplusplus >= 202002)
#			undef XIEITE__STANDARD_LANGUAGE__CPP_2020
#			define XIEITE__STANDARD_LANGUAGE__CPP_2020 true
#		endif

#		if (__cplusplus >= 202100)
#			undef XIEITE__STANDARD_LANGUAGE__CPP_2023
#			define XIEITE__STANDARD_LANGUAGE__CPP_2023 true
#		endif

#		if (__cplusplus >= 999999)
#			undef XIEITE__STANDARD_LANGUAGE__CPP_2026
#			define XIEITE__STANDARD_LANGUAGE__CPP_2026 true
#		endif

#		if (__cplusplus >= 999999)
#			undef XIEITE__STANDARD_LANGUAGE__CPP_2029
#			define XIEITE__STANDARD_LANGUAGE__CPP_2029 true
#		endif
#	endif

#	if defined(__cplusplus_cli) && (__cplusplus_cli >= 200406)
#		undef XIEITE__STANDARD_LANGUAGE__CPP_CLI
#		define XIEITE__STANDARD_LANGUAGE__CPP_CLI true
#	endif

#	ifdef __embedded_cplusplus
#		undef XIEITE__STANDARD_LANGUAGE__CPP_EMBEDDED
#		define XIEITE__STANDARD_LANGUAGE__CPP_EMBEDDED true
#	endif

#endif
