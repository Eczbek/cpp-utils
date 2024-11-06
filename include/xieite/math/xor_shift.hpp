#pragma once

#include <concepts>
#include <cstddef>

namespace xieite {
	template<std::integral T>
	[[nodiscard]] constexpr T xor_shift(T value, std::size_t bits) noexcept {
		return value ^ (value >> bits);
	}
}
