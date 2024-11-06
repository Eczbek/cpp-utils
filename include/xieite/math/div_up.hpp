#pragma once

#include <cmath>
#include <concepts>
#include <type_traits>
#include "../math/sign.hpp"
#include "../meta/is_arith.hpp"

namespace xieite {
	template<xieite::is_arith T>
	[[nodiscard]] constexpr T div_up(T dividend, std::type_identity_t<T> divisor) {
		if constexpr (std::floating_point<T>) {
			return std::ceil(dividend / divisor);
		} else {
			return static_cast<T>(dividend / divisor + !!(dividend % divisor) * (xieite::sign(dividend, divisor) > 0));
		}
	}
}
