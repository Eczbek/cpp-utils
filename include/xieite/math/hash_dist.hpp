#pragma once

#include <concepts>
#include <limits>
#include <numbers>
#include "../math/xor_shift.hpp"
#include "../meta/try_unsign.hpp"

namespace xieite {
	template<std::integral T, std::floating_point Phi = double>
	[[nodiscard]] constexpr T hash_dist(T value) noexcept {
		return static_cast<T>(std::numeric_limits<xieite::try_unsign<T>>::max() / std::numbers::phi_v<Phi>) * xieite::xor_shift(std::numeric_limits<xieite::try_unsign<T>>::max() / 3 * xieite::xor_shift(value, sizeof(T) * 4), sizeof(T) * 4);
	}
}
