#pragma once

#include <concepts>
#include <cstddef>
#include <memory>
#include <utility>
#include "../pp/fwd.hpp"
#include "../trait/is_triv_dtor.hpp"

namespace xieite {
	template<xieite::is_triv_dtor T>
	struct shredder {
	public:
		constexpr shredder() noexcept {
			this->shred();
		}

		template<typename... Args>
		requires(std::constructible_from<T, Args...>)
		constexpr shredder(Args&&... args) noexcept
		: value(XIEITE_FWD(args)...) {}

		template<typename Self>
		[[nodiscard]] constexpr auto&& data(this Self&& self) noexcept {
			return std::forward_like<Self>(self.value);
		}

		constexpr void shred() noexcept {
			if !consteval {
				const auto byte = reinterpret_cast<volatile unsigned char*>(std::addressof(this->value));
				for (std::size_t i = 0; i < sizeof(T); ++i) {
					byte[i] = static_cast<unsigned char>(0);
				}
			}
		}

		constexpr ~shredder() {
			this->shred();
		}

	private:
		mutable T value;
	};
}
