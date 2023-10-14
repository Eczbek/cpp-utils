# [xieite](../../xieite.md)\:\:[random](../../random.md)\:\:getUniversallyUniqueIdentifier
Defined in header [<xieite/random/get_universally_unique_identifier.hpp>](../../../include/xieite/random/get_universally_unique_identifier.hpp)

&nbsp;

## Description
Generates a UUID. Compile with `-luuid`.

&nbsp;

## Synopses
#### 1)
```cpp
[[nodiscard]] inline std::string getUniversallyUniqueIdentifier() noexcept;
```

&nbsp;

## Example
```cpp
#include <iostream>
#include <xieite/random/get_universally_unique_identifier.hpp>

int main() {
    std::cout << xieite::random::getUniversallyUniqueIdentifier() << '\n';
}
```
Very unlikely output:
```
bf59be9f-2e6d-4236-b456-e64161efd709
```