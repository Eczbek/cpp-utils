#pragma once

#include "../meta/is_satisfd.hpp"

namespace xieite {
	template<auto fn, typename... Ts>
	concept is_satisfd_any = (... || xieite::is_satisfd<fn, Ts>);
}
