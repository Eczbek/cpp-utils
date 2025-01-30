#pragma once

#define XIEITE_VER_MAJOR 0
#define XIEITE_VER_MINOR 5
#define XIEITE_VER_PATCH 6

#define XIEITE_VER_EQ(major, ...) XIEITE_DETAIL_VER(__VA_ARGS__, XIEITE_DETAIL_VER_EQ(major, __VA_ARGS__), XIEITE_DETAIL_VER_EQ(major, __VA_ARGS__, 0), XIEITE_DETAIL_VER_EQ(major, 0, 0))
#define XIEITE_VER_LEAST(major, ...) XIEITE_DETAIL_VER(__VA_ARGS__, XIEITE_DETAIL_VER_LEAST(major, __VA_ARGS__), XIEITE_DETAIL_VER_LEAST(major, __VA_ARGS__, 0), XIEITE_DETAIL_VER_LEAST(major, 0, 0))
#define XIEITE_VER_MOST(major, ...) XIEITE_DETAIL_VER(__VA_ARGS__, XIEITE_DETAIL_VER_MOST(major, __VA_ARGS__), XIEITE_DETAIL_VER_MOST(major, __VA_ARGS__, 0), XIEITE_DETAIL_VER_MOST(major, 0, 0))
#define XIEITE_DETAIL_VER(_0, _1, _2, x, ...) x
#define XIEITE_DETAIL_VER_EQ(major, minor, patch) (XIEITE_VER_TYPE_##type && (XIEITE_VER_MAJOR_##type == (major)) && (XIEITE_VER_MINOR_##type == (minor)) && (XIEITE_VER_PATCH_##type == (patch)))
#define XIEITE_DETAIL_VER_LEAST(major, minor, patch) (XIEITE_VER_TYPE_##type && ((XIEITE_VER_MAJOR_##type > (major)) || (XIEITE_VER_MAJOR_##type == (major)) && ((XIEITE_VER_MINOR_##type > (minor)) || (XIEITE_VER_MINOR_##type == (minor)) && (XIEITE_VER_PATCH_##type >= (patch)))))
#define XIEITE_DETAIL_VER_MOST(major, minor, patch) (XIEITE_VER_TYPE_##type && ((XIEITE_VER_MAJOR_##type < (major)) || (XIEITE_VER_MAJOR_##type == (major)) && ((XIEITE_VER_MINOR_##type < (minor)) || (XIEITE_VER_MINOR_##type == (minor)) && (XIEITE_VER_PATCH_##type <= (patch)))))
