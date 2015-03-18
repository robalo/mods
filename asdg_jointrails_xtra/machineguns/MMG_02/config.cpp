class CfgPatches {
	class asdg_jointrails_xmmg02 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Mark_Machineguns_MMG_02","asdg_jointrails_xtra"};
		author[] = {"Robalo"};
	};
};

class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
	class compatibleItems;
};

class CfgWeapons {

	class Rifle_Long_Base_F;
	
	class MMG_02_base_F : Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};

	class MMG_02_camo_F : MMG_02_base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems: compatibleItems {
					optic_tws = 0;
					optic_tws_mg = 0;
					optic_Nightstalker = 0;
					optic_NVS = 0;
					optic_SOS = 0;
					optic_MRCO = 0;
					optic_DMS = 0;
					optic_LRPS = 0;
					optic_AMS = 0;
					optic_AMS_khk = 0;
					optic_AMS_snd = 0;
					optic_KHS_blk = 0;
					optic_KHS_hex = 0;
					optic_KHS_old = 0;
					optic_KHS_tan = 0;
				};
			};
		};
	};

};
