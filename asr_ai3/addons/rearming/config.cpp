#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredAddons[] = {QUOTE(MAIN_ADDON)};
		requiredVersion = REQUIRED_VERSION;
		versionDesc = "ASR AI3";
		versionAct = "";
		VERSION_CONFIG;
        author = "Robalo";
	};
};

class Extended_PreStart_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_preStart));
};

class Extended_PreInit_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_preInit));
};

class Extended_PostInit_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_postInit));
};

class Extended_InventoryClosed_EventHandlers {
	class SoldierWB {
		ADDON = QUOTE(_this call FUNC(inventoryClosed));
	};
	class SoldierEB {
		ADDON = QUOTE(_this call FUNC(inventoryClosed));
	};
	class SoldierGB {
		ADDON = QUOTE(_this call FUNC(inventoryClosed));
	};
};
