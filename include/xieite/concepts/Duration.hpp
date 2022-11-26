#pragma once
#include <type_traits>
#include <xieite/traits/isDuration.hpp>

namespace xieite::concepts {
	template<typename T>
	concept Duration = xieite::traits::isDuration<std::remove_cv_t<T>>;
}