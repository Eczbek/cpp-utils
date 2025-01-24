#pragma once

#include <array>
#include <bit>
#include "../fn/unroll.hpp"

namespace xieite {
	struct byte_fill {
		char value;

		template<std::integral T>
		[[nodiscard]] explicit constexpr byte_fill(T n) noexcept
		: value(static_cast<char>(n)) {}

		template<typename T>
		[[nodiscard]] constexpr operator T() const noexcept {
			return xieite::unroll<sizeof(T)>([this]<std::size_t... i> -> std::array<char, sizeof(T)> {
				return std::bit_cast<T>(std::array<char, sizeof(T)> { (i, this->value)... });
			});
		}
	};
}