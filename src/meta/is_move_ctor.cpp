export module xieite:is_move_ctor;

import std;

export namespace xieite {
	template<typename T>
	concept is_move_ctor = std::is_move_constructible_v<T>;
}