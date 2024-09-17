export module xieite:math.divideHalfTowardZero;

import std;
import :concepts.Arithmetic;
import :math.sign;

export namespace xieite::math {
	template<xieite::concepts::Arithmetic Arithmetic>
	[[nodiscard]] constexpr Arithmetic divideHalfTowardZero(const Arithmetic dividend, const std::common_type_t<Arithmetic> divisor) noexcept {
		if constexpr (std::floating_point<Arithmetic>) {
			const Arithmetic result = dividend / divisor;
			return std::floor(result) + (result < 0) + (std::fmod(std::abs(result), 1) > 0.5) * xieite::math::sign(result);
		} else {
			return static_cast<Arithmetic>(dividend / divisor + ((dividend % divisor * xieite::math::sign(dividend)) > (divisor / 2 * xieite::math::sign(divisor))) * xieite::math::sign(dividend, divisor));
		}
	}
}

// Thanks to Eisenwave (https://github.com/Eisenwave) for original integer division code
