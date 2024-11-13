#pragma once

#include <cstddef>
#include <memory>
#include <string>
#include "../meta/end.hpp"
#include "../meta/id.hpp"
#include "../str/chv.hpp"

namespace xieite {
	template<typename Ch = char, typename Traits = std::char_traits<Ch>, typename Alloc = std::allocator<Ch>,
		xieite::end...,
		typename Str = std::basic_string<Ch, Traits, Alloc>>
	[[nodiscard]] constexpr Str trunc(Str str, std::size_t size, xieite::id<xieite::chv<Ch, Traits>> sfx = "") noexcept {
		return (str.size() <= size)
			? str
			: ((sfx.size() > size)
				? Str(sfx.substr(0, size))
				: (str.substr(0, size - sfx.size()) + sfx));
	}
}
