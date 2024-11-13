#pragma once

#include <cstddef>
#include <string>
#include <string_view>
#include "../meta/end.hpp"
#include "../meta/id.hpp"
#include "../str/chv.hpp"

namespace xieite {
	template<typename Ch = char, typename Traits = std::char_traits<Ch>, xieite::end...,
		typename StrV = std::basic_string_view<Ch, Traits>>
	[[nodiscard]] constexpr StrV trim_back(StrV str, xieite::id<xieite::chv<Ch, Traits>> chars) noexcept {
		const std::size_t end = str.find_last_not_of(chars);
		return (end == std::string::npos) ? "" : str.substr(0, end + 1);
	}
}
