#pragma once

#include "../trait/cp_var_c.hpp"
#include "../trait/cp_noex.hpp"

namespace xieite {
	template<typename T, typename U>
	using cp_var_c_noex = xieite::cp_var_c<T, xieite::cp_noex<T, U>>;
}