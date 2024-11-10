#pragma once

#include "../meta/is_satisf.hpp"

namespace xieite {
	template<typename T, auto fn>
	concept is_dsatisf = !xieite::is_satisf<T, fn>;
}