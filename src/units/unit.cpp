export module xieite:units.Unit;

import std;
import :concepts.True;
import :containers.FixedString;
import :types.List;
import :types.Value;

export namespace xieite::units {
	template<xieite::containers::FixedString type, auto... operations>
	requires(!(sizeof...(operations) % 2) && xieite::types::List<xieite::types::Value<operations>...>::Transform<2, []<typename Operation, typename Value> { return xieite::types::Value<std::convertible_to<Operation, char> && std::convertible_to<Value, double>>(); }>::all<[]<xieite::concepts::True> {}>)
	struct Unit {
	public:
		double value;

		template<auto... otherOperations>
		[[nodiscard]] explicit(false) constexpr operator xieite::types::Unit<type, otherOperations...>() const noexcept {
			double result = this->value;
			xieite::units::Unit<type, operations...>::Wrap::apply([&result]<typename... Operations> {
				(..., (result = Operations().first(result)));
			});
			xieite::units::Unit<type, otherOperations...>::Wrap::Reverse::apply([&result]<typename... OtherOperations> {
				(..., (result = OtherOperations().second(result)));
			});
			return xieite::types::Unit<type, otherOperations...>(result);
		}

	private:
		using Wrap = xieite::types::List<xieite::types::Value<operations>...>::Transform<2, []<typename Operation, typename Value> {
			static constexpr auto add = [](auto other) { return Value::value + other; };
			static constexpr auto subtract = [](auto other) { return Value::value - other; };
			static constexpr auto multiply = [](auto other) { return Value::value * other; };
			static constexpr auto divide = [](auto other) { return Value::value / other; };
			if constexpr (Operation::value == '+') {
				return std::make_pair(add, subtract);
			} else if constexpr (Operation::value == '-') {
				return std::make_pair(subtract, add);
			} else if constexpr (Operation::value == '*') {
				return std::make_pair(multiply, divide);
			} else if constexpr (Operation::value == '/') {
				return std::make_pair(divide, multiply);
			} else {
				static_assert(false, "must use valid operator");
			}
		}>;
	};
}
