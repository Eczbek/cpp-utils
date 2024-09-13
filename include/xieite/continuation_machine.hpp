#pragma once

#include <xieite/eat.hpp>
#include <xieite/parenthesis.hpp>
#include <xieite/scan.hpp>

#define XIEITE_CONTINUATION_MACHINE(...) XIEITE_SCAN(XIEITE_EAT XIEITE_PARENTHESIS_LEFT() XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_0(__VA_ARGS__))

#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_0(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_1(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_1(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_1(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_2(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_2(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_2(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_3(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_3(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_3(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_4(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_4(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_4(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_5(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_5(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_5(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_6(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_6(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_6(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_7(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_7(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_7(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_8(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_8(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_8(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_9(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_9(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_9(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_A(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_A(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_A(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_B(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_B(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_B(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_C(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_C(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_C(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_D(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_D(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_D(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_E(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_E(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_E(lazy, callback, ...) XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_F(XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_F(XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)))
#define XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_F(lazy, callback, ...) XIEITE_CONTINUATION_MACHINE_CALLBACK_##callback(, lazy##__VA_ARGS__)
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_1(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_1 result
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_2(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_2 result
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_3(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_3 result
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_4(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_4 result
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_5(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_5 result
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_6(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_6 result
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_7(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_7 result
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_8(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_8 result
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_9(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_9 result
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_A(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_A result
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_B(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_B result
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_C(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_C result
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_D(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_D result
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_E(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_E result
#define XIEITE_DETAIL_CONTINUATION_MACHINE_PASS_F(result) XIEITE_DETAIL_CONTINUATION_MACHINE_NEXT_F result

// Note: I have no idea how to use this