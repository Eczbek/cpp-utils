#pragma once

#include <xieite/macros/SYSTEM_TYPE.hpp>

#if defined(XIEITE_SYSTEM_TYPE_LINUX)
#	include <string>
#	include <uuid/uuid.h>

namespace xieite::random {
	inline std::string getUUID() noexcept {
		uuid_t uuid;
		uuid_generate(uuid);
		std::string result(37, '\0');
		uuid_unparse(uuid, result.data());
		return result;
	}
}

#else
#	error "System not supported"
#endif
