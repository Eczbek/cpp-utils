#ifndef XIEITE_HEADER_SYSTEM_EXECUTE
#	define XIEITE_HEADER_SYSTEM_EXECUTE

#	include <xieite/macros/SYSTEM_TYPE.hpp>

#	if defined(XIEITE_SYSTEM_TYPE_LINUX)
#		include <cstddef>
#		include <cstdio>
#		include <memory>
#		include <stdio.h>
#		include <string>
#		include <string_view>

namespace xieite::system {
	inline std::string execute(const std::string_view command) noexcept {
		const std::unique_ptr<std::FILE, decltype([](std::FILE* const file) noexcept -> void {
			pclose(file);
		})> pipe(popen(command.data(), "r"));
		std::string buffer;
		std::size_t status;
		do {
			std::string chunk(1024, '\0');
			status = std::fread(chunk.data(), sizeof(char), chunk.size(), pipe.get());
			buffer += chunk;
		} while (status);
		return buffer;
	}
}

#	else
#		error "System not supported"
#	endif

#endif
