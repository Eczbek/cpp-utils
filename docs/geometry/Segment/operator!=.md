# gcufl::geometry::Segment::operator!=
```cpp
bool operator!=(const gcufl::geometry::Segment& other) const noexcept;
```
Compares two line segments for inequality.
## Example
```cpp
#include <iostream>
#include <gcufl/geometry.hpp>

int main() {
	gcufl::geometry::Segment segment1({ 0, 0 }, { 2, 2 });
	gcufl::geometry::Segment segment2({ 0, 0 }, { 2, 2 });

	std::cout
		<< std::boolalpha
		<< (segment1 != segment2)
		<< '\n';
}
```
Output:
```
false
```