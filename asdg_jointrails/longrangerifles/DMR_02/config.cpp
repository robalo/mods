class CfgPatches {
	class asdg_jointrails_dmr02 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Mark_LongRangeRifles_DMR_02","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_MuzzleSlot_338;
class asdg_OpticRail1913_long;
class asdg_FrontSideRail;
class asdg_UnderSlot;

class CfgWeapons {

	class Rifle_Long_Base_F;

	class DMR_02_base_F : Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};

	class srifle_DMR_02_F : DMR_02_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : asdg_MuzzleSlot_338 {
				iconPosition[] = {0, 0.4};
				iconScale = 0.2;
			};
			class CowsSlot : asdg_OpticRail1913_long {
				iconPosition[] = {0.5, 0.36};
				iconScale = 0.2;
			};
			class PointerSlot : asdg_FrontSideRail {
				iconPosition[] = {0.22, 0.42};
				iconScale = 0.25;
			};
			class UnderBarrelSlot : asdg_UnderSlot {
				iconPosition[] = {0.2, 0.8};
				iconScale = 0.3;
			};
		};
	};

};
