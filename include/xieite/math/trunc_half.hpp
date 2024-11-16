#pragma once

#include "../math/div_trunc_half.hpp"
#include "../trait/is_arith.hpp"

namespace xieite {
	template<xieite::is_arith T>
	[[nodiscard]] constexpr T trunc_half(T value, T step = 1) noexcept {
		return xieite::div_trunc_half(value, step) * step;
	}
}
