class CfgPatches {
	class asdg_jointrails_mx {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Rifles_MX","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;

class CfgWeapons {

	class Rifle_Base_F;

	class arifle_MX_Base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
	};

	class arifle_MXC_F : arifle_MX_Base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.5, 0.3};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.2, 0.4};
				iconScale = 0.25;
			};
		};
	};

	class arifle_MX_F : arifle_MX_Base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.5, 0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.2, 0.45};
				iconScale = 0.25;
			};
			class UnderBarrelSlot : asdg_UnderSlot {
				iconPosition[] = {0.2, 0.7};
				iconScale = 0.2;
			};
		};
	};

	class arifle_MX_GL_F : arifle_MX_Base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.5, 0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.2, 0.45};
				iconScale = 0.25;
			};
		};
	};

	class arifle_MX_SW_F : arifle_MX_Base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.5, 0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.2, 0.45};
				iconScale = 0.25;
			};
			class UnderBarrelSlot : asdg_UnderSlot {
				iconPosition[] = {0.2, 0.7};
				iconScale = 0.2;
			};
		};
	};

	class arifle_MXM_F : arifle_MX_Base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.5, 0.35};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.2, 0.45};
				iconScale = 0.25;
			};
			class UnderBarrelSlot : asdg_UnderSlot {
				iconPosition[] = {0.2, 0.7};
				iconScale = 0.2;
			};
		};
	};
};
