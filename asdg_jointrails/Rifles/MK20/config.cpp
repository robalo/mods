class CfgPatches {
	class asdg_jointrails_mk20 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Rifles_Mk20","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_OpticRail1913;
class asdg_FrontSideRail;

class CfgWeapons {

	class Rifle_Base_F;

	class mk20_base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
	};

	class arifle_Mk20_F : mk20_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.45, 0.25};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.35, 0.35};
				iconScale = 0.25;
			};
		};
	};

	class arifle_Mk20C_F : mk20_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.35, 0.35};
				iconScale = 0.25;
			};
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.45, 0.25};
				iconScale = 0.2;
			};
		};
	};

	class arifle_Mk20_GL_F : mk20_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.35, 0.35};
				iconScale = 0.25;
			};
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.45, 0.25};
				iconScale = 0.2;
			};
		};
	};

};
