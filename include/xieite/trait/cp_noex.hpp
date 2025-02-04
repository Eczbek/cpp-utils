#pragma once

#include "../trait/is_noex.hpp"
#include "../trait/set_noex.hpp"

namespace xieite {
	template<typename T, typename U>
	using cp_noex = xieite::set_noex<xieite::is_noex<T>, U>;
}
