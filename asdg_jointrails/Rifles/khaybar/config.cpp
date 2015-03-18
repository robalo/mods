class CfgPatches {
	class asdg_jointrails_katiba {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Rifles_Khaybar","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_OpticRail1913;
class asdg_FrontSideRail;

class CfgWeapons {

	class Rifle_Base_F;

	class arifle_Katiba_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
	};

	class arifle_Katiba_F : arifle_Katiba_Base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.45, 0.28};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.35, 0.45};
				iconScale = 0.2;
			};
		};
	};

	class arifle_Katiba_C_F : arifle_Katiba_Base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.45, 0.28};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.35, 0.45};
				iconScale = 0.2;
			};
		};
	};

	class arifle_Katiba_GL_F : arifle_Katiba_Base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.45, 0.28};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.35, 0.45};
				iconScale = 0.2;
			};
		};
	};

};
