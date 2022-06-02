#include <util/str.hpp>
#include <array>
#include <limits>


std::vector<std::string> util::str::split(const std::string& string, const std::string_view& delimiter) {
	std::vector<std::string> segments;
	std::size_t i = 0;
	for (std::size_t j = 0; j < string.length() - i; ++j)
		if (string.substr(j, delimiter.length()) == delimiter) {
			segments.push_back(string.substr(i, j - i));
			i = j += delimiter.length();
		}
	segments.push_back(string.substr(i));
	return segments;
}

std::vector<std::string> util::str::split(const std::string& string, const char delimiter) {
	std::vector<std::string> segments;
	std::size_t i = 0;
	for (std::size_t j = 0; j < string.length(); ++j)
		if (string[j] == delimiter) {
			segments.push_back(string.substr(i, j - i));
			i = ++j;
		} 
	segments.push_back(string.substr(i));
	return segments;
}

std::string util::str::trunc(const std::string& string, const std::size_t length, const std::string& suffix) {
	return string.length() <= length
		? string
		: string.substr(0, length - suffix.length()) + suffix;
}

std::string util::str::trim_left(const std::string& string, const char character) {
	for (std::size_t i = 0; i < string.length(); ++i)
		if (string[i] != character)
			return string.substr(i);
	return "";
}

std::string util::str::trim_right(const std::string& string, const char character) {
	for (std::size_t i = string.length(); i > 0; --i)
		if (string[i - 1] != character)
			return string.substr(0, i);
	return "";
}

std::string util::str::trim_left(const std::string& string, const std::string_view& characters) {
	util::str::char_map<bool> charMap;
	for (const char character: characters)
		charMap[character] = true;
	for (std::size_t i = 0; i < string.length(); ++i)
		if (!charMap[string[i]])
			return string.substr(i);
	return "";
}

std::string util::str::trim_right(const std::string& string, const std::string_view& characters) {
	util::str::char_map<bool> charMap;
	for (const char character: characters)
		charMap[character]= true;
	for (std::size_t i = string.length(); i > 0; --i)
		if (!charMap[string[i - 1]])
			return string.substr(0, i);
	return "";
}