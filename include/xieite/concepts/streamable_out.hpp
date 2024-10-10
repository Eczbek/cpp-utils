#pragma once

#include <concepts>
#include <ostream>

namespace xieite::concepts {
	template<typename Type>
	concept StreamableOut = requires(Type value, std::ostream outputStream) {
		{ outputStream << value } -> std::convertible_to<std::ostream&>;
	};
}

// Thanks to fux for original code
