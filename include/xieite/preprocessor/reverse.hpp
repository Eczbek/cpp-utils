#pragma once

#include "../preprocessor/evaluate.hpp"
#include "../preprocessor/scan.hpp"

#define XIEITE_REVERSE(...) __VA_OPT__(XIEITE_EVALUATE(XIEITE_DETAIL_REVERSE_HELPER(__VA_ARGS__)))

#define XIEITE_DETAIL_REVERSE_HELPER(first_, ...) __VA_OPT__(XIEITE_DETAIL_REVERSE_INDIRECT XIEITE_SCAN(()) (__VA_ARGS__),) first_
#define XIEITE_DETAIL_REVERSE_INDIRECT() XIEITE_DETAIL_REVERSE_HELPER