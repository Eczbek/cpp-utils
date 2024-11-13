#pragma once

#include <concepts>
#include <functional>
#include <ranges>
#include "../math/num_rev.hpp"
#include "../trait/is_invoc.hpp"
#include "../trait/is_nothrow_invoc.hpp"
#include "../trait/is_nothrow_range.hpp"

namespace xieite {
	template<std::ranges::forward_range R, xieite::is_invoc<bool(std::ranges::range_common_reference_t<R>, std::ranges::range_common_reference_t<R>)> F = std::ranges::equal_to>
	requires(std::ranges::sized_range<R>)
	[[nodiscard]] constexpr bool palindrome(R&& range, F&& comp = {})
	noexcept(xieite::is_nothrow_invoc<F, bool(std::ranges::range_common_reference_t<R>, std::ranges::range_common_reference_t<R>)> && xieite::is_nothrow_range<R>) {
		auto it0 = std::ranges::begin(range);
		auto it1 = std::ranges::end(range);
		for (std::size_t i = std::ranges::size(range) / 2; i--;) {
			--it1;
			if (!std::invoke_r<bool>(comp, *it0, *it1)) {
				return false;
			}
			++it0;
		}
		return true;
	}

	template<std::integral T>
	[[nodiscard]] constexpr bool palindrome(T value, T radix = 10) noexcept {
		return value == xieite::num_rev(value, radix);
	}
}
