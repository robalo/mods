class CfgPatches {
	class asdg_jointrails_ebr {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_EBR","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_MuzzleSlot_762;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;

class CfgWeapons {

	class Rifle_Long_Base_F;

	class EBR_base_F: Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};

	class srifle_EBR_F : EBR_base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot : asdg_MuzzleSlot_762 {
				iconPosition[] = {0.05, 0.38};
				iconScale = 0.2;
			};
			class CowsSlot : asdg_OpticRail1913 {
				iconPosition[] = {0.5, 0.3};
				iconScale = 0.2;
			};
			class PointerSlot : asdg_FrontSideRail {
				iconPosition[] = {0.35, 0.4};
				iconScale = 0.25;
			};
			class UnderBarrelSlot : asdg_UnderSlot {
				iconPosition[] = {0.3, 0.65};
				iconScale = 0.2;
			};
		};
	};

};
