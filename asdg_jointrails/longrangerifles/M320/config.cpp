class CfgPatches {
	class asdg_jointrails_lrr {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_LongRangeRifles_M320","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_OpticRail1913;

class CfgWeapons {

	class Rifle_Base_F;
	
	class Rifle_Long_Base_F : Rifle_Base_F {
		class WeaponSlotsInfo;
	};

	class LRR_base_F: Rifle_Long_Base_F {};

	class srifle_LRR_F : LRR_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.6, 0.35};
				iconScale = 0.2;
			};
		};
	};

};
