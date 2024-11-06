#pragma once

#include <tuple>

namespace XIEITE_DETAIL {
	template<typename F, typename Ret, typename Args, bool is_variadic, bool is_nothrow>
	struct free_fn_ptr {
		using fn = F;
		using ret = Ret;
		using args = Args;

		static constexpr bool variadic = is_variadic;
		static constexpr bool nothrow = is_nothrow;
	};

	template<typename C, typename Ref, typename F, typename Ret, typename Args, bool is_variadic, bool is_const_qual, bool is_volatile_qual, bool is_lvalue_qual, bool is_rvalue_qual, bool is_nothrow>
	struct member_fn_ptr {
		using type = C;
		using ref = Ref;
		using fn = F;
		using ret = Ret;
		using args = Args;

		static constexpr bool variadic = is_variadic;
		static constexpr bool const_qual = is_const_qual;
		static constexpr bool volatile_qual = is_volatile_qual;
		static constexpr bool lvalue_qual = is_lvalue_qual;
		static constexpr bool rvalue_qual = is_rvalue_qual;
		static constexpr bool nothrow = is_nothrow;
	};
}

namespace xieite {
	template<typename>
	struct fn_ptr;

	template<typename ret, typename... args>
	struct fn_ptr<ret(*)(args...)> : XIEITE_DETAIL::free_fn_ptr<ret(args...), ret, std::tuple<args...>, false, false> {};

	template<typename ret, typename... args>
	struct fn_ptr<ret(*)(args..., ...)> : XIEITE_DETAIL::free_fn_ptr<ret(args..., ...), ret, std::tuple<args...>, true, false> {};

	template<typename ret, typename... args>
	struct fn_ptr<ret(*)(args...) noexcept> : XIEITE_DETAIL::free_fn_ptr<ret(args...) noexcept, ret, std::tuple<args...>, false, true> {};

