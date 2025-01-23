export module xieite:is_satisfd_any;

import :is_satisfd;

export namespace xieite {
	template<auto fn, typename... Ts>
	concept is_satisfd_any = (... || xieite::is_satisfd<fn, Ts>);
}