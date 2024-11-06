#pragma once

#include <cstddef>
#include "../meta/state.hpp"

namespace XIEITE_DETAIL {
	using type_id_state = xieite::state<>;
}

namespace xieite {
	template<typename>
	inline constexpr std::size_t type_id = XIEITE_DETAIL::type_id_state::advance();
}
