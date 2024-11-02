export module xieite:is_satisfied_by;

export namespace xieite {
	template<auto fn, typename... Ts>
	concept is_satisfied_by = requires { fn.template operator()<Ts...>(); };
}