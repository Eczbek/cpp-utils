#pragma once

#include <concepts>

namespace xieite {
	template<std::unsigned_integral T>
	[[nodiscard]] constexpr bool pow_of_2(T value) noexcept {
		return value && !(value & (value - 1));
	}
}

// https://graphics.stanford.edu/~seander/bithacks.html#DetermineIfPowerOf2
