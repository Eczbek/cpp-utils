export module xieite:bits.mash;

import std;
import :types.TryUnsigned;

export namespace xieite::bits {
	template<std::size_t... sizes, std::integral... Integrals>
	[[nodiscard]] constexpr std::bitset<(... + sizes)> mash(const Integrals... values) noexcept {
		std::bitset<(... + sizes)> result;
		(..., (result = (result >> sizes) | (std::bitset<(... + sizes)>(static_cast<xieite::types::TryUnsigned<Integrals>>(values)) << ((... + sizes) - sizes))));
		return result;
	}

	template<std::size_t... sizes, std::integral Integral>
	[[nodiscard]] constexpr std::bitset<(... + sizes)> mash(const std::array<Integral, sizeof...(sizes)>& values) noexcept {
		return ([&values]<std::size_t... i>(std::index_sequence<i...>) {
			std::bitset<(... + sizes)> result;
			(..., (result = (result >> sizes) | (std::bitset<(... + sizes)>(static_cast<xieite::types::TryUnsigned<Integral>>(values[i])) << ((... + sizes) - sizes))));
			return result;
		})(std::make_index_sequence<sizeof...(sizes)>());
	}
}