class CfgPatches {
	class asdg_jointrails_dmr03 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Mark_LongRangeRifles_DMR_03","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_MuzzleSlot_762;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;

class CfgWeapons {

	class Rifle_Long_Base_F;

	class DMR_03_base_F : Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};

	class srifle_DMR_03_F : DMR_03_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : asdg_MuzzleSlot_762 {
				iconPosition[] = {0.12, 0.431};
				iconScale = 0.15;
			};
			class CowsSlot : asdg_OpticRail1913 {
				iconPosition[] = {0.5, 0.36};
				iconScale = 0.15;
			};
			class PointerSlot : asdg_FrontSideRail {
				iconPosition[] = {0.33, 0.4};
				iconScale = 0.2;
			};
			class UnderBarrelSlot : asdg_UnderSlot {
				iconPosition[] = {0.3, 0.8};
				iconScale = 0.3;
			};
		};
	};

};
