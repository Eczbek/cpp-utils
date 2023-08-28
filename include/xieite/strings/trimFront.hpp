#ifndef XIEITE_HEADER__STRINGS__TRIM_FRONT
#	define XIEITE_HEADER__STRINGS__TRIM_FRONT

#	include <cstddef>
#	include <string_view>

namespace xieite::strings {
	constexpr std::string_view trimFront(const std::string_view string, const char character) noexcept {
		const std::size_t start = string.find_first_not_of(character);
		return (start == std::string_view::npos) ? "" : string.substr(start);
	}

	constexpr std::string_view trimFront(const std::string_view string, const std::string_view characters) noexcept {
		const std::size_t start = string.find_first_not_of(characters);
		return (start == std::string_view::npos) ? "" : string.substr(start);
	}
}

#endif
