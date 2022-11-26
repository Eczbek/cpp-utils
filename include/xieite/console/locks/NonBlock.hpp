#pragma once
#include <cstddef>
#include <fcntl.h>
#include <unistd.h>

namespace xieite::console::locks {
	class NonBlock {
	private:
		const int blockingMode = fcntl(STDIN_FILENO, F_GETFL);

	public:
		NonBlock() noexcept;

		~NonBlock();
	};
}