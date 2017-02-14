#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        ammo[] = {};
        requiredAddons[] = {"CBA_MAIN",QUOTE(MAIN_ADDON)};
        requiredVersion = REQUIRED_VERSION;
        author = "Rydygier";
    };
};

class Extended_PreInit_EventHandlers {
	class ADDON {
        clientInit = QUOTE(call COMPILE_FILE(XEH_preInitClient));
    };
};

class Extended_PostInit_EventHandlers {
	class ADDON {
        clientInit = QUOTE(call COMPILE_FILE(XEH_postInitClient));
    };
};
