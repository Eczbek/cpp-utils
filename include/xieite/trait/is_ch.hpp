#pragma once

#include <type_traits>
#include "../trait/is_same_any.hpp"
#include "../trait/is_wide_ch.hpp"

namespace xieite {
	template<typename T>
	concept is_ch = xieite::is_wide_ch<T> || xieite::is_same_any<std::remove_cv_t<T>, char, char8_t>;
}

// https://eel.is/c++draft/basic.fundamental#11
