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

class Extended_Hit_EventHandlers {
	class SoldierWB {
		class ADDON {
			hit = QUOTE(_this call FUNC(handleHit));
		};
	};
	class SoldierEB {
		class ADDON {
			hit = QUOTE(_this call FUNC(handleHit));
		};
	};
	class SoldierGB {
		class ADDON {
			hit = QUOTE(_this call FUNC(handleHit));
		};
	};
    class StaticWeapon {
		class ADDON {
			hit = QUOTE(_this call FUNC(handleHit));
		};
	};
	class LandVehicle
	{
		class ADDON
		{
			hit=QUOTE(_this call FUNC(handleHitVehicle));
		};
	};
};

class Extended_Explosion_EventHandlers {
	class SoldierWB {
		class ADDON {
			explosion = QUOTE(_this call FUNC(handleExplosion));
		};
	};
	class SoldierEB {
		class ADDON {
			explosion = QUOTE(_this call FUNC(handleExplosion));
		};
	};
	class SoldierGB {
		class ADDON {
			explosion = QUOTE(_this call FUNC(handleExplosion));
		};
	};
	class StaticWeapon {
		class ADDON {
			explosion = QUOTE(_this call FUNC(handleExplosion));
		};
	};
};

class Extended_InitPost_EventHandlers {
	class SoldierWB {
		class ADDON {
            serverInit = QUOTE(_this call FUNC(addHandleDamage));
		};
	};
	class SoldierEB {
		class ADDON {
            serverInit = QUOTE(_this call FUNC(addHandleDamage));
		};
	};
	class SoldierGB {
		class ADDON {
            serverInit = QUOTE(_this call FUNC(addHandleDamage));
		};
	};
	class LandVehicle {
		class ADDON {
            serverInit = QUOTE((_this select 0) call FUNC(vehicleSetup));
		};
	};
};
