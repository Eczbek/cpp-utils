#pragma once

#include <cstddef>

namespace xieite {
	inline void detect_cosmic_ray(std::size_t bytes) noexcept {
		const std::size_t size = bytes / sizeof(std::intmax_t);
		const auto detector = std::make_unique<volatile const unsigned char[]>(size);
		for (std::size_t i = 0; !detector[++i %= size];);
	}
}
