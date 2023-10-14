# [xieite](../../../../../xieite.md)\:\:[math](../../../../../math.md)\:\:[BigInteger<Datum>](../../../../big_integer.md)\:\:operator\<=\>
Defined in header [<xieite/math/big_integer.hpp>](../../../../../../../include/xieite/math/big_integer.hpp)

&nbsp;

## Synopses
#### 1)
```cpp
[[nodiscard]] friend constexpr std::strong_ordering operator<=>(const xieite::math::BigInteger<Datum>& leftComparand, const xieite::math::BigInteger<Datum>& rightComparand) noexcept;
```
#### 2)
```cpp
template<std::integral Integer>
[[nodiscard]] friend constexpr std::strong_ordering operator<=>(const xieite::math::BigInteger<Datum>& leftComparand, const Integer rightComparand) noexcept;
```

&nbsp;

## Example
```cpp
#include <iostream>
#include <xieite/math/big_integer.hpp>

int main() {
    std::cout
        << std::boolalpha
        << (xieite::math::BigInteger(9) > 3)
        << '\n';
}
```
Output:
```
true
```