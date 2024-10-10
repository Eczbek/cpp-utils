#pragma once

#include <chrono>
#include <cstdint>
#include <ratio>

namespace xieite::time {
	using Eons = std::chrono::duration<std::intmax_t, std::ratio<31556952000000000>>;
}
