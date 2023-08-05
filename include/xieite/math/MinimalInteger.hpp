#ifndef XIEITE_HEADER__MATH__MINIMAL_INTEGER
#	define XIEITE_HEADER__MATH__MINIMAL_INTEGER

#	include <cstddef>
#	include <cstdint>
#	include <limits>
#	include <type_traits>

namespace xieite::math {
	template<std::size_t bits>
	using MinimalInteger = std::conditional_t<bits <= std::numeric_limits<std::uint8_t>::digits, std::uint8_t, std::conditional_t<bits <= std::numeric_limits<std::uint16_t>::digits, std::uint16_t, std::conditional_t<bits <= std::numeric_limits<std::uint32_t>::digits, std::uint32_t, std::uint64_t>>>;
}

#endif
