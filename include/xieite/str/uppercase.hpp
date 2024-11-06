#pragma once

#include <array>
#include <cstddef>
#include <memory>
#include <numeric>
#include <string>
#include "../math/bit_size.hpp"
#include "../math/sign_cast.hpp"
#include "../meta/is_char.hpp"
#include "../str/chars.hpp"

namespace xieite {
	template<xieite::is_char C = char>
	[[nodiscard]] constexpr C uppercase(C c) noexcept {
		using Lookup = std::array<C, (1uz << xieite::bit_size<C>)>;
		static constexpr Lookup lookup = ([] -> Lookup {
			Lookup lookup;
			std::ranges::iota(lookup, '\0');
			for (std::size_t i = 0; i < xieite::chars::alphabet_size; ++i) {
				lookup[xieite::sign_cast<std::size_t>(xieite::chars::lower[i])] = static_cast<C>(xieite::chars::upper[i]);
			}
			return lookup;
		})();
		return lookup[xieite::sign_cast<std::size_t>(c)];
	}

	template<typename C = char, typename Traits = std::char_traits<C>, typename Alloc = std::allocator<C>>
	[[nodiscard]] constexpr std::basic_string<C, Traits, Alloc> uppercase(std::basic_string<C, Traits, Alloc> str) noexcept {
		for (C& c : str) {
			c = xieite::uppercase(c);
		}
		return str;
	}
}
