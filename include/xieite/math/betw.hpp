#pragma once

#include "../math/minmax.hpp"
#include "../trait/is_arith.hpp"

namespace xieite {
	template<xieite::is_arith T>
	[[nodiscard]] constexpr bool betw(T value, T limit0, T limit1, bool lower_incl = true, bool upper_incl = true) noexcept {
		const auto [lower, upper] = xieite::minmax(limit0, limit1);
		return (lower_incl ? (value >= lower) : (value > lower))
			&& (upper_incl ? (value <= upper) : (value < upper));
	}
}
