# [xieite](../../xieite.md)\:\:[algorithms](../../algorithms.md)\:\:isUniformMatrix
Defined in header [<xieite/algorithms/is_uniform_matrix.hpp>](../../../include/xieite/algorithms/is_uniform_matrix.hpp)

&nbsp;

## Description
Checks whether all the ranges within one range have the same size.

&nbsp;

## Synopses
#### 1)
```cpp
template<std::ranges::range Matrix>
requires(std::ranges::range<std::ranges::range_value_t<Matrix>>)
[[nodiscard]] constexpr bool isUniformMatrix(const Matrix& matrix) noexcept;
```

&nbsp;

## Example
```cpp
#include <iostream>
#include <vector>
#include <xieite/algorithms/is_uniform_matrix.hpp>

int main() {
    std::vector<std::vector<int>> matrix1 {
        { 1, 2, 3 },
        { 4, 5, 6 }
    };

    std::vector<std::vector<int>> matrix2 {
        { 1 },
        { 2, 3 },
        { 4, 5, 6 }
    };

    std::cout
        << std::boolalpha
        << xieite::algorithms::isUniformMatrix(matrix1) << '\n'
        << xieite::algorithms::isUniformMatrix(matrix2) << '\n';
}
```
Output:
```
true
false
```