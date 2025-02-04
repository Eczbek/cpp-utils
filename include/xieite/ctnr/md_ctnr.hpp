#pragma once

#include <cstddef>
#include "../meta/t.hpp"
#include "../meta/v.hpp"

namespace xieite {
	template<template<typename> typename Ctnr, typename V, std::size_t rank>
	using md_ctnr = decltype(([]<std::size_t rest>(this auto self, xieite::v<rest>) {
		if constexpr (rest) {
			return xieite::t<Ctnr<typename decltype(self(xieite::v<(rest - 1)>()))::type>>();
		} else {
			return xieite::t<V>();
		}
	})(xieite::v<rank>()))::type;
}
