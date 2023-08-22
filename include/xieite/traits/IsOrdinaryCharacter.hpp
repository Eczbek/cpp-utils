#ifndef XIEITE_HEADER__TRAITS__IS_ORDINARY_CHARACTER
#	define XIEITE_HEADER__TRAITS__IS_ORDINARY_CHARACTER

#	include <type_traits>
#	include "../concepts/OrdinaryCharacter.hpp"

namespace xieite::traits {
	template<typename Type>
	struct IsOrdinaryCharacter
	: std::bool_constant<xieite::concepts::OrdinaryCharacter<Type>> {};
}

#endif