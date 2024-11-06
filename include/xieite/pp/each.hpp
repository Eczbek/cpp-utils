#pragma once

#include "../pp/eval.hpp"
#include "../pp/scan.hpp"

#define XIEITE_EACH(m, ...) __VA_OPT__(XIEITE_EVAL(XIEITE_DETAIL_EACH_HELPER(m, __VA_ARGS__)))

#define XIEITE_DETAIL_EACH_HELPER(m, x, ...) m(x) __VA_OPT__(XIEITE_DETAIL_EACH_NEXT XIEITE_SCAN(()) (m, __VA_ARGS__))
#define XIEITE_DETAIL_EACH_NEXT() XIEITE_DETAIL_EACH_HELPER
