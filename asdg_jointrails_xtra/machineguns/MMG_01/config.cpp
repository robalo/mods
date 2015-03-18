class CfgPatches {
	class asdg_jointrails_xmmg01 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Mark_Machineguns_MMG_01","asdg_jointrails_xtra"};
		author[] = {"Robalo"};
	};
};

class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
	class compatibleItems;
};

class CfgWeapons {

	class Rifle_Long_Base_F;
	
	class MMG_01_base_F : Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};

	class MMG_01_hex_F : MMG_01_base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems: compatibleItems {
					optic_LRPS = 0;
				};
			};
		};
	};

};
