# [xieite](../../xieite.md)\:\:[traits](../../traits.md)\:\:IsSpecializationOfAny \{\}
Defined in header [<xieite/traits/is_specialization_of_any.hpp>](../../../include/xieite/traits/is_specialization_of_any.hpp)

&nbsp;

## [Description](../concepts/specialization_of_any.md#Description)

&nbsp;

## Synopsis
#### 1)
```cpp
template<typename Type, template<typename...> typename... Templates>
struct IsSpecializationOfAny
: std::bool_constant<xieite::concepts::SpecializationOfAny<Type, Templates...>> {};
```

&nbsp;

## [Example](../concepts/specialization_of_any.md#Example)