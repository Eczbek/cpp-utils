export module xieite:rm_var_cvlref_noex;

import :rm_noex;
import :rm_var_cvlref;

export namespace xieite {
	template<typename T>
	using rm_var_cvlref_noex = xieite::rm_var_cvlref<xieite::rm_noex<T>>;
}