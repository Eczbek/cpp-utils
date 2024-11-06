#pragma once

#include <type_traits>

namespace xieite {
	template<typename T>
	concept is_copy_ctor = std::is_copy_constructible_v<T>;
}
