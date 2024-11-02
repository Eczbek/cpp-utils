export module xieite:to_roman;

import std;
import :abs;
import :sv;

export namespace xieite {
	template<std::integral T>
	[[nodiscard]] constexpr std::string to_roman(T value) noexcept {
		static constexpr std::array<xieite::sv<char>, 10> ones = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
		static constexpr std::array<xieite::sv<char>, 10> tens = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
		static constexpr std::array<xieite::sv<char>, 10> hundreds = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
		if (!value) {
			return "N";
		}
		const auto absolute = xieite::abs(value);
		return std::string(absolute / 1000, 'M') + hundreds[absolute % 1000 / 100] + tens[absolute % 100 / 10] + ones[absolute % 10];
	}
}