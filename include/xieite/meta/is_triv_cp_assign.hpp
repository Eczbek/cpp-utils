#pragma once

#include <type_traits>

namespace xieite {
	template<typename T>
	concept is_triv_cp_assign = std::is_trivially_copy_assignable_v<T>;
}
