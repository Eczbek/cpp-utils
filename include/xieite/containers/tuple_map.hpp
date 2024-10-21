#pragma once

#include <concepts>
#include <initializer_list>
#include <tuple>
#include <utility>
#include "../functors/unroll.hpp"
#include "../preprocessor/arrow.hpp"
#include "../preprocessor/forward.hpp"

namespace xieite::containers {
	template<template<typename, typename> typename, typename, typename>
	struct TupleMap;

	template<template<typename, typename> typename Container, typename Value, typename FirstKey, typename... RestKeys>
	struct TupleMap<Container, std::tuple<FirstKey, RestKeys...>, Value> {
	public:
		constexpr TupleMap(const std::initializer_list<std::pair<FirstKey, xieite::containers::TupleMap<Container, std::tuple<RestKeys...>, Value>>> list = {}) noexcept
		: map(list.begin(), list.end()) {}

		template<typename Self, std::convertible_to<std::tuple<FirstKey, RestKeys...>> KeysReference>
		[[nodiscard]] constexpr auto operator[](this Self&& self, KeysReference&& keys)
		XIEITE_ARROW(xieite::functors::unroll<RestKeys...>(
			[&self, &keys]<std::size_t... i>
			XIEITE_ARROW(std::forward_like<Self>(self.map.at(std::get<0>(keys))[std::make_tuple(std::get<i + 1>(keys)...)]))
		))

		template<std::convertible_to<std::tuple<FirstKey, RestKeys...>> KeysReference, std::convertible_to<Value> ValueReference>
		constexpr auto insert(KeysReference&& keys, ValueReference&& value)
		XIEITE_ARROW(xieite::functors::unroll<RestKeys...>(
			[this, &keys, &value]<std::size_t... i>
			XIEITE_ARROW(this->map[std::get<0>(keys)].insert(std::make_tuple(std::get<i + 1>(keys)...), XIEITE_FORWARD(value)))
		))

		template<std::convertible_to<std::tuple<FirstKey, RestKeys...>> KeysReference>
		[[nodiscard]] constexpr auto contains(KeysReference&& keys) const
		XIEITE_ARROW(
			this->map.contains(std::get<0>(keys))
			&& xieite::functors::unroll<RestKeys...>(
				[this, &keys]<std::size_t... i>
				XIEITE_ARROW(this->map.at(std::get<0>(keys)).contains(std::make_tuple(std::get<i + 1>(keys)...)))
			)
		)

	private:
		Container<FirstKey, xieite::containers::TupleMap<Container, std::tuple<RestKeys...>, Value>> map;
	};

	template<template<typename, typename> typename Container, typename Value, typename Key>
	struct TupleMap<Container, std::tuple<Key>, Value> {
	public:
		constexpr TupleMap(const std::initializer_list<std::pair<Key, Value>> list = {}) noexcept
		: map(list.begin(), list.end()) {}

		template<typename Self, std::convertible_to<std::tuple<Key>> KeyReference>
		[[nodiscard]] constexpr auto operator[](this Self&& self, KeyReference&& key)
		XIEITE_ARROW(std::forward_like<Self>(self.map.at(std::get<0>(XIEITE_FORWARD(key)))))

		template<std::convertible_to<std::tuple<Key>> KeyReference, std::convertible_to<Value> ValueReference>
		constexpr auto insert(KeyReference&& key, ValueReference&& value)
		XIEITE_ARROW(this->map.emplace(std::make_pair(std::get<0>(XIEITE_FORWARD(key)), XIEITE_FORWARD(value))))

		template<std::convertible_to<std::tuple<Key>> KeyReference>
		[[nodiscard]] constexpr auto contains(KeyReference&& key) const
		XIEITE_ARROW(this->map.contains(std::get<0>(XIEITE_FORWARD(key))))

	private:
		Container<Key, Value> map;
	};
}
