# [xieite](../../xieite.md)\:\:[strings](../../strings.md)\:\:padFront
Defined in header [<xieite/strings/pad_front.hpp>](../../../include/xieite/strings/pad_front.hpp)

&nbsp;

## Description
Pads the front of a string.

&nbsp;

## Synopses
#### 1)
```cpp
[[nodiscard]] constexpr std::string padFront(const std::string& value, std::size_t size, char padding = ' ') noexcept;
```

&nbsp;

## Example
```cpp
#include <iostream>
#include <xieite/strings/pad_front.hpp>

int main() {
    std::cout << xieite::strings::padFront("418", 7, '0') << '\n';
}
```
Output:
```
000418
```