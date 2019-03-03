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

class Extended_PreInit_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_preInit));
};
class Extended_PostInit_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_postInit));
};
/*
class Extended_InventoryClosed_EventHandlers {
	class CAManBase {
		ADDON = QUOTE(_this call FUNC(inventoryClosed));
	};
};
*/

//move gear actions before the take actions which can clutter the action menu a lot
class CfgActions {
    class None;
    class Gear : None {
        priority = 5.6;
    };
    class GearOpen : None {
        priority = 5.5;
    };
/*
    class IRLaserOn : None {
        show = 1;
        priority = 5.4;
    };
    class IRLaserOff : None {
        show = 1;
        priority = 5.4;
    };
    class GunLightOn : None {
        show = 1;
        priority = 5.4;
    };
    class GunLightOff : None {
        show = 1;
        priority = 5.4;
    };
*/
};
