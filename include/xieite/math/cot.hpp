#pragma once
#include <cmath>
#include <concepts>

namespace xieite::math {
	template<std::floating_point N>
	[[nodiscard]]
	constexpr N cot(const N value) noexcept {
		return std::cos(value) / std::sin(value);
	}
}