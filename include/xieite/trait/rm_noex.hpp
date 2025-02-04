#pragma once

#include "../fn/visitor.hpp"
#include "../meta/t.hpp"
#include "../trait/cp_cvref.hpp"
#include "../trait/rm_cvref.hpp"

namespace xieite {
	template<typename T>
	using rm_noex = xieite::cp_cvref<T, typename decltype(xieite::visitor(
		[](...) static { return xieite::t<T>(); },
		[]<typename Ret, typename... Args>(xieite::t<Ret(Args...) noexcept>) static { return xieite::t<Ret(Args...)>(); },
		[]<typename Ret, typename... Args>(xieite::t<Ret(Args..., ...) noexcept>) static { return xieite::t<Ret(Args..., ...)>(); },
		[]<typename Ret, typename... Args>(xieite::t<Ret(*)(Args...) noexcept>) static { return xieite::t<Ret(*)(Args...)>(); },
		[]<typename Ret, typename... Args>(xieite::t<Ret(*)(Args..., ...) noexcept>) static { return xieite::t<Ret(*)(Args..., ...)>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args...) noexcept>) static { return xieite::t<Ret(S::*)(Args...)>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args..., ...) noexcept>) static { return xieite::t<Ret(S::*)(Args..., ...)>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args...) const noexcept>) static { return xieite::t<Ret(S::*)(Args...) const>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args..., ...) const noexcept>) static { return xieite::t<Ret(S::*)(Args..., ...) const>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args...) volatile noexcept>) static { return xieite::t<Ret(S::*)(Args...) volatile>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args..., ...) volatile noexcept>) static { return xieite::t<Ret(S::*)(Args..., ...) volatile>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args...) const volatile noexcept>) static { return xieite::t<Ret(S::*)(Args...) const volatile>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args..., ...) const volatile noexcept>) static { return xieite::t<Ret(S::*)(Args..., ...) const volatile>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args...) & noexcept>) static { return xieite::t<Ret(S::*)(Args...) &>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args..., ...) & noexcept>) static { return xieite::t<Ret(S::*)(Args..., ...) &>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args...) const & noexcept>) static { return xieite::t<Ret(S::*)(Args...) const &>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args..., ...) const & noexcept>) static { return xieite::t<Ret(S::*)(Args..., ...) const &>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args...) volatile & noexcept>) static { return xieite::t<Ret(S::*)(Args...) volatile &>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args..., ...) volatile & noexcept>) static { return xieite::t<Ret(S::*)(Args..., ...) volatile &>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args...) const volatile & noexcept>) static { return xieite::t<Ret(S::*)(Args...) const volatile &>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args..., ...) const volatile & noexcept>) static { return xieite::t<Ret(S::*)(Args..., ...) const volatile &>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args...) && noexcept>) static { return xieite::t<Ret(S::*)(Args...) &&>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args..., ...) && noexcept>) static { return xieite::t<Ret(S::*)(Args..., ...) &&>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args...) const && noexcept>) static { return xieite::t<Ret(S::*)(Args...) const &&>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args..., ...) const && noexcept>) static { return xieite::t<Ret(S::*)(Args..., ...) const &&>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args...) volatile && noexcept>) static { return xieite::t<Ret(S::*)(Args...) volatile &&>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args..., ...) volatile && noexcept>) static { return xieite::t<Ret(S::*)(Args..., ...) volatile &&>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args...) const volatile && noexcept>) static { return xieite::t<Ret(S::*)(Args...) const volatile &&>(); },
		[]<typename Ret, typename S, typename... Args>(xieite::t<Ret(S::*)(Args..., ...) const volatile && noexcept>) static { return xieite::t<Ret(S::*)(Args..., ...) const volatile &&>(); }
	)(xieite::t<xieite::rm_cvref<T>>()))::type>;
}
