#pragma once

#include <type_traits>

namespace xieite::types {
	template<typename Type, bool qualified>
	using MaybeLeftValueReference = std::conditional_t<qualified, std::add_lvalue_reference_t<std::remove_reference_t<Type>>, std::remove_reference_t<Type>>;
}
