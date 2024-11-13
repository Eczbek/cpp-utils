#pragma once

#include <string>
#include <string_view>
#include "../meta/end.hpp"
#include "../meta/id.hpp"
#include "../str/chv.hpp"

namespace xieite {
	template<typename Ch = char, typename Traits = std::char_traits<Ch>, xieite::end...,
		typename StrV = std::basic_string_view<Ch, Traits>>
	[[nodiscard]] constexpr StrV str_before(StrV str, xieite::id<xieite::chv<Ch, Traits>> end) noexcept {
		return str.substr(0, str.rfind(end));
	}
}
