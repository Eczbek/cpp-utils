# [xieite](../../../xieite.md)\:\:[types](../../../types.md)\:\:[List\<Types...\>](../../List.md)\:\:First
Defined in header [<xieite/types/List.hpp>](../../../../include/xieite/types/List.hpp)

&nbsp;

Accesses the first type.

&nbsp;

## Synopses
#### 1)
```cpp
using First = List<Types...>::At<0>;
```

&nbsp;

## Example
```cpp
#include <iostream>
#include <xieite/types/List.hpp>
#include <xieite/types/demangle.hpp>

int main() {
    using List = xieite::types::List<int, char, short, long>;
    using Type = List::First;

    std::cout << xieite::types::demangle(typeid(Type).name()) << '\n';
}
```
Output:
```
int
```