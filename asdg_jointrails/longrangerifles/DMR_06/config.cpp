class CfgPatches {
	class asdg_jointrails_dmr06 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Mark_LongRangeRifles_DMR_06","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_MuzzleSlot_762;
class asdg_OpticRail1913_short;
class asdg_UnderSlot;

class CfgWeapons {

	class Rifle_Long_Base_F;

	class DMR_06_base_F : Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};

	class srifle_DMR_06_camo_F : DMR_06_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : asdg_MuzzleSlot_762 {
				iconPosition[] = {0.06, 0.4};
				iconScale = 0.15;
			};
			class CowsSlot : asdg_OpticRail1913_short {
				iconPosition[] = {0.52, 0.36};
				iconScale = 0.15;
			};
			class UnderBarrelSlot : asdg_UnderSlot {
				iconPosition[] = {0.32, 0.8};
				iconScale = 0.3;
			};
		};
	};

};
