#ifndef XIEITE_HEADER_MACROS_CONCATENATE
#	define XIEITE_HEADER_MACROS_CONCATENATE

#	define XIEITE_CONCATENATE(first, second) \
		XIEITE_INTERNAL_CONCATENATE(first, second)

#	define XIEITE_INTERNAL_CONCATENATE(first, second) \
		first ## second

#endif
