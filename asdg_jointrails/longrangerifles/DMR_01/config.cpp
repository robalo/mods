class CfgPatches {
	class asdg_jointrails_dmr01 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_EPA_LongRangeRifles_DMR_01","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;

class CfgWeapons {

	class Rifle_Long_Base_F;

	class DMR_01_base_F : Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};

	class srifle_DMR_01_F : DMR_01_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot : asdg_OpticRail1913 {
				iconPosition[] = {0.45, 0.38};
				iconScale = 0.2;
			};
			class PointerSlot : asdg_FrontSideRail {
				iconPosition[] = {0.35, 0.5};
				iconScale = 0.25;
			};
			class UnderBarrelSlot : asdg_UnderSlot {
				iconPosition[] = {0.4, 0.7};
				iconScale = 0.2;
			};
		};
	};

};
