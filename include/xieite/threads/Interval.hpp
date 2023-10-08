#ifndef XIEITE_HEADER__THREADS__INTERVAL
#	define XIEITE_HEADER__THREADS__INTERVAL

#	include <concepts>
#	include <functional>
#	include <thread>
#	include "../concepts/ChronoDuration.hpp"
#	include "../threads/Loop.hpp"

namespace xieite::threads {
	class Interval {
	public:
		template<std::invocable<> Functor, xieite::concepts::ChronoDuration ChronoDuration>
		Interval(const Functor& callback, const ChronoDuration duration) noexcept
		: loop([&callback, duration] {
			static bool first = true;
			if (first) {
				first = false;
			} else {
				std::invoke(callback);
			}
			std::this_thread::sleep_for(duration);
		}) {}

		[[nodiscard]] bool good() const noexcept {
			return this->loop.good();
		}

		void stop() noexcept {
			this->loop.stop();
		}

	private:
		xieite::threads::Loop loop;
	};
}

#endif
