#ifndef XIEITE_HEADER__CONCEPTS__CONVERTIBLE_TO_NOT_ALL
#	define XIEITE_HEADER__CONCEPTS__CONVERTIBLE_TO_NOT_ALL

#	include "../concepts/convertible_to_all.hpp"

namespace xieite::concepts {
	template<typename Source, typename... Targets>
	concept ConvertibleToNotAll = !xieite::concepts::ConvertibleToAll<Source, Targets...>;
}

#endif
