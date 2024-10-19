#pragma once

#include <array>
#include <concepts>
#include <cstddef>
#include <functional>
#include <initializer_list>
#include <limits>
#include <ranges>
#include <utility>
#include "../bits/size.hpp"
#include "../concepts/invocable.hpp"
#include "../concepts/no_throw_invocable.hpp"
#include "../math/sign_cast.hpp"
#include "../preprocessor/lift.hpp"
#include "../types/arity.hpp"

namespace xieite::containers {
	template<std::integral Key, typename Value, std::ranges::input_range Range = std::initializer_list<std::pair<Key, Value>>, xieite::concepts::Invocable<Value(std::ranges::range_common_reference_t<Range>)> Functor = decltype(XIEITE_LIFT_PREFIX_GLOBAL(static_cast<Value>))>
	requires((std::numeric_limits<Key>::digits <= 16) && (xieite::types::arity<std::ranges::range_value_t<Range>> == 2))
	[[nodiscard]] constexpr std::array<Value, (1uz << xieite::bits::size<Key>)> makeSparseArray(Range&& entries, Functor&& converter = Functor())
	noexcept(xieite::concepts::NoThrowInvocable<Functor, Value(std::ranges::range_common_reference_t<Range>)>) {
		auto result = std::array<Value, (1uz << xieite::bits::size<Key>)>();
		for (const auto& [key, value] : entries) {
			result[xieite::math::signCast<std::size_t>(static_cast<Key>(std::forward_like<Range>(key)))] = std::invoke(converter, std::forward_like<Range>(value));
		}
		return result;
	}
}
