#ifndef XIEITE_HEADER__MACROS__REPEAT
#	define XIEITE_HEADER__MACROS__REPEAT

#	include "../macros/LOOP.hpp"

#	define XIEITE__REPEAT(count, argument) XIEITE__LOOP(count, XIEITE_INTERNAL__REPEAT, , argument)

#	define XIEITE_INTERNAL__REPEAT(count, accumulator, argument) accumulator argument

#endif
