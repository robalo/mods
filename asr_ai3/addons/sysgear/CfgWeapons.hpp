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

class CfgWeapons {
	
	class ItemCore;
	class InventoryOpticsItem_Base_F;

	class optic_NVS : ItemCore {
		class ItemInfo : InventoryOpticsItem_Base_F {
			opticType = 1;
		};
	};
	class optic_tws : ItemCore {
		class ItemInfo : InventoryOpticsItem_Base_F {
			opticType = 1;
		};
	};
	class optic_tws_mg : ItemCore {
		class ItemInfo : InventoryOpticsItem_Base_F {
			opticType = 1;
		};
	};

	class optic_Arco : ItemCore {
		class ItemInfo;
		asr_ai_variants[] = {"optic_Arco","ASR_optic_Arco_AI_N"};
	};
	class ASR_optic_Arco_AI_N : optic_Arco {
		scope = 1;
		class ItemInfo : ItemInfo {
			opticType = 0;
		};
	};
	
	class optic_Hamr : ItemCore {
		class ItemInfo;
		asr_ai_variants[] = {"optic_Hamr","ASR_optic_Hamr_AI_N"};
	};
	class ASR_optic_Hamr_AI_N : optic_Hamr {
		scope = 1;
		class ItemInfo : ItemInfo {
			opticType = 0;
		};
	};
	
	class optic_SOS : ItemCore {
		class ItemInfo;
		asr_ai_variants[] = {"optic_SOS","ASR_optic_SOS_AI_N"};
	};
	class ASR_optic_SOS_AI_N : optic_SOS {
		scope = 1;
		class ItemInfo : ItemInfo {
			opticType = 0;
		};
	};
	
	class optic_MRCO : ItemCore {
		class ItemInfo;
		asr_ai_variants[] = {"optic_MRCO","ASR_optic_MRCO_AI_N"};
	};
	class ASR_optic_MRCO_AI_N : optic_MRCO {
		scope = 1;
		class ItemInfo : ItemInfo {
			opticType = 0;
		};
	};
	
	class optic_DMS : ItemCore {
		class ItemInfo;
		asr_ai_variants[] = {"optic_DMS","ASR_optic_DMS_AI_N"};
	};
	class ASR_optic_DMS_AI_N : optic_DMS {
		scope = 1;
		class ItemInfo : ItemInfo {
			opticType = 0;
		};
	};
	
	class optic_LRPS : ItemCore {
		class ItemInfo;
		asr_ai_variants[] = {"optic_LRPS","ASR_optic_LRPS_AI_N"};
	};
	class ASR_optic_LRPS_AI_N : optic_LRPS {
		scope = 1;
		class ItemInfo : ItemInfo {
			opticType = 0;
		};
	};

};
