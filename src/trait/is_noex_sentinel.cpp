export module xieite:is_noex_sentinel;

import std;
import :has_noex_cp_assign;
import :has_noex_cp_ctor;
import :has_noex_default_ctor;
import :has_noex_dtor;
import :has_noex_mv_assign;
import :has_noex_mv_ctor;
import :is_noex_bool_testable;
import :is_noex_swap;

export namespace xieite {
	template<typename T, typename U>
	concept is_noex_sentinel =
		std::sentinel_for<T, U>
		&& xieite::has_noex_default_ctor<T>
		&& xieite::has_noex_cp_ctor<T>
		&& xieite::has_noex_mv_ctor<T>
		&& xieite::has_noex_dtor<T>
		&& xieite::has_noex_cp_assign<T>
		&& xieite::has_noex_mv_assign<T>
		&& xieite::is_noex_swap<T>
		&& requires(T s0, const T s1, U i0, const U i1) {
			{ s0 == i0 } noexcept -> xieite::is_noex_bool_testable;
			{ s0 == i1 } noexcept -> xieite::is_noex_bool_testable;
			{ s1 == i0 } noexcept -> xieite::is_noex_bool_testable;
			{ s1 == i1 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s0) == i0 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s0) == i1 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s1) == i0 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s1) == i1 } noexcept -> xieite::is_noex_bool_testable;
			{ s0 == std::move(i0) } noexcept -> xieite::is_noex_bool_testable;
			{ s0 == std::move(i1) } noexcept -> xieite::is_noex_bool_testable;
			{ s1 == std::move(i0) } noexcept -> xieite::is_noex_bool_testable;
			{ s1 == std::move(i1) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s0) == std::move(i0) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s0) == std::move(i1) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s1) == std::move(i0) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s1) == std::move(i1) } noexcept -> xieite::is_noex_bool_testable;
			{ i0 == s0 } noexcept -> xieite::is_noex_bool_testable;
			{ i0 == s1 } noexcept -> xieite::is_noex_bool_testable;
			{ i1 == s0 } noexcept -> xieite::is_noex_bool_testable;
			{ i1 == s1 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i0) == s0 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i0) == s1 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i1) == s0 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i1) == s1 } noexcept -> xieite::is_noex_bool_testable;
			{ i0 == std::move(s0) } noexcept -> xieite::is_noex_bool_testable;
			{ i0 == std::move(s1) } noexcept -> xieite::is_noex_bool_testable;
			{ i1 == std::move(s0) } noexcept -> xieite::is_noex_bool_testable;
			{ i1 == std::move(s1) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i0) == std::move(s0) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i0) == std::move(s1) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i1) == std::move(s0) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i1) == std::move(s1) } noexcept -> xieite::is_noex_bool_testable;
			{ s0 != i0 } noexcept -> xieite::is_noex_bool_testable;
			{ s0 != i1 } noexcept -> xieite::is_noex_bool_testable;
			{ s1 != i0 } noexcept -> xieite::is_noex_bool_testable;
			{ s1 != i1 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s0) != i0 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s0) != i1 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s1) != i0 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s1) != i1 } noexcept -> xieite::is_noex_bool_testable;
			{ s0 != std::move(i0) } noexcept -> xieite::is_noex_bool_testable;
			{ s0 != std::move(i1) } noexcept -> xieite::is_noex_bool_testable;
			{ s1 != std::move(i0) } noexcept -> xieite::is_noex_bool_testable;
			{ s1 != std::move(i1) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s0) != std::move(i0) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s0) != std::move(i1) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s1) != std::move(i0) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(s1) != std::move(i1) } noexcept -> xieite::is_noex_bool_testable;
			{ i0 != s0 } noexcept -> xieite::is_noex_bool_testable;
			{ i0 != s1 } noexcept -> xieite::is_noex_bool_testable;
			{ i1 != s0 } noexcept -> xieite::is_noex_bool_testable;
			{ i1 != s1 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i0) != s0 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i0) != s1 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i1) != s0 } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i1) != s1 } noexcept -> xieite::is_noex_bool_testable;
			{ i0 != std::move(s0) } noexcept -> xieite::is_noex_bool_testable;
			{ i0 != std::move(s1) } noexcept -> xieite::is_noex_bool_testable;
			{ i1 != std::move(s0) } noexcept -> xieite::is_noex_bool_testable;
			{ i1 != std::move(s1) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i0) != std::move(s0) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i0) != std::move(s1) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i1) != std::move(s0) } noexcept -> xieite::is_noex_bool_testable;
			{ std::move(i1) != std::move(s1) } noexcept -> xieite::is_noex_bool_testable;
		} && (!std::sized_sentinel_for<T, U>
			|| requires(T s0, const T s1, U i0, const U i1) {
				{ s0 - i0 } noexcept;
				{ s0 - i1 } noexcept;
				{ s1 - i0 } noexcept;
				{ s1 - i1 } noexcept;
				{ std::move(s0) - i0 } noexcept;
				{ std::move(s0) - i1 } noexcept;
				{ std::move(s1) - i0 } noexcept;
				{ std::move(s1) - i1 } noexcept;
				{ s0 - std::move(i0) } noexcept;
				{ s0 - std::move(i1) } noexcept;
				{ s1 - std::move(i0) } noexcept;
				{ s1 - std::move(i1) } noexcept;
				{ std::move(s0) - std::move(i0) } noexcept;
				{ std::move(s0) - std::move(i1) } noexcept;
				{ std::move(s1) - std::move(i0) } noexcept;
				{ std::move(s1) - std::move(i1) } noexcept;
				{ i0 - s0 } noexcept;
				{ i0 - s1 } noexcept;
				{ i1 - s0 } noexcept;
				{ i1 - s1 } noexcept;
				{ std::move(i0) - s0 } noexcept;
				{ std::move(i0) - s1 } noexcept;
				{ std::move(i1) - s0 } noexcept;
				{ std::move(i1) - s1 } noexcept;
				{ i0 - std::move(s0) } noexcept;
				{ i0 - std::move(s1) } noexcept;
				{ i1 - std::move(s0) } noexcept;
				{ i1 - std::move(s1) } noexcept;
				{ std::move(i0) - std::move(s0) } noexcept;
				{ std::move(i0) - std::move(s1) } noexcept;
				{ std::move(i1) - std::move(s0) } noexcept;
				{ std::move(i1) - std::move(s1) } noexcept;
			}
		);
}

// Thanks to Halalaluyafail3 for original code