#pragma once

#include <concepts>
#include <utility>
#include "../pp/arrow.hpp"
#include "../pp/fwd.hpp"

namespace xieite {
	template<std::integral auto n>
	constexpr auto repeat(auto&& fn, auto&&... args)
	XIEITE_ARROW((
		[&fn, &args...]<auto... i>(std::integer_sequence<decltype(n), i...>)
		XIEITE_ARROW(..., fn.template operator()<i>(XIEITE_FWD(args)...))
	)(std::make_integer_sequence<decltype(n), n>()))

	template<typename... Ts>
	constexpr auto repeat(auto&& fn, auto&&... args)
	XIEITE_ARROW(xieite::repeat<sizeof...(Ts)>(XIEITE_FWD(fn), XIEITE_FWD(args)...))
}
