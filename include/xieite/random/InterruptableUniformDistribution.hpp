#pragma once
#include <algorithm> // std::clamp
#include <cmath> // std::max, std::min
#include <concepts> // std::integral
#include <random> // std::uniform_int_distribution, std::uniform_real_distribution
#include <type_traits> // std::conditional_t
#include <utility> // std::pair
#include <vector> // std::vector
#include <xieite/concepts/Arithmetic.hpp>
#include <xieite/concepts/UniformRandomBitGenerator.hpp>
#include <xieite/macros/ASSERT.hpp>
#include <xieite/math/closestTo.hpp>
#include <xieite/math/difference.hpp>
#include <xieite/math/farthestFrom.hpp>

namespace xieite::random {
	template<xieite::concepts::Arithmetic N>
	class InterruptableUniformDistribution {
	private:
		int sign;
		std::vector<std::pair<N, N>> interruptions;
		std::conditional_t<std::integral<N>, std::uniform_int_distribution<N>, std::uniform_real_distribution<N>> distribution;

	public:
		InterruptableUniformDistribution(const N begin, const N end, const std::vector<std::pair<N, N>>& interruptions) {
			N begin2 = begin;
			N end2 = end;
			N& farthest = xieite::math::farthestFrom(0, begin2, end2);
			this->sign = (farthest >= 0) * 2 - 1;
			for (std::pair<N, N> interruption : interruptions) {
				if (((interruption.first < begin) || (interruption.first > end)) && ((interruption.first > begin) || (interruption.first < end)) && ((interruption.second < begin) || (interruption.second > end)) && ((interruption.second > begin) || (interruption.second < end)))
					continue;
				interruption.first = std::clamp(interruption.first, begin, end);
				interruption.second = std::clamp(interruption.second, begin, end);
				const N difference = (static_cast<N>(xieite::math::difference(interruption.first, interruption.second)) + 1) * this->sign;
				XIEITE_ASSERT(difference < farthest, "Cannot exclude entire range");
				farthest -= difference;
				this->interruptions.push_back(interruption);
			}
			this->distribution = decltype(this->distribution)(std::min(begin2, end2), std::max(begin2, end2));
		}

		template<xieite::concepts::UniformRandomBitGenerator G>
		[[nodiscard]]
		N operator()(G& generator) noexcept {
			N result = this->distribution(generator);
			for (const std::pair<N, N> interruption : this->interruptions) {
				const N closest = xieite::math::closestTo(0, interruption.first, interruption.second);
				if ((this->sign > 0) && (result >= closest) || (this->sign < 0) && (result <= closest))
					result += (static_cast<N>(xieite::math::difference(interruption.first, interruption.second)) + 1) * this->sign;
			}
			return result;
		}
	};
}
