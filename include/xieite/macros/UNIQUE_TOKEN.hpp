#pragma once

#include <xieite/macros/CONCATENATE.hpp>

#define XIEITE_UNIQUE_TOKEN \
	XIEITE_CONCATENATE(XIEITE_INTERNAL_UNIQUE_TOKEN_, __COUNTER__)