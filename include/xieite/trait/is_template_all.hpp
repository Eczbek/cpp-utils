#pragma once

#include "../trait/is_template.hpp"

namespace xieite {
	template<template<typename...> typename M, typename... Ts>
	concept is_template_all = (... && xieite::is_template<M, Ts>);
}
