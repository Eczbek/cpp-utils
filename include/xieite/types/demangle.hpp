#pragma once

#include <cstdlib>
#include <string>
#include "../preprocessor/compiler.hpp"

#if XIEITE_COMPILER_TYPE_GCC
#	include <cxxabi.h>
#else
#	warning "unsupported compiler.hpp"
#endif

namespace xieite::types {
	[[nodiscard]] std::string demangle(const std::string& mangled) noexcept {
		int status;
		char* const buffer = abi::__cxa_demangle(mangled.data(), nullptr, nullptr, &status);
		if (buffer) {
			const std::string demangled = std::string(buffer);
			std::free(buffer);
			return demangled;
		}
		// Buffer does not need to be freed if demangling fails
		return mangled;
	}
}
