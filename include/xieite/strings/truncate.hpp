#pragma once

#include <cstddef>
#include <string>

namespace xieite::strings {
	[[nodiscard]]
	constexpr std::string truncate(const std::string& string, const std::size_t length, const std::string& suffix = "") noexcept {
		return (string.size() > length) ? ((suffix.size() > length) ? suffix.substr(0, length) : (string.substr(0, length - suffix.size()) + suffix)) : string;
	}
}