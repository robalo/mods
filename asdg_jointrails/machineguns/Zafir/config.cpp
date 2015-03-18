class CfgPatches {
	class asdg_jointrails_zafir {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Machineguns_Zafir","asdg_jointrails"};
		author[] = {"Robalo"};
	};
};

class asdg_OpticRail1913_short;
class asdg_FrontSideRail;

class CfgWeapons {

	class Rifle_Base_F;
	
	class Rifle_Long_Base_F : Rifle_Base_F {
		class WeaponSlotsInfo;
	};

	class LMG_Zafir_F: Rifle_Long_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			class CowsSlot: asdg_OpticRail1913_short {
				iconPosition[] = {0.6, 0.35};
				iconScale = 0.15;
			};
			class PointerSlot: asdg_FrontSideRail {
				iconPosition[] = {0.4, 0.4};
				iconScale = 0.15;
			};
		};
	};

};
