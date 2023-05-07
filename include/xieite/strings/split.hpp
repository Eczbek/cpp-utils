#pragma once

#include <cstddef>
#include <string>
#include <string_view>
#include <vector>

namespace xieite::strings {
	[[nodiscard]]
	constexpr std::vector<std::string> split(const std::string& string, const std::string_view delimiter = "") noexcept {
		std::vector<std::string> segments;
		const std::size_t stringSize = string.size();
		const std::size_t delimiterSize = delimiter.size();
		std::size_t i = 0;
		for (std::size_t j = 0; j < stringSize - i; ++j) {
			if (string.substr(j, delimiterSize) == delimiter) {
				segments.push_back(string.substr(i, j - i));
				i = j += delimiterSize;
			}
		}
		segments.push_back(string.substr(i));
		return segments;
	}

	[[nodiscard]]
	constexpr std::vector<std::string> split(const std::string& string, const char delimiter) noexcept {
		return xieite::strings::split(string, std::string(1, delimiter));
	}
}