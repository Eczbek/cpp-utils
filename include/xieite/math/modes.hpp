#ifndef XIEITE_HEADER__MATH__MODES
#	define XIEITE_HEADER__MATH__MODES

#	include <array>
#	include <vector>
#	include "../algorithms/modes.hpp"
#	include "../concepts/Numeric.hpp"
#	include "../math/Result.hpp"

namespace xieite::math {
	template<xieite::concepts::Numeric... Numbers>
	constexpr std::vector<xieite::math::Result<Numbers...>> modes(const Numbers... values) noexcept {
		if constexpr (sizeof...(Numbers)) {
			std::vector<xieite::math::Result<Numbers...>> results;
			for (const typename std::array<xieite::math::Result<Numbers...>, sizeof...(Numbers)>::const_iterator iterator : xieite::algorithms::modes(std::array<xieite::math::Result<Numbers...>, sizeof...(Numbers)> {
				static_cast<xieite::math::Result<Numbers...>>(values)...
			})) {
				results.push_back(*iterator);
			}
			return results;
		}
		return std::vector<xieite::math::Result<Numbers...>>();
	}
}

#endif
