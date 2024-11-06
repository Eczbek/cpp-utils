#pragma once

#include <algorithm>
#include <concepts>
#include "../math/interval.hpp"
#include "../meta/is_arith.hpp"

namespace xieite {
	template<xieite::is_arith T, std::convertible_to<T>... Ts>
	[[nodiscard]] constexpr xieite::interval<T> limits_fixed(T first, Ts... rest) noexcept {
		auto result = xieite::interval<T>(first, first);
		(..., (result =
			xieite::interval<T>(
				std::min(result.start, rest),
				std::max(result.end, rest)
			)
		));
		return result;
	}
}
