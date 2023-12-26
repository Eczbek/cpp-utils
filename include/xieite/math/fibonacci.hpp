#ifndef XIEITE_HEADER_MATH_FIBONACCI
#	define XIEITE_HEADER_MATH_FIBONACCI

#	include <cstddef>
#	include <vector>
#	include "../concepts/arithmetic.hpp"
#	include "../containers/make_array.hpp"
#	include "../math/addition_overflows.hpp"

namespace xieite::math {
	template<xieite::concepts::Arithmetic Number>
	inline constexpr auto fibonacci = ([] {
		static constexpr auto generate = [] {
			std::vector<Number> result { 0, 1 };
			for (std::size_t i = 2; !xieite::math::additionOverflows(result[i - 1], result[i - 2]); ++i) {
				result.push_back(result[i - 1] + result[i - 2]);
			}
			return result;
		};
		return xieite::containers::makeArray<Number, generate().size()>(generate());
	})();
}

#endif
