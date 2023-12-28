#ifndef XIEITE_HEADER_MATH_ALMOST_EQUAL_SLOPE
#	define XIEITE_HEADER_MATH_ALMOST_EQUAL_SLOPE

#	include <cmath>
#	include "../concepts/arithmetic.hpp"
#	include "../math/almost_equal.hpp"

namespace xieite::math {
	template<xieite::concepts::Arithmetic Number1, xieite::concepts::Arithmetic Number2>
	[[nodiscard]] constexpr bool almostEqualSlope(const Number1 value1, const Number2 value2) noexcept {
		return std::isinf(value1) && std::isinf(value2) || xieite::math::almostEqual(value1, value2);
	}
}

#endif
