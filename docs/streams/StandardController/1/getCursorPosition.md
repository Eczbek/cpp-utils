# [xieite](../../../xieite.md)\:\:[streams](../../../streams.md)\:\:[StandardController\<inputStream, outputStream\>](../../StandardController.md)\:\:getPosition
Defined in header [<xieite/streams/StandardController.hpp>](../../../../include/xieite/streams/StandardController.hpp)

&nbsp;

## Description
Gets the cursor's position in the terminal. Coordinates correlate to the `{ +x, -y }` cartesian quadrant.

&nbsp;

## Synopses
#### 1)
```cpp
xieite::streams::Position getPosition() const noexcept;
```