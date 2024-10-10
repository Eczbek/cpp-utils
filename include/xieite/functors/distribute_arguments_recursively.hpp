#pragma once

#include <cstddef>
#include <tuple>
#include <type_traits>
#include <utility>
#include "../containers/splice_tuple.hpp"
#include "../functors/unroll.hpp"
#include "../preprocessor/forward.hpp"
#include "../types/any.hpp"
#include "../types/list.hpp"

namespace xieite::functors {
	template<std::size_t arity, std::size_t previousResultIndex = 0, typename Functor, typename... Arguments>
	requires(xieite::types::List<xieite::types::Any>::template Repeat<arity>::template Prepend<Functor>::template To<std::is_invocable>::value)
	/* discardable */ constexpr decltype(auto) distributeArgumentsRecursively(Functor&& functor, Arguments&&... arguments)
	noexcept(xieite::types::List<xieite::types::Any>::template Repeat<arity>::template Prepend<Functor>::template To<std::is_nothrow_invocable>::value) {
		static_assert(previousResultIndex < arity, "index of previous result must be within functor arity");
		static_assert((arity > 1) || !sizeof...(Arguments), "arguments must be distributable across functor calls");
		static_assert(sizeof...(Arguments) >= arity, "number of arguments must not be less than functor arity");
		if constexpr (sizeof...(Arguments) == arity) {
			return std::invoke(XIEITE_FORWARD(functor), XIEITE_FORWARD(arguments)...);
		} else {
			const std::tuple<Arguments&&...> argumentsTuple = std::forward_as_tuple(XIEITE_FORWARD(arguments)...);
			const auto resultsTuple = xieite::containers::spliceTuple<previousResultIndex + arity>(argumentsTuple, std::forward_as_tuple(std::apply(functor, xieite::containers::spliceTuple<arity, sizeof...(Arguments) - arity>(argumentsTuple))));
			return xieite::functors::unroll<sizeof...(Arguments) - arity + 1>([&functor, &resultsTuple]<std::size_t... i> {
				return xieite::functors::distributeArgumentsRecursively<arity, previousResultIndex>(XIEITE_FORWARD(functor), std::get<i + arity>(std::move(resultsTuple))...);
			});
		}
	}
}
