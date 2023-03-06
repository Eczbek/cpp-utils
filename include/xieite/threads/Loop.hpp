#pragma once
#include <atomic> // std::atomic
#include <concepts> // std::invocable
#include <memory> // std::make_shared, std::shared_ptr
#include <thread> // std::thread
#include <utility> // std::forward

// Thanks to uno20001 for help

namespace xieite::threads {
	class Loop {
	private:
		std::shared_ptr<std::atomic<bool>> cancelled;
		std::thread thread;

	public:
		template<std::invocable<> C>
		Loop(C&& callback) noexcept
		: cancelled(std::make_shared<std::atomic<bool>>(false)), thread([this, callback = std::forward<C>(callback)]() -> void {
			do
				callback();
			while (*this);
		}) {}

		~Loop() {
			cancel();
		}

		operator bool() const noexcept {
			return !*cancelled;
		}

		void cancel() noexcept {
			*cancelled = true;
			if (thread.joinable())
				thread.detach();
		}
	};
}