#ifndef XIEITE_HEADER_TYPES_MAYBE_POINTER
#	define XIEITE_HEADER_TYPES_MAYBE_POINTER

#	include <type_traits>
#	include "../types/copy_reference.hpp"

namespace xieite::types {
	template<typename Type, bool value>
	using MaybePointer = xieite::types::CopyReference<Type, std::conditional_t<value, std::remove_pointer_t<std::remove_reference_t<Type>>*, std::remove_pointer_t<std::remove_reference_t<Type>>>>;
}

#endif
