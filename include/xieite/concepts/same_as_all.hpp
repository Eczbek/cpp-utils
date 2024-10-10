#pragma once

#include <concepts>

namespace xieite::concepts {
	template<typename First, typename... Rest>
	concept SameAsAll = (... || std::same_as<First, Rest>);
}
