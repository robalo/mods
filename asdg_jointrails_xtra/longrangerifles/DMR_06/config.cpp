class CfgPatches {
	class asdg_jointrails_xdmr06 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Mark_LongRangeRifles_DMR_06","asdg_jointrails_xtra"};
		author[] = {"Robalo"};
	};
};

class asdg_OpticRail1913;
class asdg_OpticRail1913_short: asdg_OpticRail1913 {
	class compatibleItems;
};

class CfgWeapons {

	class Rifle_Long_Base_F;

	class DMR_06_base_F : Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};

	class srifle_DMR_06_camo_F : DMR_06_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot : asdg_OpticRail1913_short {
				class compatibleItems: compatibleItems {
					optic_LRPS = 0;
					optic_MRCO = 0;
					optic_tws = 0;
					optic_tws_mg = 0;
				};
			};
		};
	};

};
