export module xieite:is_var;

import :rm_cvref;
import :t;
import :visitor;

export namespace xieite {
	template<typename T>
	concept is_var = xieite::visitor(
		[](...) { return false; },
		[]<typename Ret, typename... Args, bool noex>(xieite::t<Ret(Args..., ...) noexcept(noex)>) { return true; },
		[]<typename Ret, typename... Args, bool noex>(xieite::t<Ret(*)(Args..., ...) noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) const noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) volatile noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) const volatile noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) & noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) const & noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) volatile & noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) const volatile & noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) && noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) const && noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) volatile && noexcept(noex)>) { return true; },
		[]<typename Ret, typename S, typename... Args, bool noex>(xieite::t<Ret(S::*)(Args..., ...) const volatile && noexcept(noex)>) { return true; }
	)(xieite::t<xieite::rm_cvref<T>>());
}
