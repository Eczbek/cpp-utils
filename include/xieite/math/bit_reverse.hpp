#pragma once

#include <bitset>
#include <concepts>
#include <cstddef>
#include "../fn/unroll.hpp"
#include "../math/bit_size.hpp"

namespace xieite {
	template<std::integral T>
	[[nodiscard]] constexpr T bit_reverse(T value) noexcept {
		return xieite::unroll<xieite::bit_size<T>>([value]<std::size_t... i> -> T {
			return (... | (((value >> i) & 1) << (xieite::bit_size<T> - i - 1)));
		});
	}

	template<std::size_t bits>
	[[nodiscard]] constexpr std::bitset<bits> bit_reverse(const std::bitset<bits>& value) noexcept {
		return xieite::unroll<bits>([&value]<std::size_t... i> -> std::bitset<bits> {
			return (... | (std::bitset<bits>(value[i]) << (bits - i - 1)));
		});
	}
}
