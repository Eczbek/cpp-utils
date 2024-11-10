#pragma once

#include <cstddef>
#include <functional>
#include <ranges>
#include "../algo/find_occur_if.hpp"
#include "../meta/is_invoc.hpp"
#include "../pp/fn.hpp"

namespace xieite {
	template<std::ranges::forward_range R, xieite::is_invoc<bool(std::ranges::range_common_reference_t<R>, std::ranges::range_common_reference_t<R>)> F = std::ranges::equal_to>
	[[nodiscard]] constexpr std::ranges::iterator_t<R> find_occur(R& range, std::size_t n, std::ranges::range_reference_t<R> value, F&& comp = {})
	noexcept(xieite::is_nothrow_invoc<F, bool(std::ranges::range_common_reference_t<R>, std::ranges::range_common_reference_t<R>)> && xieite::is_nothrow_range<R>) {
		return xieite::find_occur_if(range, n, XIEITE_FN_LOCAL(std::invoke_r<bool>(comp, value, $0)));
	}
}