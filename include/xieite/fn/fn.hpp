#pragma once

#include <concepts>
#include <functional>
#include <memory>
#include <type_traits>
#include "../meta/is_invoc.hpp"
#include "../pp/fwd.hpp"

namespace xieite {
	template<typename>
	struct fn;

	template<typename Ret, typename... Args>
	struct fn<Ret(Args...)> {
	public:
		fn() = default;

		explicit(false) constexpr fn(const xieite::fn<Ret(Args...)>& fn) noexcept
		: ptr(fn.ptr->clone()) {}

		template<xieite::is_invoc<Ret(Args...)> F>
		requires(!std::same_as<std::remove_cvref_t<F>, xieite::fn<Ret(Args...)>>)
		explicit(false) constexpr fn(F&& fn) noexcept
		: ptr(std::make_unique<xieite::fn<Ret(Args...)>::derived<std::remove_cvref_t<F>>>(XIEITE_FWD(fn))) {}

		[[nodiscard]] explicit constexpr operator bool() const noexcept {
			return static_cast<bool>(this->ptr);
		}

		constexpr Ret operator()(Args... args) const noexcept(false) {
			// Explicitly not handling possible nullptr dereference
			return (*this->ptr)(args...);
		}

	private:
		struct base {
			virtual constexpr ~base() = default;

			virtual constexpr Ret operator()(Args...) const noexcept(false) = 0;

			virtual constexpr std::unique_ptr<xieite::fn<Ret(Args...)>::base> clone() const noexcept = 0;
		};

		template<typename F>
		struct derived : xieite::fn<Ret(Args...)>::base {
			mutable F fn;

			template<std::convertible_to<F> FRef>
			explicit(false) constexpr derived(FRef&& fn) noexcept
			: fn(XIEITE_FWD(fn)) {}

			constexpr Ret operator()(Args... args) const noexcept(false) override {
				return std::invoke(this->fn, XIEITE_FWD(args)...);
			}

			[[nodiscard]] constexpr std::unique_ptr<xieite::fn<Ret(Args...)>::base> clone() const noexcept override {
				return std::make_unique<derived>(this->fn);
			}
		};

		std::unique_ptr<xieite::fn<Ret(Args...)>::base> ptr;
	};
}
