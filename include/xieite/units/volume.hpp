#pragma once

#include "../units/unit.hpp"

namespace xieite::units {
	using CubicQuectometer = xieite::units::Unit<"volume", [](auto x) { return x / 1e90; }, [](auto x) { return x * 1e90; }>;
	using CubicRontometer = xieite::units::Unit<"volume", [](auto x) { return x / 1e81; }, [](auto x) { return x * 1e81; }>;
	using CubicYoctometer = xieite::units::Unit<"volume", [](auto x) { return x / 1e72; }, [](auto x) { return x * 1e72; }>;
	using CubicZeptometer = xieite::units::Unit<"volume", [](auto x) { return x / 1e63; }, [](auto x) { return x * 1e63; }>;
	using CubicAttometer = xieite::units::Unit<"volume", [](auto x) { return x / 1e54; }, [](auto x) { return x * 1e54; }>;
	using CubicFemtometer = xieite::units::Unit<"volume", [](auto x) { return x / 1e45; }, [](auto x) { return x * 1e45; }>;
	using CubicPicometer = xieite::units::Unit<"volume", [](auto x) { return x / 1e36; }, [](auto x) { return x * 1e36; }>;
	using CubicNanometer = xieite::units::Unit<"volume", [](auto x) { return x / 1e27; }, [](auto x) { return x * 1e27; }>;
	using CubicMicrometer = xieite::units::Unit<"volume", [](auto x) { return x / 1e18; }, [](auto x) { return x * 1e18; }>;
	using CubicMillimeter = xieite::units::Unit<"volume", [](auto x) { return x / 1e9; }, [](auto x) { return x * 1e9; }>;
	using CubicCentimeter = xieite::units::Unit<"volume", [](auto x) { return x / 1e6; }, [](auto x) { return x * 1e6; }>;
	using CubicDecimeter = xieite::units::Unit<"volume", [](auto x) { return x / 1e3; }, [](auto x) { return x * 1e3; }>;
	using CubicMeter = xieite::units::Unit<"volume">;
	using CubicDecameter = xieite::units::Unit<"volume", [](auto x) { return x * 1e3; }, [](auto x) { return x / 1e3; }>;
	using CubicHectometer = xieite::units::Unit<"volume", [](auto x) { return x * 1e6; }, [](auto x) { return x / 1e6; }>;
	using CubicKilometer = xieite::units::Unit<"volume", [](auto x) { return x * 1e9; }, [](auto x) { return x / 1e9; }>;
	using CubicMegameter = xieite::units::Unit<"volume", [](auto x) { return x * 1e18; }, [](auto x) { return x / 1e18; }>;
	using CubicGigameter = xieite::units::Unit<"volume", [](auto x) { return x * 1e27; }, [](auto x) { return x / 1e27; }>;
	using CubicTerameter = xieite::units::Unit<"volume", [](auto x) { return x * 1e36; }, [](auto x) { return x / 1e36; }>;
	using CubicPetameter = xieite::units::Unit<"volume", [](auto x) { return x * 1e45; }, [](auto x) { return x / 1e45; }>;
	using CubicExameter = xieite::units::Unit<"volume", [](auto x) { return x * 1e54; }, [](auto x) { return x / 1e54; }>;
	using CubicZettameter = xieite::units::Unit<"volume", [](auto x) { return x * 1e63; }, [](auto x) { return x / 1e63; }>;
	using CubicYottameter = xieite::units::Unit<"volume", [](auto x) { return x * 1e72; }, [](auto x) { return x / 1e72; }>;
	using CubicRonnameter = xieite::units::Unit<"volume", [](auto x) { return x * 1e81; }, [](auto x) { return x / 1e81; }>;
	using CubicQuettameter = xieite::units::Unit<"volume", [](auto x) { return x * 1e90; }, [](auto x) { return x / 1e90; }>;
	using CubicInch = xieite::units::Unit<"volume", [](auto x) { return x / 61023.744095; }, [](auto x) { return x * 61023.744095; }>;
	using CubicFoot = xieite::units::Unit<"volume", [](auto x) { return x / 35.314666721; }, [](auto x) { return x * 35.314666721; }>;
	using CubicYard = xieite::units::Unit<"volume", [](auto x) { return x / 1.3079506193; }, [](auto x) { return x * 1.3079506193; }>;
	using CubicMile = xieite::units::Unit<"volume", [](auto x) { return x / 4168181825.440579584; }, [](auto x) { return x * 4168181825.440579584; }>;
	using Quectoliter = xieite::units::Unit<"volume", [](auto x) { return x / 1e33; }, [](auto x) { return x * 1e33; }>;
	using Rontoliter = xieite::units::Unit<"volume", [](auto x) { return x / 1e30; }, [](auto x) { return x * 1e30; }>;
	using Yoctoliter = xieite::units::Unit<"volume", [](auto x) { return x / 1e27; }, [](auto x) { return x * 1e27; }>;
	using Zeptoliter = xieite::units::Unit<"volume", [](auto x) { return x / 1e24; }, [](auto x) { return x * 1e24; }>;
	using Attoliter = xieite::units::Unit<"volume", [](auto x) { return x / 1e21; }, [](auto x) { return x * 1e21; }>;
	using Femtoliter = xieite::units::Unit<"volume", [](auto x) { return x / 1e18; }, [](auto x) { return x * 1e18; }>;
	using Picoliter = xieite::units::Unit<"volume", [](auto x) { return x / 1e15; }, [](auto x) { return x * 1e15; }>;
	using Nanoliter = xieite::units::Unit<"volume", [](auto x) { return x / 1e12; }, [](auto x) { return x * 1e12; }>;
	using Microliter = xieite::units::Unit<"volume", [](auto x) { return x / 1e9; }, [](auto x) { return x * 1e9; }>;
	using Milliliter = xieite::units::Unit<"volume", [](auto x) { return x / 1e6; }, [](auto x) { return x * 1e6; }>;
	using Centiliter = xieite::units::Unit<"volume", [](auto x) { return x / 1e5; }, [](auto x) { return x * 1e5; }>;
	using Deciliter = xieite::units::Unit<"volume", [](auto x) { return x / 1e4; }, [](auto x) { return x * 1e4; }>;
	using Liter = xieite::units::Unit<"volume", [](auto x) { return x / 1e3; }, [](auto x) { return x * 1e3; }>;
	using Decaliter = xieite::units::Unit<"volume", [](auto x) { return x / 1e2; }, [](auto x) { return x * 1e2; }>;
	using Hectoliter = xieite::units::Unit<"volume", [](auto x) { return x / 1e1; }, [](auto x) { return x * 1e1; }>;
	using Kiloliter = xieite::units::CubicMeter;
	using Megaliter = xieite::units::Unit<"volume", [](auto x) { return x * 1e3; }, [](auto x) { return x / 1e3; }>;
	using Gigaliter = xieite::units::Unit<"volume", [](auto x) { return x * 1e6; }, [](auto x) { return x / 1e6; }>;
	using Teraliter = xieite::units::Unit<"volume", [](auto x) { return x * 1e9; }, [](auto x) { return x / 1e9; }>;
	using Petaliter = xieite::units::Unit<"volume", [](auto x) { return x * 1e12; }, [](auto x) { return x / 1e12; }>;
	using Exaliter = xieite::units::Unit<"volume", [](auto x) { return x * 1e15; }, [](auto x) { return x / 1e15; }>;
	using Zettaliter = xieite::units::Unit<"volume", [](auto x) { return x * 1e18; }, [](auto x) { return x / 1e18; }>;
	using Yottaliter = xieite::units::Unit<"volume", [](auto x) { return x * 1e21; }, [](auto x) { return x / 1e21; }>;
	using Ronnaliter = xieite::units::Unit<"volume", [](auto x) { return x * 1e24; }, [](auto x) { return x / 1e24; }>;
	using Quettaliter = xieite::units::Unit<"volume", [](auto x) { return x * 1e27; }, [](auto x) { return x / 1e27; }>;
	using FluidOunce = xieite::units::Unit<"volume", [](auto x) { return x / 33814.022702; }, [](auto x) { return x * 33814.022702; }>;
	using Gill = xieite::units::Unit<"volume", [](auto x) { return x / 7039.0159455708; }, [](auto x) { return x * 7039.0159455708; }>;
	using Cup = xieite::units::Unit<"volume", [](auto x) { return x / 3519.5079727854; }, [](auto x) { return x * 3519.5079727854; }>;
	using Pint = xieite::units::Unit<"volume", [](auto x) { return x / 1759.7539863927; }, [](auto x) { return x * 1759.7539863927; }>;
	using Quart = xieite::units::Unit<"volume", [](auto x) { return x / 879.87699319635; }, [](auto x) { return x * 879.87699319635; }>;
	using Gallon = xieite::units::Unit<"volume", [](auto x) { return x / 219.9691574; }, [](auto x) { return x * 219.9691574; }>;
}