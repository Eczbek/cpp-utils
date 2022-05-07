#include "./io.hpp"

#include <limits>

void util::io::ignr () {
	fcntl(STDIN_FILENO, F_SETFL, fcntl(STDIN_FILENO, F_GETFL) | O_NONBLOCK);
	char temp;
	while (read(STDIN_FILENO, &temp, 1) == 1);
}

void util::io::clr_scrn () {
	std::cout << "\033[2J\033[1;1H";
}

char util::io::char_wait (bool echo) {
	termios cooked, raw;
	tcgetattr(STDIN_FILENO, &cooked);
	raw = cooked;
	raw.c_lflag &= ~ICANON;
	raw.c_lflag &= echo ? ECHO : ~ECHO;
	tcsetattr(STDIN_FILENO, TCSANOW, &raw);
	const char input = getchar();
	tcsetattr(STDIN_FILENO, TCSANOW, &cooked);
	return input;
}

char util::io::char_read (bool echo) {
	termios cooked, raw;
	tcgetattr(STDIN_FILENO, &cooked);
	raw = cooked;
	raw.c_lflag &= ~ICANON;
	raw.c_lflag &= echo ? ECHO : ~ECHO;
	tcsetattr(STDIN_FILENO, TCSANOW, &raw);
	fcntl(STDIN_FILENO, F_SETFL, fcntl(STDIN_FILENO, F_GETFL) | O_NONBLOCK);
	char input = 0;
	read(STDIN_FILENO, &input, 1);
	tcsetattr(STDIN_FILENO, TCSANOW, &cooked);
	return input;
}
