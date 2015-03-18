class CfgPatches {
	class asdg_jointrails_xm200 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Machineguns_M200","asdg_jointrails_xtra"};
		author[] = {"Robalo"};
	};
};

class asdg_OpticRail1913;
class asdg_OpticRail1913_short: asdg_OpticRail1913 {
	class compatibleItems;
};

class CfgWeapons {

	class Rifle_Base_F;
	
	class Rifle_Long_Base_F : Rifle_Base_F {
		class WeaponSlotsInfo;
	};

	class LMG_Mk200_F: Rifle_Long_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class CowsSlot: asdg_OpticRail1913_short {
				class compatibleItems: compatibleItems {
					optic_AMS = 0;
					optic_AMS_khk = 0;
					optic_AMS_snd = 0;
					optic_KHS_blk = 0;
					optic_KHS_hex = 0;
					optic_KHS_old = 0;
					optic_KHS_tan = 0;
					optic_DMS = 0;
					optic_LRPS = 0;
					optic_tws = 0;
					optic_tws_mg = 0;
					optic_Nightstalker = 0;
					optic_NVS = 0;
					optic_SOS = 0;
					optic_MRCO = 0;
				};
			};
		};
	};

	class LMG_Mk200_MRCO_F : LMG_Mk200_F {
		class LinkedItems {
			class LinkedItemsOptic {
				item = "optic_ARCO";
			};
		};
	};

};
