class CfgPatches {
	class asdg_jointrails_m200 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Machineguns_M200","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_OpticRail1913_short;
class asdg_FrontSideRail;
class asdg_UnderSlot;

class CfgWeapons {

	class Rifle_Base_F;
	
	class Rifle_Long_Base_F : Rifle_Base_F {
		class WeaponSlotsInfo;
	};

	class LMG_Mk200_F: Rifle_Long_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class CowsSlot: asdg_OpticRail1913_short {
				iconPosition[] = {0.6, 0.45};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.35, 0.5};
				iconScale = 0.25;
			};
			class UnderBarrelSlot : asdg_UnderSlot {
				iconPosition[] = {0.35, 0.8};
				iconScale = 0.2;
			};
		};
	};

};
