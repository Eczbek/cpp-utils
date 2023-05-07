#pragma once

#include <xieite/concepts/Derivable.hpp>
#include <xieite/functions/OptionalCallOperator.hpp>

namespace xieite::functions {
	template<xieite::concepts::Derivable... Functions>
	struct Overloader final
	: xieite::functions::OptionalCallOperator<Functions>... {
		constexpr Overloader(const Functions&... functions)
		: xieite::functions::OptionalCallOperator<Functions>(functions)... {}

		using xieite::functions::OptionalCallOperator<Functions>::operator()...;
	};
}

// Thanks to melak47 for help