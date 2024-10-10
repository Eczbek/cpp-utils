#pragma once

#include <concepts>

namespace xieite::concepts {
	template<typename First, typename... Rest>
	concept SameAsAny = (... || std::same_as<First, Rest>);
}
