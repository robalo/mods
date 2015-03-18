class CfgPatches {
	class asdg_jointrails_gm6 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_LongRangeRifles_GM6","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_OpticRail1913;

class CfgWeapons {

	class Rifle_Base_F;
	
	class Rifle_Long_Base_F : Rifle_Base_F {
		class WeaponSlotsInfo;
	};

	class GM6_base_F: Rifle_Long_Base_F {};

	class srifle_GM6_F : GM6_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.55, 0.3};
				iconScale = 0.2;
			};
		};
	};

};
