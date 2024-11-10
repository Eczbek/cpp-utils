#pragma once

#include <cstddef>
#include <string_view>
#include "../math/sign_cast.hpp"

namespace xieite {
	[[nodiscard]] constexpr std::size_t djb2(std::string_view str) noexcept {
		std::size_t result = 5381;
		for (char c : str) {
			result = result * 33 + xieite::sign_cast<std::size_t>(c);
		}
		return result;
	}
}