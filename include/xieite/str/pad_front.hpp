#pragma once

#include <cstddef>
#include <memory>
#include <string>

namespace xieite {
	template<typename C = char, typename Traits = std::char_traits<C>, typename Alloc = std::allocator<C>>
	[[nodiscard]] constexpr std::basic_string<C, Traits, Alloc> pad_front(std::basic_string<C, Traits, Alloc> str, std::size_t size, C c = ' ') noexcept {
		str.reserve(size);
		if (str.size() < size) {
			return std::basic_string<C, Traits, Alloc>(size - str.size(), c) + str;
		}
		return str;
	}
}
