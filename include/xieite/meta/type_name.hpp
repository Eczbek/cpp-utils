#pragma once

#include <string_view>
#include "../ctnr/make_array.hpp"
#include "../pp/cplr.hpp"
#include "../pp/fn_sig.hpp"
#include "../str/str_after.hpp"
#include "../str/str_between.hpp"

namespace XIEITE_DETAIL {
	[[nodiscard]] consteval std::string_view get_type_name(std::string_view sig) noexcept {
#if XIEITE_CPLR_TYPE_GCC
		return xieite::str_between(sig, "= ", ';');
#elif XIEITE_CPLR_TYPE_CLANG
		return xieite::str_between(sig, "= ", ']');
#elif XIEITE_CPLR_TYPE_WINDOWS
		return xieite::str_between(xieite::str_after(sig, " __"), '<', ">(");
#endif
	}
}

namespace xieite {
	template<typename>
	[[nodiscard]] consteval std::string_view type_name() noexcept {
		static constexpr auto data = xieite::make_array<char, XIEITE_DETAIL::get_type_name(XIEITE_FN_SIG).size()>(XIEITE_DETAIL::get_type_name(XIEITE_FN_SIG));
		return std::string_view(data.begin(), data.end());
	}

	template<auto>
	[[nodiscard]] consteval std::string_view type_name() noexcept {
		static constexpr auto data = xieite::make_array<char, XIEITE_DETAIL::get_type_name(XIEITE_FN_SIG).size()>(XIEITE_DETAIL::get_type_name(XIEITE_FN_SIG));
		return std::string_view(data.begin(), data.end());
	}
}
