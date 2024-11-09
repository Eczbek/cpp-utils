#pragma once

#include <bitset>
#include <concepts>
#include <cstddef>
#include "../fn/unroll.hpp"
#include "../meta/try_unsign.hpp"

namespace xieite {
	template<std::size_t... sizes, std::integral... Ts>
	[[nodiscard]] constexpr std::bitset<(... + sizes)> bit_mash(Ts... values) noexcept {
		std::bitset<(... + sizes)> result;
		(..., (result = (result >> sizes) | (std::bitset<(... + sizes)>(static_cast<xieite::try_unsign<Ts>>(values)) << ((... + sizes) - sizes))));
		return result;
	}

	template<std::size_t... sizes, std::integral T>
	[[nodiscard]] constexpr std::bitset<(... + sizes)> bit_mash(const std::array<T, sizeof...(sizes)>& values) noexcept {
		std::bitset<(... + sizes)> result;
		xieite::unroll<sizeof...(sizes)>([&values, &result]<std::size_t... i> -> void {
			(..., (result = (result >> sizes) | (std::bitset<(... + sizes)>(static_cast<xieite::try_unsign<T>>(values[i])) << ((... + sizes) - sizes))));
		});
		return result;
	}
}