	template<typename ret, typename... args>
	struct fn_ptr<ret(*)(args..., ...) noexcept> : XIEITE_DETAIL::free_fn_ptr<ret(args..., ...) noexcept, ret, std::tuple<args...>, true, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...)> : XIEITE_DETAIL::member_fn_ptr<type, type&, ret(args...), ret, std::tuple<args...>, false, false, false, false, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...)> : XIEITE_DETAIL::member_fn_ptr<type, type&, ret(args..., ...), ret, std::tuple<args...>, true, false, false, false, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) const> : XIEITE_DETAIL::member_fn_ptr<type, const type&, ret(args...) const, ret, std::tuple<args...>, false, true, false, false, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) const> : XIEITE_DETAIL::member_fn_ptr<type, const type&, ret(args..., ...) const, ret, std::tuple<args...>, true, true, false, false, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) volatile> : XIEITE_DETAIL::member_fn_ptr<type, volatile type&, ret(args...) volatile, ret, std::tuple<args...>, false, false, true, false, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) volatile> : XIEITE_DETAIL::member_fn_ptr<type, volatile type&, ret(args..., ...) volatile, ret, std::tuple<args...>, true, false, true, false, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) const volatile> : XIEITE_DETAIL::member_fn_ptr<type, const volatile type&, ret(args...) const volatile, ret, std::tuple<args...>, false, true, true, false, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) const volatile> : XIEITE_DETAIL::member_fn_ptr<type, const volatile type&, ret(args..., ...) const volatile, ret, std::tuple<args...>, true, true, true, false, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) &> : XIEITE_DETAIL::member_fn_ptr<type, type&, ret(args...) &, ret, std::tuple<args...>, false, false, false, true, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) &> : XIEITE_DETAIL::member_fn_ptr<type, type&, ret(args..., ...) &, ret, std::tuple<args...>, true, false, false, true, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) const &> : XIEITE_DETAIL::member_fn_ptr<type, const type&, ret(args...) const &, ret, std::tuple<args...>, false, true, false, true, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) const &> : XIEITE_DETAIL::member_fn_ptr<type, const type&, ret(args..., ...) const &, ret, std::tuple<args...>, true, true, false, true, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) volatile &> : XIEITE_DETAIL::member_fn_ptr<type, volatile type&, ret(args...) volatile &, ret, std::tuple<args...>, false, false, true, true, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) volatile &> : XIEITE_DETAIL::member_fn_ptr<type, volatile type&, ret(args..., ...) volatile &, ret, std::tuple<args...>, true, false, true, true, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) const volatile &> : XIEITE_DETAIL::member_fn_ptr<type, const volatile type&, ret(args...) const volatile &, ret, std::tuple<args...>, false, true, true, true, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) const volatile &> : XIEITE_DETAIL::member_fn_ptr<type, const volatile type&, ret(args..., ...) const volatile &, ret, std::tuple<args...>, true, true, true, true, false, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) &&> : XIEITE_DETAIL::member_fn_ptr<type, type&&, ret(args...) &&, ret, std::tuple<args...>, false, false, false, false, true, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) &&> : XIEITE_DETAIL::member_fn_ptr<type, type&&, ret(args..., ...) &&, ret, std::tuple<args...>, true, false, false, false, true, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) const &&> : XIEITE_DETAIL::member_fn_ptr<type, const type&&, ret(args...) const &&, ret, std::tuple<args...>, false, true, false, false, true, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) const &&> : XIEITE_DETAIL::member_fn_ptr<type, const type&&, ret(args..., ...) const &&, ret, std::tuple<args...>, true, true, false, false, true, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) volatile &&> : XIEITE_DETAIL::member_fn_ptr<type, volatile type&&, ret(args...) volatile &&, ret, std::tuple<args...>, false, false, true, false, true, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) volatile &&> : XIEITE_DETAIL::member_fn_ptr<type, volatile type&&, ret(args..., ...) volatile &&, ret, std::tuple<args...>, true, false, true, false, true, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) const volatile &&> : XIEITE_DETAIL::member_fn_ptr<type, const volatile type&&, ret(args...) const volatile &&, ret, std::tuple<args...>, false, true, true, false, true, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) const volatile &&> : XIEITE_DETAIL::member_fn_ptr<type, const volatile type&&, ret(args..., ...) const volatile &&, ret, std::tuple<args...>, true, true, true, false, true, false> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) noexcept> : XIEITE_DETAIL::member_fn_ptr<type, type&, ret(args...) noexcept, ret, std::tuple<args...>, false, false, false, false, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) noexcept> : XIEITE_DETAIL::member_fn_ptr<type, type&, ret(args..., ...) noexcept, ret, std::tuple<args...>, true, false, false, false, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) const noexcept> : XIEITE_DETAIL::member_fn_ptr<type, const type&, ret(args...) const noexcept, ret, std::tuple<args...>, false, true, false, false, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) const noexcept> : XIEITE_DETAIL::member_fn_ptr<type, const type&, ret(args..., ...) const noexcept, ret, std::tuple<args...>, true, true, false, false, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) volatile noexcept> : XIEITE_DETAIL::member_fn_ptr<type, volatile type&, ret(args...) volatile noexcept, ret, std::tuple<args...>, false, false, true, false, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) volatile noexcept> : XIEITE_DETAIL::member_fn_ptr<type, volatile type&, ret(args..., ...) volatile noexcept, ret, std::tuple<args...>, true, false, true, false, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) const volatile noexcept> : XIEITE_DETAIL::member_fn_ptr<type, const volatile type&, ret(args...) const volatile noexcept, ret, std::tuple<args...>, false, true, true, false, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) const volatile noexcept> : XIEITE_DETAIL::member_fn_ptr<type, const volatile type&, ret(args..., ...) const volatile noexcept, ret, std::tuple<args...>, true, true, true, false, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) & noexcept> : XIEITE_DETAIL::member_fn_ptr<type, type&, ret(args...) & noexcept, ret, std::tuple<args...>, false, false, false, true, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) & noexcept> : XIEITE_DETAIL::member_fn_ptr<type, type&, ret(args..., ...) & noexcept, ret, std::tuple<args...>, true, false, false, true, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) const & noexcept> : XIEITE_DETAIL::member_fn_ptr<type, const type&, ret(args...) const & noexcept, ret, std::tuple<args...>, false, true, false, true, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) const & noexcept> : XIEITE_DETAIL::member_fn_ptr<type, const type&, ret(args..., ...) const & noexcept, ret, std::tuple<args...>, true, true, false, true, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) volatile & noexcept> : XIEITE_DETAIL::member_fn_ptr<type, volatile type&, ret(args...) volatile & noexcept, ret, std::tuple<args...>, false, false, true, true, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) volatile & noexcept> : XIEITE_DETAIL::member_fn_ptr<type, volatile type&, ret(args..., ...) volatile & noexcept, ret, std::tuple<args...>, true, false, true, true, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) const volatile & noexcept> : XIEITE_DETAIL::member_fn_ptr<type, const volatile type&, ret(args...) const volatile & noexcept, ret, std::tuple<args...>, false, true, true, true, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) const volatile & noexcept> : XIEITE_DETAIL::member_fn_ptr<type, const volatile type&, ret(args..., ...) const volatile & noexcept, ret, std::tuple<args...>, true, true, true, true, false, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) && noexcept> : XIEITE_DETAIL::member_fn_ptr<type, type&&, ret(args...) && noexcept, ret, std::tuple<args...>, false, false, false, false, true, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) && noexcept> : XIEITE_DETAIL::member_fn_ptr<type, type&&, ret(args..., ...) && noexcept, ret, std::tuple<args...>, true, false, false, false, true, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) const && noexcept> : XIEITE_DETAIL::member_fn_ptr<type, const type&&, ret(args...) const && noexcept, ret, std::tuple<args...>, false, true, false, false, true, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) const && noexcept> : XIEITE_DETAIL::member_fn_ptr<type, const type&&, ret(args..., ...) const && noexcept, ret, std::tuple<args...>, true, true, false, false, true, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) volatile && noexcept> : XIEITE_DETAIL::member_fn_ptr<type, volatile type&&, ret(args...) volatile && noexcept, ret, std::tuple<args...>, false, false, true, false, true, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) volatile && noexcept> : XIEITE_DETAIL::member_fn_ptr<type, volatile type&&, ret(args..., ...) volatile && noexcept, ret, std::tuple<args...>, true, false, true, false, true, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args...) const volatile && noexcept> : XIEITE_DETAIL::member_fn_ptr<type, const volatile type&&, ret(args...) const volatile && noexcept, ret, std::tuple<args...>, false, true, true, false, true, true> {};

	template<typename ret, typename type, typename... args>
	struct fn_ptr<ret(type::*)(args..., ...) const volatile && noexcept> : XIEITE_DETAIL::member_fn_ptr<type, const volatile type&&, ret(args..., ...) const volatile && noexcept, ret, std::tuple<args...>, true, true, true, false, true, true> {};
}

// Thanks to halalaluyafail3 (https://github.com/Halalaluyafail3) for original code
