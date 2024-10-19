#pragma once

#define XIEITE_LIBRARY_TYPE_CLOUDABI_C 0
#define XIEITE_LIBRARY_MAJOR_CLOUDABI_C 0
#define XIEITE_LIBRARY_MINOR_CLOUDABI_C 0
#define XIEITE_LIBRARY_PATCH_CLOUDABI_C 0
#define XIEITE_LIBRARY_TYPE_COMO_CPP 0
#define XIEITE_LIBRARY_MAJOR_COMO_CPP 0
#define XIEITE_LIBRARY_MINOR_COMO_CPP 0
#define XIEITE_LIBRARY_PATCH_COMO_CPP 0
#define XIEITE_LIBRARY_TYPE_DINKUMWARE_CPP 0
#define XIEITE_LIBRARY_MAJOR_DINKUMWARE_CPP 0
#define XIEITE_LIBRARY_MINOR_DINKUMWARE_CPP 0
#define XIEITE_LIBRARY_PATCH_DINKUMWARE_CPP 0
#define XIEITE_LIBRARY_TYPE_GNU_C 0
#define XIEITE_LIBRARY_MAJOR_GNU_C 0
#define XIEITE_LIBRARY_MINOR_GNU_C 0
#define XIEITE_LIBRARY_PATCH_GNU_C 0
#define XIEITE_LIBRARY_TYPE_GNU_CPP 0
#define XIEITE_LIBRARY_MAJOR_GNU_CPP 0
#define XIEITE_LIBRARY_MINOR_GNU_CPP 0
#define XIEITE_LIBRARY_PATCH_GNU_CPP 0
#define XIEITE_LIBRARY_TYPE_IBM_VA_CPP 0
#define XIEITE_LIBRARY_MAJOR_IBM_VA_CPP 0
#define XIEITE_LIBRARY_MINOR_IBM_VA_CPP 0
#define XIEITE_LIBRARY_PATCH_IBM_VA_CPP 0
#define XIEITE_LIBRARY_TYPE_LLVM_CPP 0
#define XIEITE_LIBRARY_MAJOR_LLVM_CPP 0
#define XIEITE_LIBRARY_MINOR_LLVM_CPP 0
#define XIEITE_LIBRARY_PATCH_LLVM_CPP 0
#define XIEITE_LIBRARY_TYPE_METROWERKS_CPP 0
#define XIEITE_LIBRARY_MAJOR_METROWERKS_CPP 0
#define XIEITE_LIBRARY_MINOR_METROWERKS_CPP 0
#define XIEITE_LIBRARY_PATCH_METROWERKS_CPP 0
#define XIEITE_LIBRARY_TYPE_MODENA_CPP 0
#define XIEITE_LIBRARY_MAJOR_MODENA_CPP 0
#define XIEITE_LIBRARY_MINOR_MODENA_CPP 0
#define XIEITE_LIBRARY_PATCH_MODENA_CPP 0
#define XIEITE_LIBRARY_TYPE_ROGUEWAVE_CPP 0
#define XIEITE_LIBRARY_MAJOR_ROGUEWAVE_CPP 0
#define XIEITE_LIBRARY_MINOR_ROGUEWAVE_CPP 0
#define XIEITE_LIBRARY_PATCH_ROGUEWAVE_CPP 0
#define XIEITE_LIBRARY_TYPE_SGI_CPP 0
#define XIEITE_LIBRARY_MAJOR_SGI_CPP 0
#define XIEITE_LIBRARY_MINOR_SGI_CPP 0
#define XIEITE_LIBRARY_PATCH_SGI_CPP 0
#define XIEITE_LIBRARY_TYPE_UC_C 0
#define XIEITE_LIBRARY_MAJOR_UC_C 0
#define XIEITE_LIBRARY_MINOR_UC_C 0
#define XIEITE_LIBRARY_PATCH_UC_C 0
#define XIEITE_LIBRARY_TYPE_VMS_C 0
#define XIEITE_LIBRARY_MAJOR_VMS_C 0
#define XIEITE_LIBRARY_MINOR_VMS_C 0
#define XIEITE_LIBRARY_PATCH_VMS_C 0
#define XIEITE_LIBRARY_TYPE_Z_C 0
#define XIEITE_LIBRARY_MAJOR_Z_C 0
#define XIEITE_LIBRARY_MINOR_Z_C 0
#define XIEITE_LIBRARY_PATCH_Z_C 0

#ifdef __cloudlibc__
#	undef XIEITE_LIBRARY_TYPE_CLOUDABI_C
#	define XIEITE_LIBRARY_TYPE_CLOUDABI_C 1

#	undef XIEITE_LIBRARY_MAJOR_CLOUDABI_C
#	define XIEITE_LIBRARY_MAJOR_CLOUDABI_C __cloudlibc_major__

#	undef XIEITE_LIBRARY_MINOR_CLOUDABI_C
#	define XIEITE_LIBRARY_MINOR_CLOUDABI_C __cloudlibc_minor__
#endif

