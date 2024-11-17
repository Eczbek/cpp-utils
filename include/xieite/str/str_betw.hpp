#pragma once

#include <string>
#include <string_view>
#include "../meta/id.hpp"
#include "../str/str_after.hpp"
#include "../str/str_before.hpp"

namespace xieite {
	template<typename Ch = char, typename Traits = std::char_traits<Ch>>
	[[nodiscard]] constexpr std::basic_string_view<Ch, Traits> str_betw(std::basic_string_view<Ch, Traits> strv, xieite::id<std::basic_string_view<Ch, Traits>> start, xieite::id<std::basic_string_view<Ch, Traits>> end) noexcept {
		return xieite::str_before(xieite::str_after(strv, start), end);
	}

	template<typename Ch = char, typename Traits = std::char_traits<Ch>>
	[[nodiscard]] constexpr std::basic_string_view<Ch, Traits> str_betw(std::basic_string_view<Ch, Traits> strv, Ch start, xieite::id<std::basic_string_view<Ch, Traits>> end) noexcept {
		return xieite::str_before(xieite::str_after(strv, start), end);
	}

	template<typename Ch = char, typename Traits = std::char_traits<Ch>>
	[[nodiscard]] constexpr std::basic_string_view<Ch, Traits> str_betw(std::basic_string_view<Ch, Traits> strv, xieite::id<std::basic_string_view<Ch, Traits>> start, Ch end) noexcept {
		return xieite::str_before(xieite::str_after(strv, start), end);
	}

	template<typename Ch = char, typename Traits = std::char_traits<Ch>>
	[[nodiscard]] constexpr std::basic_string_view<Ch, Traits> str_betw(std::basic_string_view<Ch, Traits> strv, Ch start, Ch end) noexcept {
		return xieite::str_before(xieite::str_after(strv, start), end);
	}
}
