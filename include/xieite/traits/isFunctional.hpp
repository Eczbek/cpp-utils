#ifndef XIEITE_HEADER_TRAITS_ISFUNCTION
#	define XIEITE_HEADER_TRAITS_ISFUNCTION

#	include <concepts>
#	include <type_traits>

namespace xieite::traits {
	template<typename, typename>
	inline constexpr bool isFunctional = false;

	template<typename Result, typename... Parameters, std::invocable<Parameters...> Invocable>
	inline constexpr bool isFunctional<Invocable, Result(Parameters...)> = std::convertible_to<std::invoke_result_t<Invocable, Parameters...>, Result>;
}

#endif