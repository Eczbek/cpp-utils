export module xieite:has_noex_mv_ctor;

import std;

export namespace xieite {
	template<typename T>
	concept has_noex_mv_ctor = std::is_nothrow_move_constructible_v<T>;
}