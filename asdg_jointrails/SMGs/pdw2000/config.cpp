class CfgPatches {
	class asdg_jointrails_pdw2k {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Pistols_PDW2000","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_MuzzleSlot_9MM;
class asdg_OpticRail1913;

class CfgWeapons {

	class Rifle_Base_F;

	class pdw2000_base_F: Rifle_Base_F {
		class WeaponSlotsInfo;
	};

	class hgun_PDW2000_F : pdw2000_base_F {
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot : asdg_MuzzleSlot_9MM {
				iconPosition[] = {0.0, 0.45};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913 {
				iconPosition[] = {0.5, 0.4};
				iconScale = 0.15;
			};
		};
	};

};
