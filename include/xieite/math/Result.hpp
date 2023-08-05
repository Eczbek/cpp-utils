#ifndef XIEITE_HEADER__MATH__RESULT
#	define XIEITE_HEADER__MATH__RESULT

#	include <type_traits>
#	include "../concepts/Arithmetic.hpp"
#	include "../concepts/SameAsAnyOf.hpp"

namespace xieite::math {
	template<xieite::concepts::Arithmetic... Arithmetics>
	using Result = std::conditional_t<xieite::concepts::SameAsAnyOf<long double, Arithmetics...>, long double, double>;
}

#endif