#ifdef __LIBCOMO__
#	undef XIEITE_LIBRARY_TYPE_COMO_CPP
#	define XIEITE_LIBRARY_TYPE_COMO_CPP 1

#	undef XIEITE_LIBRARY_MAJOR_COMO_CPP
#	define XIEITE_LIBRARY_MAJOR_COMO_CPP __LIBCOMO_VERSION__
#endif

#if defined(_CPPLIB_VER) || (defined(_YVALS) && !defined(__IBMCPP__))
#	undef XIEITE_LIBRARY_TYPE_DINKUMWARE_CPP
#	define XIEITE_LIBRARY_TYPE_DINKUMWARE_CPP 1

#	ifdef _CPPLIB_VER
#		undef XIEITE_LIBRARY_MAJOR_DINKUMWARE_CPP
#		define XIEITE_LIBRARY_MAJOR_DINKUMWARE_CPP (_CPPLIB_VER / 100)

#		undef XIEITE_LIBRARY_MINOR_DINKUMWARE_CPP
#		define XIEITE_LIBRARY_MINOR_DINKUMWARE_CPP (_CPPLIB_VER % 100)
#	endif
#endif

#if defined(__GLIBC__) || defined(__GNU_LIBRARY__)
#	undef XIEITE_LIBRARY_TYPE_GNU_C
#	define XIEITE_LIBRARY_TYPE_GNU_C 1

#	undef XIEITE_LIBRARY_MAJOR_GNU_C
#	undef XIEITE_LIBRARY_MINOR_GNU_C
#	ifdef __GLIBC__
#		define XIEITE_LIBRARY_MAJOR_GNU_C __GLIBC__
#		define XIIETE_LIBRARY_MINOR_GNU_C __GLIBC_MINOR__
#	else
#		define XIEITE_LIBRARY_MAJOR_GNU_C __GNU_LIBRARY__
#		define XIEITE_LIBRARY_MINOR_GNU_C __GNU_LIBRARY_MINOR__
#	endif
#endif

#ifdef __GLIBCXX__
#	undef XIEITE_LIBRARY_TYPE_GNU_CPP
#	define XIEITE_LIBRARY_TYPE_GNU_CPP 1

#	ifdef _GLIBCXX_RELEASE
#		undef XIEITE_LIBRARY_MAJOR_GNU_CPP
#		define XIEITE_LIBRARY_MAJOR_GNU_CPP _GLIBCXX_RELEASE
#	else
#		undef XIEITE_LIBRARY_MINOR_GNU_CPP
#		define XIEITE_LIBRARY_MINOR_GNU_CPP __GLIBCXX__ // Why not?
#	endif
#endif

#ifdef __IBMCPP__
#	undef XIEITE_LIBRARY_TYPE_IBM_VA_CPP
#	define XIEITE_LIBRARY_TYPE_IBM_VA_CPP 1
#endif

#ifdef _LIBCPP_VERSION
#	undef XIEITE_LIBRARY_TYPE_LLVM_CPP
#	define XIEITE_LIBRARY_TYPE_LLVM_CPP 1

#	undef XIEITE_LIBRARY_MAJOR_LLVM_CPP
#	define XIEITE_LIBRARY_MAJOR_LLVM_CPP (_LIBCPP_VERSION / 10000)

#	undef XIEITE_LIBRARY_MINOR_LLVM_CPP
#	define XIEITE_LIBRARY_MINOR_LLVM_CPP (_LIBCPP_VERSION % 10000 / 100)

#	undef XIEITE_LIBRARY_PATCH_LLVM_CPP
#	define XIEITE_LIBRARY_PATCH_LLVM_CPP (_LIBCPP_VERSION % 100)
#endif

#if defined(__MSL_CPP__) || defined(__MSL__)
#	undef XIEITE_LIBRARY_TYPE_METROWERKS_CPP
#	define XIEITE_LIBRARY_TYPE_METROWERKS_CPP 1

#	undef XIEITE_LIBRARY_MAJOR_METROWERKS_CPP
#	undef XIEITE_LIBRARY_MINOR_METROWERKS_CPP
#	undef XIEITE_LIBRARY_PATCH_METROWERKS_CPP
#	ifdef __MSL_CPP__
#		define XIEITE_LIBRARY_MAJOR_METROWERKS_CPP (__MSL_CPP__ / 0x1000)
#		define XIEITE_LIBRARY_MINOR_METROWERKS_CPP (__MSL_CPP__ / 0x1000 / 100)
#		define XIEITE_LIBRARY_PATCH_METROWERKS_CPP (__MSL_CPP__ / 0x100)
#	else
#		define XIEITE_LIBRARY_MAJOR_METROWERKS_CPP (__MSL__ / 0x1000)
#		define XIEITE_LIBRARY_MINOR_METROWERKS_CPP (__MSL__ / 0x1000 / 100)
#		define XIEITE_LIBRARY_PATCH_METROWERKS_CPP (__MSL__ / 0x100)
#	endif
#endif

#if defined(MSIPL_COMPILE_H) || defined(__MSIPL_COMPILE_H)
#	undef XIEITE_LIBRARY_TYPE_MODENA_CPP
#	define XIEITE_LIBRARY_TYPE_MODENA_CPP 1
#endif

