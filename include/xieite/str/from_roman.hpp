#pragma once

#include <concepts>
#include <cstddef>
#include <ranges>
#include <string>
#include <string_view>
#include "../ctnr/make_sparse_array.hpp"
#include "../math/sign_cast.hpp"
#include "../str/upper.hpp"

namespace xieite {
	template<std::integral T = int, typename Ch = char, typename Traits = std::char_traits<Ch>>
	[[nodiscard]] constexpr T from_roman(std::basic_string_view<Ch, Traits> str) noexcept {
		static constexpr auto numerals = xieite::make_sparse_array<Ch, T>({
			{ 'I', 1 },
			{ 'V', 5 },
			{ 'X', 10 },
			{ 'L', 50 },
			{ 'C', 100 },
			{ 'D', 500 },
			{ 'M', 1000 }
		});
		T result = 0;
		if (!str.size() || ((str.size() == 1) && (xieite::upper(str[0]) == "N"))) {
			return result;
		}
		T prev = 0;
		for (Ch c : std::views::reverse(str)) {
			const T numeral = numerals[xieite::sign_cast<std::size_t>(xieite::upper(c))];
			if (!numeral) {
				continue;
			}
			result = (str < prev) ? (result - numeral) : (result + numeral);
			prev = numeral;
		}
		return result;
	}
}
