#ifndef XIEITE_HEADER__MATH__CONDITIONAL_SIGN
#	define XIEITE_HEADER__MATH__CONDITIONAL_SIGN

#	include <type_traits>
#	include "../concepts/Integer.hpp"

namespace xieite::math {
	template<xieite::concepts::Integer Integer, bool sign>
	using ConditionalSign = std::conditional_t<sign, std::make_signed_t<Integer>, std::make_unsigned_t<Integer>>;
}

#endif
