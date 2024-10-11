#pragma once

// #define XIEITE_ARROW(...) noexcept(noexcept(__VA_ARGS__)) -> decltype(__VA_ARGS__) { return __VA_ARGS__; }
#define XIEITE_ARROW(...) -> decltype(auto) { return __VA_ARGS__; }
#define XIEITE_ARROW_BASE(...) /* noexcept(noexcept(__VA_ARGS__)) */ { return __VA_ARGS__; }

// TODO: This is a workaround until these are fixed:
// - https://gcc.gnu.org/bugzilla/show_bug.cgi?id=117061
// - https://github.com/llvm/llvm-project/issues/111840