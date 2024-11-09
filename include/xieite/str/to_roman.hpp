#pragma once

#include <array>
#include <concepts>
#include <memory>
#include <string>
#include "../math/abs.hpp"
#include "../str/sv.hpp"

namespace xieite {
	template<std::integral T, typename Ch = char, typename Traits = std::char_traits<Ch>, typename Alloc = std::allocator<Ch>>
	[[nodiscard]] constexpr std::basic_string<Ch, Traits, Alloc> to_roman(T value) noexcept {
		static constexpr std::array<xieite::sv<Ch, Traits>, 10> ones = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
		static constexpr std::array<xieite::sv<Ch, Traits>, 10> tens = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
		static constexpr std::array<xieite::sv<Ch, Traits>, 10> hundreds = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
		if (!value) {
			return "N";
		}
		const auto absolute = xieite::abs(value);
		return std::basic_string<Ch, Traits, Alloc>(absolute / 1000, 'M') + hundreds[absolute % 1000 / 100] + tens[absolute % 100 / 10] + ones[absolute % 10];
	}
}
