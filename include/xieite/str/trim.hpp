#pragma once

#include <cstddef>
#include <string>
#include <string_view>
#include "../str/sv.hpp"

namespace xieite {
	template<typename C = char, typename Traits = std::char_traits<C>>
	[[nodiscard]] constexpr std::basic_string_view<C, Traits> trim(std::basic_string_view<C, Traits> str, xieite::sv<C, Traits> chars) noexcept {
		const std::size_t start = str.find_first_not_of(chars);
		return (start == std::string::npos) ? "" : str.substr(start, str.find_last_not_of(chars) - start + 1);
	}
}
