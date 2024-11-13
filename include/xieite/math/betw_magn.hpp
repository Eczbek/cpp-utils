#pragma once

#include "../math/minmax_magn.hpp"
#include "../trait/is_arith.hpp"

namespace xieite {
	template<xieite::is_arith T>
	[[nodiscard]] constexpr bool betw_magn(T value, T limit0, T limit1, bool down_incl = true, bool up_incl = true) noexcept {
		const auto [down, up] = xieite::minmax_magn(limit0, limit1);
		return (down_incl ? (value >= down) : (value > down))
			&& (up_incl ? (value <= up) : (value < up));
	}
}
