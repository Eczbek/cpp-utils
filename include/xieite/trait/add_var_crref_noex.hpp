#pragma once

#include "../trait/add_noex.hpp"
#include "../trait/add_var_crref.hpp"

namespace xieite {
	template<typename T>
	using add_var_crref_noex = xieite::add_var_crref<xieite::add_noex<T>>;
}