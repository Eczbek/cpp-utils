#pragma once

#include "../concepts/constant.hpp"
#include "../concepts/pointer.hpp"
#include "../types/maybe_constant_data.hpp"

namespace xieite::types {
	template<typename Source, xieite::concepts::Pointer Target>
	using CopyConstantData = xieite::types::MaybeConstantData<Target, xieite::concepts::Constant<Source>>;
}
