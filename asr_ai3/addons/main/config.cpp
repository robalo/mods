#include "script_component.hpp"

#include "CfgPatches.hpp"

PRELOAD_ADDONS;

#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

#include "CfgEventhandlers.hpp"

class CfgFunctions {
	class asr_ai3 {
		tag = "asr_ai3";
		class functions	{
			file = "\x\asr_ai3\addons\main\f";
			class preinit {
				preInit = 1; // 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
				//recompile = 1; // 1 to recompile the function upon mission start
			};
			class postinit {
				postInit = 1; // 1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
			};
		};
	};
};
