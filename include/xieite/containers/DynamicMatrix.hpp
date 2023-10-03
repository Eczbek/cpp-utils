#ifndef XIEITE_HEADER__CONTAINERS__DYNAMIC_MATRIX
#	define XIEITE_HEADER__CONTAINERS__DYNAMIC_MATRIX

#	include <cstddef>

namespace xieite::containers {
	template<template<typename> typename DynamicContainer, typename Value, std::size_t dimensions>
	struct DynamicMatrix {
		using Type = DynamicMatrix<DynamicContainer, DynamicContainer<Value>, dimensions - 1>::Type;
	};

	template<template<typename> typename DynamicContainer, typename Value>
	struct DynamicMatrix<DynamicContainer, Value, 0> {
		using Type = Value;
	};
}

#endif