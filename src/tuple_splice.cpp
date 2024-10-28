module;

#include <xieite/fwd.hpp>

export module xieite:tuple_splice;

import std;
import :is_spec_of;
import :tuple_fwd;
import :unroll;

export namespace xieite {
	template<std::size_t start, std::size_t end = start, xieite::is_spec_of<std::tuple> Tuple1, xieite::is_spec_of<std::tuple> Tuple2 = std::tuple<>>
	[[nodiscard]] constexpr auto tuple_splice(Tuple1&& tuple1, Tuple2&& tuple2 = {}) noexcept {
		static constexpr std::size_t size = std::tuple_size_v<std::remove_cvref_t<Tuple1>>;
		static_assert(start <= size, "start index must be within tuple size");
		static_assert(end <= size, "end index must be within tuple size");
		return std::tuple_cat(
			xieite::unroll<start>([&tuple1]<std::size_t... i> {
				return std::forward_as_tuple(std::get<i>(std::move(tuple1))...);
			}),
			xieite::tuple_fwd(XIEITE_FWD(tuple2)),
			xieite::unroll<size - end>([&tuple1]<std::size_t... i> {
				return std::forward_as_tuple(std::get<end + i>(std::move(tuple1))...);
			})
		);
	}
}
