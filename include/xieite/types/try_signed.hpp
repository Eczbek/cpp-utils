#pragma once

#include <type_traits>
#include "../concepts/unsigned_integral.hpp"

namespace xieite::types {
	template<typename Type>
	using TrySigned = std::conditional_t<xieite::concepts::UnsignedIntegral<Type>, std::make_signed<Type>, std::type_identity<Type>>::type;
}