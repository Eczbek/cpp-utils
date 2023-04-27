# [`xieite`](../../../README.md)`::`[`random`](../../../docs/random.md)`::`[`InterruptableUniformDistribution<Number>`](../../../docs/random/InterruptableUniformDistribution.md)`::operator()`
Defined in header [`<xieite/random/InterruptableUniformDistribution.hpp>`](../../../include/random/InterruptableUniformDistribution.hpp)

<br/>

Distributes the result of a random number generator.

<br/><br/>

## Synopsis

<br/>

```cpp
[[nodiscard]]
Number operator()(xieite::concepts::UniformRandomBitGenerator auto& generator) noexcept;
```
### Parameters
- `generator` - An `auto` right-value reference, satisfying `xieite::concepts::UniformRandomBitGenerator`
### Return value
- A `Number`

<br/><br/>

## See also
- [`xieite::concepts::UniformRandomBitGenerator`](../../../docs/concepts/UniformRandomBitGenerator.md)