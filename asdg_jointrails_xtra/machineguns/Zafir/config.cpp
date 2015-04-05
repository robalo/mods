class CfgPatches {
	class asdg_jointrails_xzafir {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Machineguns_Zafir","asdg_jointrails_xtra"};
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

	class LMG_Zafir_F: Rifle_Long_Base_F {
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
					optic_SOS = 0;
					optic_tws = 0;
					optic_tws_mg = 0;
				};
			};
		};
	};

};
