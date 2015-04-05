class CfgPatches {
	class asdg_jointrails_kriss {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Rifles_Vector","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_MuzzleSlot_45ACP_SMG;
class asdg_OpticRail1913;

class CfgWeapons {

	class Rifle_Base_F;

	class SMG_01_Base: Rifle_Base_F {
		class WeaponSlotsInfo;
	};

	class SMG_01_F : SMG_01_Base {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : asdg_MuzzleSlot_45ACP_SMG {
				iconPosition[] = {0.1, 0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.4, 0.3};
				iconScale = 0.2;
			};
		};
	};

};
