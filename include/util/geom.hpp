#pragma once

#include <optional>
#include <vector>


namespace util {
	namespace geom {
		struct point {
			double x;
			double y;

			point(const double x = 0, const double y = 0);

			bool operator==(const util::geom::point& other) const;

			bool operator!=(const util::geom::point& other) const;

			util::geom::point rotate(const util::geom::point& origin, const double angle) const;
		};

		struct line {
			util::geom::point start;
			util::geom::point end;

			line(const util::geom::point& start, const util::geom::point& end);

			line(const util::geom::point& start, const double angle);

			bool operator==(const util::geom::line& other) const;

			bool operator!=(const util::geom::line& other) const;

			double slope() const;

			double intercept_x() const;

			double intercept_y() const;

			double angle() const;

			std::optional<util::geom::point> intersection(const util::geom::line& other) const;

			virtual bool contains(const util::geom::point& point) const;
		};

		struct ray: util::geom::line {
			ray(const util::geom::point& start, const util::geom::point& end);

			ray(const util::geom::point& start, const double angle);

			bool operator==(const util::geom::ray& other) const;

			bool operator!=(const util::geom::ray& other) const;

			bool contains(const util::geom::point& point) const;
		};

		struct segment: util::geom::line {
			segment(const util::geom::point& start, const util::geom::point& end);

			bool operator==(const util::geom::segment& other) const;

			bool operator!=(const util::geom::segment& other) const;

			double length() const;

			bool contains(const util::geom::point& point) const;
		};

		struct polygon {
			std::vector<util::geom::point> points;

			polygon(const std::vector<util::geom::point>& points);

			bool operator==(const util::geom::polygon& other) const;

			bool operator!=(const util::geom::polygon& other) const;

			double area() const;

			double perimeter() const;

			std::vector<util::geom::segment> sides() const;

			bool contains(const util::geom::point& point) const;
		};

		struct ellipse {
			util::geom::point center;
			util::geom::point radius;
			double rotation;

			ellipse(const util::geom::point& center, const util::geom::point& radius, const double rotation = 0);

			bool operator==(const util::geom::ellipse& other) const;

			bool operator!=(const util::geom::ellipse& other) const;

			double area() const;

			double perimiter() const;

			bool contains(const util::geom::point& point) const;

			std::vector<util::geom::point> intersections(const util::geom::line& line) const;

			std::vector<util::geom::point> intersections(const util::geom::ellipse& other) const;
		};

		struct circle: util::geom::ellipse {
			circle(const util::geom::point& center, const double radius);

			bool operator==(const util::geom::circle& other) const;

			bool operator!=(const util::geom::circle& other) const;

			bool contains(const util::geom::point& point) const;
		};

		struct rectangle: util::geom::polygon {
			rectangle(const util::geom::point& corner1, const util::geom::point& corner2);

			rectangle(const util::geom::segment& segment);

			rectangle(const util::geom::polygon& polygon);

			rectangle(const util::geom::ellipse& ellipse);

			bool operator==(const util::geom::rectangle& other) const;

			bool operator!=(const util::geom::rectangle& other) const;

			double width() const;

			double height() const;

			double area() const;

			double perimeter() const;

			bool contains(const util::geom::point& point) const;
		};
	}
}