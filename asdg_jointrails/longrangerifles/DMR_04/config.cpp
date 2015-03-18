class CfgPatches {
	class asdg_jointrails_dmr04 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Mark_LongRangeRifles_DMR_04","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_OpticRail1913;
class asdg_FrontSideRail;
class asdg_UnderSlot;

class CfgWeapons {

	class Rifle_Long_Base_F;

	class DMR_04_base_F : Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};

	class srifle_DMR_04_F : DMR_04_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot : asdg_OpticRail1913 {
				iconPosition[] = {0.52, 0.38};
				iconScale = 0.15;
			};
			class PointerSlot : asdg_FrontSideRail {
				iconPosition[] = {0.3, 0.43};
				iconScale = 0.2;
			};
			class UnderBarrelSlot : asdg_UnderSlot {
				iconPosition[] = {0.3, 0.7};
				iconScale = 0.2;
			};
		};
	};

};
