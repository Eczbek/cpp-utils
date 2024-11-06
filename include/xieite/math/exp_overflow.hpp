#pragma once

#include <cmath>
#include <concepts>
#include <limits>
#include "../meta/is_arith.hpp"

namespace xieite {
	template<xieite::is_arith T, std::convertible_to<T>... Ts>
	[[nodiscard]] constexpr bool exp_overflow(T first, Ts... rest) noexcept {
		return sizeof...(Ts)
			&& first
			&& (first != 1)
			&& (std::unsigned_integral<T>
				|| (first != static_cast<T>(-1)))
			&& (... || ([&first, rest] -> bool {
				// Store power in some deduced fractional type
				const auto pow = std::pow(first, rest);
				if ((pow > std::numeric_limits<T>::max()) || (!std::unsigned_integral<T> && (pow < std::numeric_limits<T>::min()))) {
					return true;
				}
				first = static_cast<T>(pow);
				return false;
			})());
	}
}
