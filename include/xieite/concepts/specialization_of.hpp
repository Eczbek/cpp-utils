#ifndef XIEITE_HEADER_CONCEPTS_SPECIALIZATION_OF
#	define XIEITE_HEADER_CONCEPTS_SPECIALIZATION_OF

#	include "../traits/is_specialization_of.hpp"

namespace xieite::concepts {
	template<typename Type, template<typename...> typename Template>
	concept SpecializationOf = xieite::traits::IsSpecializationOf<Type, Template>::value;
}

#endif