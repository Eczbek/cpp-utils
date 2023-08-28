#ifndef XIEITE_HEADER__STRINGS__TRIM_BACK
#	define XIEITE_HEADER__STRINGS__TRIM_BACK

#	include <cstddef>
#	include <string_view>

namespace xieite::strings {
	constexpr std::string_view trimBack(const std::string_view string, const char character) noexcept {
		const std::size_t end = string.find_last_not_of(character);
		return (end == std::string_view::npos) ? "" : string.substr(0, end + 1);
	}

	constexpr std::string_view trimBack(const std::string_view string, const std::string_view characters) noexcept {
		const std::size_t end = string.find_last_not_of(characters);
		return (end == std::string_view::npos) ? "" : string.substr(0, end + 1);
	}
}

#endif
