#pragma once

#include <cmath>
#include <concepts>
#include <type_traits>
#include "../math/sign.hpp"
#include "../meta/is_arith.hpp"

namespace xieite {
	template<xieite::is_arith T>
	[[nodiscard]] constexpr T div_half_to_zero(T dividend, std::type_identity_t<T> divisor) noexcept {
		if constexpr (std::floating_point<T>) {
			const T result = dividend / divisor;
			return std::floor(result) + (result < 0) + (std::fmod(std::abs(result), 1) > 0.5) * xieite::sign(result);
		} else {
			return static_cast<T>(dividend / divisor + ((dividend % divisor * xieite::sign(dividend)) > (divisor / 2 * xieite::sign(divisor))) * xieite::sign(dividend, divisor));
		}
	}
}

// Thanks to Eisenwave (https://github.com/Eisenwave) for original integer division code