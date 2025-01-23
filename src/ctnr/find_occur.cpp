module;

#include <xieite/fn.hpp>

export module xieite:find_occur;

import std;
import :find_occur_if;
import :is_invoc;
import :is_noex_invoc;
import :is_noex_range;

export namespace xieite {
	template<std::ranges::forward_range R, xieite::is_invoc<bool(std::ranges::range_common_reference_t<R>, std::ranges::range_common_reference_t<R>)> F = std::ranges::equal_to>
	[[nodiscard]] constexpr std::ranges::iterator_t<R> find_occur(R& range, std::size_t n, std::ranges::range_reference_t<R> value, F&& cmp = {})
	noexcept(xieite::is_noex_invoc<F, bool(std::ranges::range_common_reference_t<R>, std::ranges::range_common_reference_t<R>)> && xieite::is_noex_range<R>) {
		return xieite::find_occur_if(range, n, XIEITE_FN_LOCAL(std::invoke_r<bool>(cmp, value, $0)));
	}
}