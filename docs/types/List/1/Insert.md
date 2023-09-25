# [xieite](../../../xieite.md)\:\:[types](../../../types.md)\:\:[List\<Types...\>](../../List.md)\:\:Insert
Defined in header [<xieite/types/List.hpp>](../../../../include/xieite/types/List.hpp)

&nbsp;

Inserts values.

&nbsp;

## Synopses
#### 1)
```cpp
template<std::size_t index, typename... OtherTypes>
using Insert = List<Types...>::Slice<0, index>::template Append<OtherTypes...>::template AppendRange<List<Types...>::Slice<index>>;
```

&nbsp;

## Example
```cpp
#include <iostream>
#include <xieite/types/List.hpp>
#include <xieite/types/demangle.hpp>

int main() {
    using List = xieite::types::List<int, char, short, long>::Insert<2, float, double>;

    std::cout << xieite::types::demangle(typeid(List::Data).name()) << '\n';
}
```
Output:
```
std::tuple<int, char, float, double, short, long>
```