#pragma once

#include "../types/copy_constant.hpp"
#include "../types/copy_reference.hpp"
#include "../types/copy_volatile.hpp"

namespace xieite::types {
	template<typename Source, typename Target>
	using CopyQualifiers = xieite::types::CopyReference<Source, xieite::types::CopyVolatile<Source, xieite::types::CopyConstant<Source, Target>>>;
}
