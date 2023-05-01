#pragma once

#include <string_view>

namespace xieite::terminal {
	constexpr std::string_view setTextItalic(const bool value) noexcept {
		return value ? "\u001b[3m" : "\u001b[23m";
	}
}
