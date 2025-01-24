#pragma once

#include <type_traits>
#include "../trait/add_lref.hpp"
#include "../trait/rm_lref.hpp"

namespace xieite {
	template<bool qual, typename T>
	using set_lref = std::conditional_t<qual, xieite::add_lref<T>, xieite::rm_lref<T>>;
}