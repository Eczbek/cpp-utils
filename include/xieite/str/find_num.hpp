#pragma once

#include <concepts>
#include <cstddef>
#include <string_view>
#include <type_traits>
#include "../math/abs.hpp"
#include "../math/ssize.hpp"
#include "../meta/is_arith.hpp"
#include "../str/str_num_config.hpp"

namespace xieite {
	template<xieite::is_arith T>
	[[nodiscard]] constexpr std::string_view find_num(std::string_view str, std::conditional_t<std::floating_point<T>, xieite::ssize, T> radix = 10, xieite::str_num_config config = {}) noexcept {
		const std::size_t size = str.size();
		const std::string_view digits = config.digits.substr(0, xieite::abs(radix));
		std::size_t i = 0;
		while ((i < size) && !digits.contains(str[i]) && !((i < (size - 1)) && (config.neg.contains(str[i]) || config.pos.contains(str[i])) && digits.contains(str[i + 1]))) {
			++i;
		}
		if (i >= size) {
			return "";
		}
		const std::size_t start = i;
		i += config.neg.contains(str[i]) || config.pos.contains(str[i]);
		if constexpr (std::floating_point<T>) {
			bool point = false;
			for (; i < size; ++i) {
				if (digits.contains(str[i])) {
					continue;
				}
				if (config.pts.contains(str[i])) {
					if (!point) {
						point = true;
						continue;
					}
				} else if ((i < (size - 1)) && config.exp.contains(str[i])) {
					return str.substr(start, i - start + xieite::find_num<int>(str.substr(i + 1)).size() + 1);
				}
				break;
			}
		} else {
			while ((i < size) && digits.contains(str[i])) {
				++i;
			}
		}
		return str.substr(start, i - start);
	}
}