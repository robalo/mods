class CfgPatches {
	class asdg_jointrails_xebr {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_EBR","asdg_jointrails_xtra"};
		author[] = {"Robalo"};
	};
};

class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
	class compatibleItems;
};

class CfgWeapons {

	class Rifle_Long_Base_F;

	class EBR_base_F: Rifle_Long_Base_F {
		class WeaponSlotsInfo;
	};

	class srifle_EBR_F : EBR_base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class CowsSlot : asdg_OpticRail1913 {
				class compatibleItems: compatibleItems {
					optic_Nightstalker = 0;
					optic_NVS = 0;
				};
			};
		};
	};

};
