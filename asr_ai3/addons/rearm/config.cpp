#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {QUOTE(MAIN_ADDON)};
		version = VERSION;
		author[] = {"Robalo"};
	};
};

class CfgFunctions {
	class asr_ai3_rearm {
		tag = "asr_ai3_rearm";
		class functions	{
			file = "\x\asr_ai3\addons\rearm\f";
			class preinit {
				preInit = 1; // 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
			};
			class postinit {
				postInit = 1; // 1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
			};
		};
	};
};
