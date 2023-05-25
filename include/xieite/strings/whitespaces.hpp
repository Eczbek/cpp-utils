#ifndef XIEITE_HEADER_STRINGS_WHITESPACES
#	define XIEITE_HEADER_STRINGS_WHITESPACES

#	include <string_view>

namespace xieite::strings {
	inline constexpr std::string_view whitespaces = "\u0009\u000a\u000b\u000c\u000d\u0020\u0085\u00a0\u1680\u2000\u2001\u2002\u2003\u2004\u2005\u2006\u2007\u2008\u2009\u200a\u2028\u2029\u202F\u205f\u3000";
}

#endif