#if defined(_RWSTD_VER) || defined(__STD_RWCOMPILER_H__)
#	undef XIEITE_LIBRARY_TYPE_ROGUEWAVE_CPP
#	define XIEITE_LIBRARY_TYPE_ROGUEWAVE_CPP 1

#	ifdef _RWSTD_VER
#		undef XIEITE_LIBRARY_MAJOR_ROGUEWAVE_CPP
#		undef XIEITE_LIBRARY_MINOR_ROGUEWAVE_CPP
#		undef XIEITE_LIBRARY_MINOR_ROGUEWAVE_CPP
#		if _RWSTD_VER < 0x10000
#			define XIEITE_LIBRARY_MAJOR_ROGUEWAVE_CPP (_RWSTD_VER % 0x1000)
#			define XIEITE_LIBRARY_MINOR_ROGUEWAVE_CPP (_RWSTD_VER % 0x1000 / 10)
#			define XIEITE_LIBRARY_PATCH_ROGUEWAVE_CPP (_RWSTD_VER % 0x10)
#		else
#			define XIEITE_LIBRARY_MAJOR_ROGUEWAVE_CPP (_RWSTD_VER % 0x10000)
#			define XIEITE_LIBRARY_MINOR_ROGUEWAVE_CPP (_RWSTD_VER % 0x10000 / 100)
#			define XIEITE_LIBRARY_PATCH_ROGUEWAVE_CPP (_RWSTD_VER % 0x100)
#		endif
#	endif
#endif

#ifdef __SGI_STL
#	undef XIEITE_LIBRARY_TYPE_SGI_CPP
#	define XIEITE_LIBRARY_TYPE_SGI_CPP 1

#	undef XIEITE_LIBRARY_MAJOR_SGI_CPP
#	define XIEITE_LIBRARY_MAJOR_SGI_CPP (__SGI_STL / 100)

#	undef XIEITE_LIBRARY_MINOR_SGI_CPP
#	define XIEITE_LIBRARY_MINOR_SGI_CPP (__SGI_STL % 100 / 10)

#	undef XIEITE_LIBRARY_PATCH_SGI_CPP
#	define XIEITE_LIBRARY_PATCH_SGI_CPP (__SGI_STL % 10)
#endif

#ifdef __UCLIBC__
#	undef XIEITE_LIBRARY_TYPE_UC_C
#	define XIEITE_LIBRARY_TYPE_UC_C 1

#	undef XIEITE_LIBRARY_MAJOR_UC_C
#	define XIEITE_LIBRARY_MAJOR_UC_C __UCLIBC_MAJOR__

#	undef XIEITE_LIBRARY_MINOR_UC_C
#	define XIEITE_LIBRARY_MINOR_UC_C __UCLIBC_MINOR__

#	undef XIEITE_LIBRARY_PATCH_UC_C
#	define XIEITE_LIBRARY_PATCH_UC_C __UCLIBC_SUBLEVEL__
#endif

#ifdef __CTRL_VER
#	undef XIEITE_LIBRARY_TYPE_VMS_C
#	define XIEITE_LIBRARY_TYPE_VMS_C 1

#	undef XIEITE_LIBRARY_MAJOR_VMS_C
#	define XIEITE_LIBRARY_MAJOR_VMS_C (__CTRL_VER / 10000000)

#	undef XIEITE_LIBRARY_MINOR_VMS_C
#	define XIEITE_LIBRARY_MINOR_VMS_C (__CTRL_VER % 10000000 / 100000)

#	undef XIEITE_LIBRARY_PATCH_VMS_C
#	define XIEITE_LIBRARY_PATCH_VMS_C (__CTRL_VER % 100000)
#endif

#ifdef __LIBREL__
#	undef XIEITE_LIBRARY_TYPE_Z_C
#	define XIEITE_LIBRARY_TYPE_Z_C 1

#	ifdef __TARGET_LIB__
#		undef XIEITE_LIBRARY_MAJOR_Z_C
#		define XIEITE_LIBRARY_MAJOR_Z_C (__TARGET_LIB__ / 1000000)

#		undef XIEITE_LIBRARY_MINOR_Z_C
#		define XIEITE_LIBRARY_MINOR_Z_C (__TARGET_LIB__ % 1000000 / 10000)

#		undef XIEITE_LIBRARY_PATCH_Z_C
#		define XIEITE_LIBRARY_PATCH_Z_C (__TARGET_LIB__ % 10000)
#	else
#		undef XIEITE_LIBRARY_MAJOR_Z_C
#		define XIEITE_LIBRARY_MAJOR_Z_C (__LIBREL__ / 1000000)

#		undef XIEITE_LIBRARY_MINOR_Z_C
#		define XIEITE_LIBRARY_MINOR_Z_C (__LIBREL__ % 1000000 / 10000)

#		undef XIEITE_LIBRARY_PATCH_Z_C
#		define XIEITE_LIBRARY_PATCH_Z_C (__LIBREL__ % 10000)
#	endif
#endif
