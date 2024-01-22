#ifndef XIEITE_HEADER_FUNCTORS_INFIX
#	define XIEITE_HEADER_FUNCTORS_INFIX

#	include <concepts>
#	include <functional>
#	include <memory>
#	include <type_traits>
#	include <utility>
#	include "../concepts/no_throw_invocable.hpp"
#	include "../types/placeholder.hpp"

namespace xieite::functors {
	template<typename>
	struct Infix;

	template<std::invocable<xieite::types::Placeholder> Functor>
	class Infix<Functor> {
	public:
		template<std::convertible_to<Functor> FunctorReference>
		constexpr Infix(FunctorReference&& callback) noexcept
		: callback(callback) {}

		template<typename Argument>
		requires(std::invocable<Functor, Argument>)
		friend constexpr std::invoke_result_t<Functor, Argument> operator>(const xieite::functors::Infix<Functor>& infix, Argument&& argument)
		noexcept(xieite::concepts::NoThrowInvocable<Functor, Argument>) {
			return std::invoke(std::forward<Functor>(infix.callback), std::forward<Argument>(argument));
		}

		template<typename Argument>
		requires(std::invocable<Functor, Argument>)
		friend constexpr std::invoke_result_t<Functor, Argument> operator<(Argument&& argument, const xieite::functors::Infix<Functor>& infix)
		noexcept(xieite::concepts::NoThrowInvocable<Functor, Argument>) {
			return std::invoke(std::forward<Functor>(infix.callback), std::forward<Argument>(argument));
		}

	private:
		mutable Functor callback;
	};

	template<std::invocable<xieite::types::Placeholder, xieite::types::Placeholder> Functor>
	class Infix<Functor> {
	private:
		template<typename LeftArgument>
		class Intermediate {
		public:
			template<std::convertible_to<Functor> FunctorReference>
			constexpr Intermediate(FunctorReference&& callback, LeftArgument&& leftArgument) noexcept
			: callback(callback), leftArgument(leftArgument) {}

			constexpr auto operator=(const xieite::functors::Infix<Functor>::Intermediate<LeftArgument>&) = delete;

			template<typename RightArgument>
			requires(std::invocable<Functor, LeftArgument, RightArgument>)
			friend constexpr std::invoke_result_t<Functor, LeftArgument, RightArgument> operator>(const xieite::functors::Infix<Functor>::Intermediate<LeftArgument>& infixIntermediate, RightArgument&& rightArgument)
			noexcept(xieite::concepts::NoThrowInvocable<Functor, LeftArgument, RightArgument>) {
				return std::invoke(infixIntermediate.callback, infixIntermediate.leftArgument, std::forward<RightArgument>(rightArgument));
			}

		private:
			mutable Functor callback;
			LeftArgument leftArgument;
		};

	public:
		template<std::convertible_to<Functor> FunctorReference>
		constexpr Infix(FunctorReference&& callback) noexcept
		: callback(std::forward<FunctorReference>(callback)) {}

		template<typename LeftArgument>
		requires(std::invocable<Functor, LeftArgument, xieite::types::Placeholder>)
		[[nodiscard]] friend constexpr xieite::functors::Infix<Functor>::Intermediate<LeftArgument> operator<(LeftArgument&& leftArgument, const xieite::functors::Infix<Functor>& infix) noexcept {
			return xieite::functors::Infix<Functor>::Intermediate<LeftArgument>(infix.callback, std::forward<LeftArgument>(leftArgument));
		}

	private:
		Functor callback;
	};

	template<typename Functor>
	Infix(Functor&&) -> xieite::functors::Infix<Functor>;
}

#endif
