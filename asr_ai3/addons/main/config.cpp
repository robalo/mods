#include "script_component.hpp"

#include "CfgPatches.hpp"

PRELOAD_ADDONS;

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
