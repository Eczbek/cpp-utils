#ifndef XIEITE_HEADER__STRINGS__HASH
#	define XIEITE_HEADER__STRINGS_HASHs

#	include <cstddef>
#	include <string_view>

namespace xieite::strings {
	constexpr std::size_t hash(const std::string_view string) noexcept {
		std::size_t result = 5381;
		for (const char character : string) {
			result = result * 33 + character;
		}
		return result;
	}
}

#endif