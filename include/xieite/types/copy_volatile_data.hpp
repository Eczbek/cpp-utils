#pragma once

#include "../concepts/pointer.hpp"
#include "../concepts/volatile.hpp"
#include "../types/maybe_volatile_data.hpp"

namespace xieite::types {
	template<typename Source, xieite::concepts::Pointer Target>
	using CopyVolatileData = xieite::types::MaybeVolatileData<Target, xieite::concepts::Volatile<Source>>;
}
