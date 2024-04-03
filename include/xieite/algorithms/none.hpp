#ifndef XIEITE_HEADER_ALGORITHMS_ANY
#	define XIEITE_HEADER_ALGORITHMS_ANY

#	include "../algorithms/any.hpp"
#	include "../concepts/functable.hpp"
#	include "../concepts/no_throw_invocable.hpp"
#	include "../macros/forward.hpp"

namespace xieite::algorithms {
	template<typename... Values, typename Functor>
	requires((... && xieite::concepts::Functable<Functor, bool(Values)>))
	[[nodiscard]] constexpr bool any(Functor&& functor, Values&&... values)
	noexcept((... && xieite::concepts::NoThrowInvocable<Functor, Values>)) {
		return !xieite::algorithms::any(XIEITE_FORWARD(functor), XIEITE_FORWARD(values)...);
	}
}

#endif