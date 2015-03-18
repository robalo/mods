class CfgPatches {
	class asdg_jointrails_mmg02 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Mark_Machineguns_MMG_02","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_MuzzleSlot_338;
class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;

class CfgWeapons {

	class Rifle_Long_Base_F;
	
	class MMG_02_base_F : Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};

	class MMG_02_camo_F : MMG_02_base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class MuzzleSlot : asdg_MuzzleSlot_338 {
				iconPosition[] = {0.06, 0.42};
				iconScale = 0.15;
			};
			class CowsSlot : asdg_OpticRail1913 {
				iconPosition[] = {0.62, 0.32};
				iconScale = 0.15;
			};
			class PointerSlot : asdg_FrontSideRail {
				iconPosition[] = {0.38, 0.42};
				iconScale = 0.2;
			};
			class UnderBarrelSlot : asdg_UnderSlot {
				iconPosition[] = {0.35, 0.85};
				iconScale = 0.3;
			};
		};
	};

};
