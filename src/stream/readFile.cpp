#include <cstdio>
#include <memory>
#include <string>
#include <xieite/stream/readFile.hpp>

std::string xieite::stream::readFile(std::FILE* const file) noexcept {
	std::unique_ptr<std::FILE, decltype(&pclose)> pipe(file, pclose);
	std::string result;
	if (pipe) {
		const int bufferSize = 1024;
		std::string buffer(bufferSize, '\0');
		char* const bufferData = buffer.data();
		while (std::fgets(bufferData, bufferSize, pipe.get()) != nullptr)
			result += buffer;
	}
	return result;
}