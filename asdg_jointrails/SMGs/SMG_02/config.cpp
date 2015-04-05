class CfgPatches {
	class asdg_jointrails_evo {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"a3_weapons_f_rifles_SMG_02","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_MuzzleSlot_9MM_SMG;
class asdg_OpticRail1913;
class asdg_FrontSideRail;

class CfgWeapons {

	class Rifle_Base_F;

	class SMG_02_base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
	};

	class SMG_02_F : SMG_02_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : asdg_MuzzleSlot_9MM_SMG {
				iconPosition[] = {0.08, 0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.45, 0.27};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.28, 0.4};
				iconScale = 0.25;
			};
		};
	};

};
