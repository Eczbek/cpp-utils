export module xieite:add_var_rref_noex;

import :add_noex;
import :add_var_rref;

export namespace xieite {
	template<typename T>
	using add_var_rref_noex = xieite::add_var_rref<xieite::add_noex<T>>;
}