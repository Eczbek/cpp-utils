#ifndef XIEITE_HEADER__CONCEPTS__FUNCTABLE
#	define XIEITE_HEADER__CONCEPTS__FUNCTABLE

#	include "../traits/IsFunctable.hpp"

namespace xieite::concepts {
	template<typename Functor, typename Pointer>
	concept Functable = xieite::traits::IsFunctable<Functor, Pointer>::value;
}

#endif
