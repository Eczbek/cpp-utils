#pragma once

#include "../meta/is_nothrow_cast_to.hpp"

namespace xieite {
	template<typename T, typename U>
	concept is_nothrow_cast_from = xieite::is_nothrow_cast_to<U, T>;
}
