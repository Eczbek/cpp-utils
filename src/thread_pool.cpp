export module xieite:thread_pool;

import std;

export namespace xieite {
	struct thread_pool {
	public:
		thread_pool(std::size_t threads = std::thread::hardware_concurrency()) noexcept {
			this->set_threads(threads);
		}

		~thread_pool() {
			auto lock = std::unique_lock<std::mutex>(this->mutex);
			for (std::jthread& thread : this->threads) {
				thread.request_stop();
			}
			lock.unlock();
			this->cond.notify_all();
		}

		void set_threads(std::size_t threads) noexcept {
			const auto _ = std::unique_lock<std::mutex>(this->mutex);
			const std::size_t curr = this->threads.size();
			if (threads < curr) {
				this->threads.resize(threads);
				return;
			}
			while (threads-- > curr) {
				this->threads.emplace_back([this](std::stop_token token) {
					while (true) {
						auto lock = std::unique_lock<std::mutex>(this->mutex);
						this->cond.wait(
							lock,
							[this, token] {
								return this->tasks.size() || token.stop_requested();
							}
						);
						if (!this->tasks.size() && token.stop_requested()) {
							break;
						}
						std::packaged_task<void()> task = std::move(this->tasks.front());
						this->tasks.pop();
						lock.unlock();
						task();
					}
				});
			}
		}

		[[nodiscard]] std::size_t get_threads() const noexcept {
			const auto _ = std::unique_lock<std::mutex>(this->mutex);
			return this->threads.size();
		}

		template<std::invocable<> Fn>
		std::future<void> enqueue(Fn&& fn) noexcept {
			auto task = std::packaged_task<void()>(fn);
			std::future<void> future = task.get_future();
			auto lock = std::unique_lock<std::mutex>(this->mutex);
			this->tasks.emplace(std::move(task));
			lock.unlock();
			this->cond.notify_one();
			return future;
		}

	private:
		// Destruction order is important!!!
		std::queue<std::packaged_task<void()>> tasks;
		std::vector<std::jthread> threads;
		mutable std::mutex mutex;
		std::condition_variable cond;
	};
}

// Thanks to Evan for help
