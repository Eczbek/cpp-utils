#pragma once

#include <memory>
#include <string>
#include <string_view>
#include "../meta/end.hpp"
#include "../str/str_rplc.hpp"

namespace xieite {
	template<typename Ch = char, typename Traits = std::char_traits<Ch>, typename Alloc = std::allocator<Ch>, xieite::end...,
		typename Str = std::basic_string<Ch, Traits, Alloc>>
	[[nodiscard]] constexpr Str unquot(Str str, Ch delim = '"', Ch esc = '\\') noexcept {
		str = str.substr(str[0] == delim, str.size() - (str[str.size() - 1] == delim));
		const Str esc_delim = Str(1, esc) + delim;
		if (delim == esc) {
			return xieite::str_rplc(std::move(str), esc_delim, delim);
		} else {
			return xieite::str_rplc(xieite::str_rplc(std::move(str), Str(2, esc), esc), esc_delim, delim);
		}
	}
}
