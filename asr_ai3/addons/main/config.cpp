#include "script_component.hpp"

#include "CfgPatches.hpp"

PRELOAD_ADDONS;

// lower some skills while maintaining an option for top skilled units (reduce skills for 0 - 0.8, but keep them very high for 0.8 - 1).
class CfgAISkill {
//	aimingAccuracy[] = {0, 0.1, 0.8, 0.7, 1, 1};
//	aimingShake[]    = {0, 0.1, 0.8, 0.7, 1, 1};
//	aimingSpeed[]    = {0, 0.3, 1, 1};
	commanding[]     = {0, 0.1, 0.8, 0.6, 1, 1};
//	spotDistance[]   = {0, 0.1, 0.5, 0.2, 1, 0.4};
//	spotTime[]       = {0, 0.1, 0.8, 0.6, 1, 0.7};
};

#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"

#include "CfgEventhandlers.hpp"

class asdg_SlotInfo {
	linkProxy = "defaultProxy";
};
class asdg_OpticRail: asdg_SlotInfo {
	linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
	displayName = "$STR_A3_CowsSlot0";
};
class asdg_OpticRail1913: asdg_OpticRail {
	class compatibleItems {
		ASR_optic_Arco_AI_N = 1;
		ASR_optic_Hamr_AI_N = 1;
		ASR_optic_SOS_AI_N = 1;
		ASR_optic_MRCO_AI_N = 1;

		ASR_optic_DMS_AI_N = 1;
		ASR_optic_LRPS_AI_N = 1;
	};
};
class asdg_OpticRail1913_short: asdg_OpticRail1913 {
	class compatibleItems: compatibleItems {
		ASR_optic_DMS_AI_N = 0;
		ASR_optic_LRPS_AI_N = 0;
	};
};
