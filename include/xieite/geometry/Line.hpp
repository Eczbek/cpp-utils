#pragma once
#include <cmath> // std::cos, std::sin
#include <xieite/geometry/LineLike.hpp>
#include <xieite/geometry/Point.hpp>
#include <xieite/geometry/getSlope.hpp>
#include <xieite/math/approximatelyEqual.hpp>

namespace xieite::geometry {
	struct Line
	: xieite::geometry::LineLike {
		constexpr Line(const xieite::geometry::Point start, const xieite::geometry::Point end) noexcept
		: xieite::geometry::LineLike(start, end) {}

		constexpr Line(const xieite::geometry::Point start, const double angle) noexcept
		: xieite::geometry::LineLike(start, xieite::geometry::Point(std::cos(angle), std::sin(angle))) {}

		[[nodiscard]]
		constexpr bool operator==(const xieite::geometry::Line& other) const noexcept {
			const double slope = xieite::geometry::getSlope(*this);
			return (std::isinf(slope) ? xieite::math::approximatelyEqual(this->start.x, other.start.x) : xieite::math::approximatelyEqual(other.start.x * slope - this->start.x * slope + this->start.y, other.start.y)) && xieite::math::approximatelyEqual(slope, xieite::geometry::getSlope(other));
		}
	};
}
