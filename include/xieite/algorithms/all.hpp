#ifndef XIEITE_HEADER__ALGORITHMS__ALL
#	define XIEITE_HEADER__ALGORITHMS__ALL

#	include <algorithm>
#	include <concepts>
#	include <ranges>
#	include "../concepts/NoThrowConvertibleToAllOf.hpp"
#	include "../concepts/RangeOf.hpp"

namespace xieite::algorithms {
	template<xieite::concepts::RangeOf<bool> Range>
	constexpr bool all(const Range& range)
	noexcept(noexcept(xieite::concepts::NoThrowConvertibleTo<bool, std::ranges::range_value_t<Range>)) {
		return std::ranges::all_of(range, [](const std::ranges::range_const_reference_t<const Range&> value) -> bool {
			return static_cast<bool>(value);
		});
	}

	template<std::convertible_to<bool>... Values>
	constexpr bool all(const Values&... values)
	noexcept(noexcept(xieite::concepts::NoThrowConvertibleToAllOf<bool, Values...>)) {
		return (... && static_cast<bool>(values));
	}
}

#endif
