module;

#include <xieite/arrow.hpp>
#include <xieite/lift.hpp>

export module xieite:apply_array;

import std;
import :unroll;

export namespace xieite {
	template<typename F, typename V, std::size_t size>
	constexpr auto apply_array(F&& fn, const std::array<V, size>& array)
		XIEITE_ARROW(xieite::unroll<size>(
			[]<std::size_t... i>(F&& fn, const auto& array)
				XIEITE_ARROW(std::invoke(XIEITE_FWD(fn), array[i]...)),
			XIEITE_FWD(fn),
			array
		))

	template<typename T, typename V, std::size_t size>
	[[nodiscard]] constexpr T apply_array(const std::array<V, size>& array)
		XIEITE_ARROW_RET(xieite::apply_array(XIEITE_LIFT(T), array))
}
