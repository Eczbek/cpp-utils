#ifndef XIEITE_HEADER_FUNCTORS_CONSTANT
#	define XIEITE_HEADER_FUNCTORS_CONSTANT

#	include <concepts>
#	include <utility>

namespace xieite::functors {
	template<typename Type>
	class Constant {
	public:
		template<typename... Arguments>
		constexpr Constant(Arguments&&... arguments)
		noexcept(noexcept(Type(std::forward<Arguments>(arguments)...)))
		: value(std::forward<Arguments>(arguments)...) {}

		constexpr Type& operator()() const& noexcept {
			return this->value;
		}

	private:
		mutable Type value;
	};
}

#endif