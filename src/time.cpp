module;

#include <xieite/fwd.hpp>

export module xieite:time;

import std;
import :is_clock;
import :is_duration;
import :stopwatch;

export namespace xieite {
	template<xieite::is_duration Duration = std::chrono::nanoseconds, xieite::is_clock Clock = std::chrono::steady_clock, typename F, typename... Args>
	requires(std::invocable<F, Args...>)
	[[nodiscard]] Duration time(F&& fn, Args&&... args)
	noexcept(std::is_nothrow_invocable_v<F, Args...>) {
		xieite::stopwatch<Clock> stopwatch;
		stopwatch.start();
		std::invoke(XIEITE_FWD(fn), XIEITE_FWD(args)...);
		return stopwatch.template total<Duration>();
	}
}
