#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {
			QUOTE(MAIN_ADDON),
            "rhs_c_troops","rhs_c_weapons","rhs_cti_insurgents",
			"rhsusf_c_troops","rhsusf_c_weapons",
			"rhsgref_c_troops","rhsgref_c_weapons",
			"rhssaf_c_troops","rhssaf_c_weapons",
            "RHS_c_radio","rhsgref_c_radio"
		};
		version = VERSION;
		author = "Robalo";
	};
    class asr_ai3_rhs_us_c {
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {};
		author = "Robalo";
	};
    class asr_ai3_rhs_ru_c {
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {};
		author = "Robalo";
	};
    class asr_ai3_rhs_gr_c {
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {};
		author = "Robalo";
	};
    class asr_ai3_rhs_saf_c {
		units[] = {};
		weapons[] = {};
        ammo[] = {};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {};
		author = "Robalo";
	};
};

PRELOAD_ADDONS;

#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

class RadioProtocolBase;
class RadioProtocolBaseRUS: RadioProtocolBase {
    class CombatShout;
};
class RadioProtocolRUS: RadioProtocolBaseRUS {
	class SentCovering: CombatShout {
		versions[] = {"Version1",0.14,"Version2",0.14,"Version3",0.14,"Version4",0.14,"Version5",0.14,"Version6",0.14,"Version7",0.14};
    };
	class SentCoverMe: CombatShout {
		versions[] = {"Version1",0.2,"Version2",0.2,"Version3",0.2,"Version4",0.2,"Version5",0.2};
    };
};

class RadioProtocolBaseCZ: RadioProtocolBase {
    class CombatShout;
};
class RadioProtocolCZ: RadioProtocolBaseCZ {
	class SentCovering: CombatShout {
		versions[] = {"Version1",0.14,"Version2",0.14,"Version3",0.14,"Version4",0.14,"Version5",0.14,"Version6",0.14,"Version7",0.14};
    };
	class SentCoverMe: CombatShout {
		versions[] = {"Version1",0.2,"Version2",0.2,"Version3",0.2,"Version4",0.2,"Version5",0.2};
    };
};
