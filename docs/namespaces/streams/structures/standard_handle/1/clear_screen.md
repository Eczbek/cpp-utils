# [xieite](../../../../../xieite.md)\:\:[streams](../../../../../streams.md)\:\:[StandardHandle](../../../standard_handle.md)\:\:clearScreen
Defined in header [<xieite/streams/standard_handle.hpp>](../../../../../../include/xieite/streams/standard_handle.hpp)

&nbsp;

## Description
Clears the entire screen.

&nbsp;

## Synopses
#### 1)
```cpp
void clearScreen() const noexcept;
```

&nbsp;

## Example
```cpp
#include <iostream>
#include <xieite/streams/standard_handle.hpp>

int main() {
    auto terminal = xieite::streams::StandardHandle(std::cin, std::cout);

    std::cout << "Hello, world!\n";

    terminal.clearScreen();
}
```
Output:
```
```