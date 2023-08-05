#ifndef XIEITE_HEADER__TRAITS__BASE_OF_ANY_OF
#	define XIEITE_HEADER__TRAITS__BASE_OF_ANY_OF

#	include <type_traits>
#	include "../concepts/BaseOf.hpp"

namespace xieite::traits {
	template<typename Source, typename... Targets>
	struct IsBaseOfAnyOf
	: std::bool_constant<(xieite::concepts::BaseOf<Source, Targets> || ...)> {};
}

#endif
