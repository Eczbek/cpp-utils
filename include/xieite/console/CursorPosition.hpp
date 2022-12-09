#pragma once

namespace xieite::console {
	struct CursorPosition {
		int row;
		int column;

		CursorPosition(const int row = 0, const int column = 0) noexcept
		: row(row), column(column) {}
	};
}