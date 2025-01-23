export module xieite:is_c_referent;

import :rm_cvref;
import :t;
import :visitor;

export namespace xieite {
	template<typename T>
	concept is_c_referent = xieite::visitor(
		[](...) { return false; },
		[]<typename U>(xieite::t<const U*>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args...) const noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) const noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args...) const volatile noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) const volatile noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args...) const & noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) const & noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args...) const volatile & noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) const volatile & noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args...) const && noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) const && noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args...) const volatile && noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) const volatile && noexcept(noex)>) { return true; }
	)(xieite::t<xieite::rm_cvref<T>>());
}