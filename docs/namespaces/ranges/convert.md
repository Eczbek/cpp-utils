# [xieite](../../xieite.md)\:\:[ranges](../../ranges.md)\:\:convert
Defined in header [<xieite/ranges/convert.hpp>](../../../include/xieite/ranges/convert.hpp)

&nbsp;

## Description
Converts one range to another. Iterates over the least of the ranges' sizes.

&nbsp;

## Synopses
#### 1)
```cpp
template<std::ranges::range RangeFrom, std::ranges::range RangeTo, xieite::concepts::Functable<std::ranges::range_value_t<RangeTo>(std::ranges::range_value_t<RangeFrom>)> Converter = decltype(xieite::functors::staticCast<std::ranges::range_value_t<RangeFrom>, std::ranges::range_value_t<RangeTo>>)>
[[nodiscard]] constexpr void convert(const RangeFrom& rangeFrom, RangeTo& rangeTo, const Converter& converter = Converter())
noexcept(xieite::concepts::NoThrowInvocable<Converter, std::ranges::range_value_t<RangeFrom>>);
```

&nbsp;

## Example
```cpp
#include <iostream>
#include <string>
#include <string_view>
#include <vector>
#include <xieite/ranges/convert.hpp>

int main() {
    std::array<int, 5> source { 1, 2, 3, 4, 5 };
    std::vector<std::string> result(5);

    xieite::ranges::convert(source, result, [](int x) { return std::to_string(x); });

    for (std::string_view item : result) {
        std::cout << item << '\n';
    }
}
```
Output:
```
1
2
3
4
5
```