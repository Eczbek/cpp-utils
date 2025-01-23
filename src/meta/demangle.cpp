module;

#if __has_include(<cxxabi.h>)
#	include <cxxabi.h>
#endif

export module xieite:demangle;

import std;

export namespace xieite {
	[[nodiscard]] std::string demangle(const std::string& mangled) noexcept {
#if __has_include(<cxxabi.h>)
		char* const buf = abi::__cxa_demangle(mangled.c_str(), nullptr, nullptr, nullptr);
		if (buf) {
			const std::string demangled = std::string(buf);
			std::free(buf);
			return demangled;
		}
#endif
		// No need to `free()` if demangling fails
		return mangled;
	}
}