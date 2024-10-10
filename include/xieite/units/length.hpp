#pragma once

#include "../units/unit.hpp"

namespace xieite::units {
	using Quectometer = xieite::units::Unit<"length", [](auto x) { return x / 1e30; }, [](auto x) { return x * 1e30; }>;
	using Rontometer = xieite::units::Unit<"length", [](auto x) { return x / 1e27; }, [](auto x) { return x * 1e27; }>;
	using Yoctometer = xieite::units::Unit<"length", [](auto x) { return x / 1e24; }, [](auto x) { return x * 1e24; }>;
	using Zeptometer = xieite::units::Unit<"length", [](auto x) { return x / 1e21; }, [](auto x) { return x * 1e21; }>;
	using Attometer = xieite::units::Unit<"length", [](auto x) { return x / 1e18; }, [](auto x) { return x * 1e18; }>;
	using Femtometer = xieite::units::Unit<"length", [](auto x) { return x / 1e15; }, [](auto x) { return x * 1e15; }>;
	using Picometer = xieite::units::Unit<"length", [](auto x) { return x / 1e12; }, [](auto x) { return x * 1e12; }>;
	using Nanometer = xieite::units::Unit<"length", [](auto x) { return x / 1e9; }, [](auto x) { return x * 1e9; }>;
	using Micrometer = xieite::units::Unit<"length", [](auto x) { return x / 1e6; }, [](auto x) { return x * 1e6; }>;
	using Millimeter = xieite::units::Unit<"length", [](auto x) { return x / 1e3; }, [](auto x) { return x * 1e3; }>;
	using Centimeter = xieite::units::Unit<"length", [](auto x) { return x / 1e2; }, [](auto x) { return x * 1e2; }>;
	using Decimeter = xieite::units::Unit<"length", [](auto x) { return x / 1e1; }, [](auto x) { return x * 1e1; }>;
	using Meter = xieite::units::Unit<"length">;
	using Decameter = xieite::units::Unit<"length", [](auto x) { return x * 1e1; }, [](auto x) { return x / 1e1; }>;
	using Hectometer = xieite::units::Unit<"length", [](auto x) { return x * 1e2; }, [](auto x) { return x / 1e2; }>;
	using Kilometer = xieite::units::Unit<"length", [](auto x) { return x * 1e3; }, [](auto x) { return x / 1e3; }>;
	using Megameter = xieite::units::Unit<"length", [](auto x) { return x * 1e6; }, [](auto x) { return x / 1e6; }>;
	using Gigameter = xieite::units::Unit<"length", [](auto x) { return x * 1e9; }, [](auto x) { return x / 1e9; }>;
	using Terameter = xieite::units::Unit<"length", [](auto x) { return x * 1e12; }, [](auto x) { return x / 1e12; }>;
	using Petameter = xieite::units::Unit<"length", [](auto x) { return x * 1e15; }, [](auto x) { return x / 1e15; }>;
	using Exameter = xieite::units::Unit<"length", [](auto x) { return x * 1e18; }, [](auto x) { return x / 1e18; }>;
	using Zettameter = xieite::units::Unit<"length", [](auto x) { return x * 1e21; }, [](auto x) { return x / 1e21; }>;
	using Yottameter = xieite::units::Unit<"length", [](auto x) { return x * 1e24; }, [](auto x) { return x / 1e24; }>;
	using Ronnameter = xieite::units::Unit<"length", [](auto x) { return x * 1e27; }, [](auto x) { return x / 1e27; }>;
	using Quettameter = xieite::units::Unit<"length", [](auto x) { return x * 1e30; }, [](auto x) { return x / 1e30; }>;
	using Twip = xieite::units::Unit<"length", [](auto x) { return x * 0.0254 / 1440.0; }, [](auto x) { return x * 1440.0 / 0.0254; }>;
	using Thou = xieite::units::Unit<"length", [](auto x) { return x * 0.0000254; }, [](auto x) { return x / 0.0000254; }>;
	using Barleycorn = xieite::units::Unit<"length", [](auto x) { return x * 0.0254 / 3.0; }, [](auto x) { return x * 3.0 / 0.0254; }>;
	using Inch = xieite::units::Unit<"length", [](auto x) { return x * 0.0254; }, [](auto x) { return x / 0.0254; }>;
	using Foot = xieite::units::Unit<"length", [](auto x) { return x / 0.3048; }, [](auto x) { return x * 0.3048; }>;
	using Yard = xieite::units::Unit<"length", [](auto x) { return x * 0.9144; }, [](auto x) { return x / 0.9144; }>;
	using Chain = xieite::units::Unit<"length", [](auto x) { return x * 20.1168; }, [](auto x) { return x / 20.1168; }>;
	using Furlong = xieite::units::Unit<"length", [](auto x) { return x * 201.168; }, [](auto x) { return x / 201.168; }>;
	using Mile = xieite::units::Unit<"length", [](auto x) { return x * 1609.344; }, [](auto x) { return x / 1609.344; }>;
	using League = xieite::units::Unit<"length", [](auto x) { return x * 4828.032; }, [](auto x) { return x / 4828.032; }>;
	using Fathom = xieite::units::Unit<"length", [](auto x) { return x * 1.8288; }, [](auto x) { return x / 1.8288; }>;
	using Cable = xieite::units::Unit<"length", [](auto x) { return x * 185.2; }, [](auto x) { return x / 185.2; }>;
	using NauticalMile = xieite::units::Unit<"length", [](auto x) { return x * 1852.0; }, [](auto x) { return x / 1852.0; }>;
	using NauticalLeague = xieite::units::Unit<"length", [](auto x) { return x * 5556.0; }, [](auto x) { return x / 5556.0; }>;
	using Link = xieite::units::Unit<"length", [](auto x) { return x * 0.201168; }, [](auto x) { return x / 0.201168; }>;
	using Rod = xieite::units::Unit<"length", [](auto x) { return x * 5.0292; }, [](auto x) { return x / 5.0292; }>;
	using Perch = xieite::units::Rod;
	using Pole = xieite::units::Rod;
	using Lug = xieite::units::Rod;
}
