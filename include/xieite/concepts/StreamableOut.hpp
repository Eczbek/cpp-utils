#ifndef XIEITE_HEADER__CONCEPTS__STREAMABLE_OUT
#	define XIEITE_HEADER__CONCEPTS__STREAMABLE_OUT

#	include <concepts>
#	include <ostream>

namespace xieite::concepts {
	template<typename Type>
	concept StreamableOut = requires(Type value, std::ostream outputStream) {
		{ outputStream << value } -> std::same_as<std::ostream&>;
	};
}

// Thanks to fux for original code

#endif
