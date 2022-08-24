# gcufl::geometry::Polygon::perimeter
```cpp
double perimeter() const noexcept;
```
Calculates the perimeter of the polygon.
## Example
```cpp
#include <iostream>
#include <gcufl/geometry.hpp>

int main() {
	gcufl::geometry::Polygon polygon({
		{ 0, 0 },
		{ 2, 0 },
		{ 2, 2 },
		{ 0, 2 }
	});

	std::cout << polygon.perimeter() << '\n';
}
```
Output:
```
8
```