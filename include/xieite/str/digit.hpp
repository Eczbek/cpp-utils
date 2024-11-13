#pragma once

#include "../trait/is_ch.hpp"

namespace xieite {
	template<xieite::is_ch Ch = char>
	[[nodiscard]] constexpr bool digit(Ch c) noexcept {
		return (c >= '0') && (c <= '9');
		// https://eel.is/c++draft/lex.charset#9.sentence-5
	}
}
