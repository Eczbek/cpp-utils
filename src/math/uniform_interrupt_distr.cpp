module;

#include <xieite/fwd.hpp>

export module xieite:uniform_interrupt_distr;

import std;
import :betw;
import :diff;
import :interval;
import :is_arith;
import :merge_intervals;
import :minmax;
import :uniform_distr;

export namespace xieite {
	template<xieite::is_arith T>
	struct uniform_interrupt_distr {
	public:
		template<std::ranges::input_range R>
		requires(std::convertible_to<std::ranges::range_value_t<R>, xieite::interval<T>>)
		[[nodiscard]] uniform_interrupt_distr(xieite::interval<T> interval, R&& interrupts) {
			const auto [min, max] = xieite::minmax(interval.start, interval.end);
			T upper = max;
			for (auto [start, end] : xieite::merge_intervals(XIEITE_FWD(interrupts))) {
				if (!xieite::betw(start, min, max) || !xieite::betw(end, min, max)) {
					continue;
				}
				start = std::clamp(start, min, max);
				end = std::clamp(end, min, max);
				const auto diff = static_cast<T>(xieite::diff(start, end));
				if (upper <= (min + diff)) {
					throw std::out_of_range("must not exclude entire interval");
				}
				upper -= diff + std::integral<T>;
				this->interrupts.push_back(xieite::interval<T>(std::min(start, end), diff));
			}
			this->distr = xieite::uniform_distr<T>(min, upper);
			std::ranges::sort(this->interrupts, std::ranges::less(), &xieite::interval<T>::start);
		}

		template<std::uniform_random_bit_generator G>
		[[nodiscard]] T operator()(G& gen) noexcept {
			T result = this->distr(gen);
			for (auto [start, end] : this->interrupts) {
				if (result >= start) {
					result += end + std::integral<T>;
				}
			}
			return result;
		}

	private:
		xieite::uniform_distr<T> distr;
		std::vector<xieite::interval<T>> interrupts;
	};
}