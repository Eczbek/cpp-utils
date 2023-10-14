# [xieite](../../xieite.md)\:\:[concepts](../../concepts.md)\:\:UniformRandomBitGenerator
Defined in header [<xieite/concepts/uniform_random_bit_generator.hpp>](../../../include/xieite/uniform_random_bit_generator.hpp)

&nbsp;

## Description
Specifies that a type is a uniform random bit generator.

&nbsp;

## Synopses
#### 1)
```cpp
template<typename Type>
concept UniformRandomBitGenerator = std::uniform_random_bit_generator<std::remove_reference_t<Type>>;
```