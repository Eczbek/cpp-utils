module;

#include <xieite/arrow.hpp>
#include <xieite/fwd.hpp>

export module xieite:unroll;

import std;

export namespace xieite {
	template<std::integral auto n>
	constexpr auto unroll(auto&& fn, auto&&... args)
	XIEITE_ARROW((
		[&fn, &args...]<auto... i>(std::integer_sequence<decltype(n), i...>)
		XIEITE_ARROW(XIEITE_FWD(fn).template operator()<i...>(XIEITE_FWD(args)...))
	)(std::make_integer_sequence<decltype(n), n>()))

	template<typename... Ts>
	constexpr auto unroll(auto&& fn, auto&&... args)
	XIEITE_ARROW(xieite::unroll<sizeof...(Ts)>(XIEITE_FWD(fn), XIEITE_FWD(args)...))
}
