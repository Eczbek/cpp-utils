#include <iostream> // std::cout
#include <xieite/console/setMode.hpp>

void xieite::console::setMode(const int mode, const bool value) noexcept {
	std::cout << "\x1b[?" << mode << (value ? 'h' : 'l');
}