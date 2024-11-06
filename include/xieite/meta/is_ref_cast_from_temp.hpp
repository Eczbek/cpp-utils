#pragma once

#include <type_traits>

namespace xieite {
	template<typename T, typename U>
	concept is_ref_cast_from_temp = std::reference_converts_from_temporary_v<T, U>;
}
