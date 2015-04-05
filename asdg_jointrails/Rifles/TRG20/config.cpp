class CfgPatches {
	class asdg_jointrails_tavor {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Rifles_TRG20","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_MuzzleSlot_556;
class asdg_OpticRail1913_short;
class asdg_FrontSideRail;

class CfgWeapons {

	class Rifle_Base_F;

	class Tavor_base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
	};

	class arifle_TRG21_F : Tavor_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : asdg_MuzzleSlot_556 {
				iconPosition[] = {0, 0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short {
				iconPosition[] = {0.45, 0.28};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.25, 0.4};
				iconScale = 0.25;
			};
		};
	};

	class arifle_TRG20_F : Tavor_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : asdg_MuzzleSlot_556 {
				iconPosition[] = {0.1, 0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913_short {
				iconPosition[] = {0.45, 0.28};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.25, 0.4};
				iconScale = 0.25;
			};
		};
	};

};
