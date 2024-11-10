#pragma once

#include <algorithm>
#include <compare>
#include <cstddef>
#include <string>
#include "../str/sv.hpp"
#include "../str/upper.hpp"

namespace xieite {
	template<typename Ch = char, typename Traits = std::char_traits<Ch>>
	[[nodiscard]] constexpr std::strong_ordering comp_ign_case(xieite::sv<Ch, Traits> left, xieite::sv<Ch, Traits> right) noexcept {
		const std::size_t size = std::min(left.view.size(), right.view.size());
		for (std::size_t i = 0; i < size; ++i) {
			if (std::strong_ordering order = xieite::upper(left.view[i]) <=> xieite::upper(right.view[i]); !std::is_eq(order)) {
				return order;
			}
		}
		return std::strong_ordering::equal;
	}
}