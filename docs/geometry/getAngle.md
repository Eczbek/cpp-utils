# xieite::geometry::getAngle
Declared in `<xieite/geometry/getAngle.hpp>`

<br/>

Calculates the angle (in radians) of a line or between two points.

<br/><br/>

## Declarations
```cpp
[[nodiscard]]
constexpr long double getAngle(const xieite::geometry::Point point1, const xieite::geometry::Point point2) noexcept;
```
```cpp
template<std::derived_from<xieite::geometry::LineLike> LineLike>
[[nodiscard]]
constexpr long double getAngle(const LineLike& lineLike) noexcept;
```

<br/><br/>

## Example
```cpp
#include <iostream> // std::cout
#include <xieite/geometry/Line.hpp>
#include <xieite/geometry/getAngle.hpp>

int main() {
	const xieite::geometry::Line line({ 0, 0 }, { 1, 0 });
	std::cout << xieite::geometry::getAngle(line) << '\n';
}
```
Output (rounded):
```
0
```