#pragma once

#include <chrono>
#include <type_traits>
#include <utility>
#include "../meta/is_arith.hpp"
#include "../meta/is_ratio.hpp"

namespace xieite {
	template<typename T>
	concept is_duration = requires {
		([]<xieite::is_arith U, xieite::is_ratio Ratio>(std::chrono::duration<U, Ratio>) {})(std::declval<std::remove_cv_t<T>>());
	};
}
