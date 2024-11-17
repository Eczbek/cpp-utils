#pragma once

#include <algorithm>
#include <compare>
#include <cstddef>
#include <string>
#include <string_view>
#include <type_traits>
#include "../meta/id.hpp"
#include "../str/uppercase.hpp"

namespace xieite {
	template<typename Ch = char, typename Traits = std::char_traits<Ch>>
	[[nodiscard]] constexpr std::strong_ordering comp_ign_case(std::basic_string_view<Ch, Traits> left, xieite::id<std::basic_string_view<Ch, Traits>> right) noexcept {
		const std::size_t size = std::min(left.size(), right.size());
		for (std::size_t i = 0; i < size; ++i) {
			if (std::strong_ordering order = xieite::uppercase(left[i]) <=> xieite::uppercase(right[i]); !std::is_eq(order)) {
				return order;
			}
		}
		return std::strong_ordering::equal;
	}
}
