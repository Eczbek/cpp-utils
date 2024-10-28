export module xieite:is_duration;

import std;
import :is_arith;
import :is_ratio;

export namespace xieite {
	template<typename T>
	concept is_duration = requires { ([]<xieite::is_arith U, xieite::is_ratio Ratio>(std::type_identity<std::chrono::duration<U, Ratio>>) {})(std::type_identity<std::remove_cv_t<T>>()); };
}
