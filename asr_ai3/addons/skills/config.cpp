#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
        ammo[] = {};
        addonRootClass = "A3_Characters_F";
		requiredAddons[] = {QUOTE(MAIN_ADDON)};
		requiredVersion = REQUIRED_VERSION;
		versionDesc = "ASR AI3";
		versionAct = "";
		VERSION_CONFIG;
        author = "Robalo";
	};
};

PRELOAD_ADDONS;

class Extended_PreInit_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_preInit));
};

class Extended_PostInit_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_postInit));
};

class Extended_InitPost_EventHandlers {
	class SoldierWB {
		class ADDON {
            serverInit = QUOTE((GVAR(cfgQ)) pushBack (_this select 0));
		};
	};
	class SoldierEB {
		class ADDON {
            serverInit = QUOTE((GVAR(cfgQ)) pushBack (_this select 0));
		};
	};
	class SoldierGB {
		class ADDON {
            serverInit = QUOTE((GVAR(cfgQ)) pushBack (_this select 0));
		};
	};
};

class Extended_Local_EventHandlers {
	class SoldierWB {
		class ADDON {
			local = QUOTE(_this call FUNC(handleLocal));
		};
	};
	class SoldierEB {
		class ADDON {
			local = QUOTE(_this call FUNC(handleLocal));
		};
	};
	class SoldierGB {
		class ADDON {
			local = QUOTE(_this call FUNC(handleLocal));
		};
	};
};

class Extended_Take_EventHandlers {
	class SoldierWB {
		ADDON = QUOTE(_this call FUNC(setUnitCamo));
	};
	class SoldierEB {
		ADDON = QUOTE(_this call FUNC(setUnitCamo));
	};
	class SoldierGB {
		ADDON = QUOTE(_this call FUNC(setUnitCamo));
	};
};
class Extended_Put_EventHandlers {
	class SoldierWB {
		ADDON = QUOTE(_this call FUNC(setUnitCamo));
	};
	class SoldierEB {
		ADDON = QUOTE(_this call FUNC(setUnitCamo));
	};
	class SoldierGB {
		ADDON = QUOTE(_this call FUNC(setUnitCamo));
	};
};

/*
aimingAccuracy
Affects how well the AI can lead a target
Affects how accurately the AI estimate range and calculates bullet drop
Affects how well the AI compensates for weapon dispersion
Affects how much the AI will know to compensate for recoil (Higher value = more controlled fire)
Affects how certain the AI must be about its aim on target before opening fire
aimingShake
Affects how steadily the AI can hold a weapon (Higher value = less weapon sway)
aimingSpeed
Affects how quickly the AI can rotate and stabilize its aim (Higher value = faster, less error)
commanding
Affects how quickly recognized targets are shared with the group (Higher value = faster reporting)
courage
Affects unit's subordinates' morale (Higher value = more courage)
endurance
Disabled in Arma3

general
Raw "Skill", value is distributed to sub-skills unless defined otherwise. Affects the AI's decision making.
reloadSpeed
Affects the delay between switching or reloading a weapon (Higher value = less delay)
spotDistance
Affects the AI ability to spot targets within it's visual or audible range (Higher value = more likely to spot)
Affects the accuracy of the information (Higher value = more accurate information)
spotTime
Affects how quick the AI react to death, damage or observing an enemy (Higher value = quicker reaction)
*/

class CfgAISkill {
    aimingAccuracy[] = {0, 0.1, 0.8, 0.7, 1, 1}; //aimingAccuracy[] = {0, 0, 1, 1};
       aimingShake[] = {0, 0.1, 0.8, 0.4, 1, 1}; //   aimingShake[] = {0, 0, 1, 1};
       aimingSpeed[] = {0, 0.1, 0.8, 0.6, 1, 1}; //   aimingSpeed[] = {0, 0.5, 1, 1};
      spotDistance[] = {0, 0.1, 0.8, 0.3, 1, 1}; //  spotDistance[] = {0, 0, 1, 1};
          spotTime[] = {0, 0.1, 0.8, 0.4, 1, 1}; //      spotTime[] = {0, 0, 1, 1};
};

class CfgWeapons {
#include "c_uniforms.hpp"
#include "c_vests.hpp"
};

class CfgVehicles {
#include "c_backpacks.hpp"
#include "c_soldiers.hpp"
};
