class CfgPatches {
	class asdg_jointrails_xacc {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.43;
		requiredAddons[] = {"A3_Weapons_F_Acc","A3_Weapons_F_Mark_Acc","asdg_jointrails_xtra"};
		author[] = {"Robalo"};
	};
};

class CfgWeapons {

#define __SUPP_COEF \
			class MagazineCoef { \
				initSpeed = 1.005; \
			}; \
			class MuzzleCoef { \
				dispersionCoef = "1.1f"; \
				recoilCoef = "0.9f"; \
				recoilProneCoef = "0.9f"; \
			}

	class ItemCore;
	class InventoryMuzzleItem_Base_F;

	class muzzle_snds_H: ItemCore {
		class ItemInfo: InventoryMuzzleItem_Base_F {
			__SUPP_COEF;
		};
	};
	class muzzle_snds_L : muzzle_snds_H {
		class ItemInfo: ItemInfo {
			__SUPP_COEF;
		};
	};
	class muzzle_snds_M: muzzle_snds_H {
		class ItemInfo: ItemInfo {
			__SUPP_COEF;
		};
	};
	class muzzle_snds_B : muzzle_snds_H {
		class ItemInfo: ItemInfo {
			__SUPP_COEF;
		};
	};
	class muzzle_snds_H_MG: muzzle_snds_H { // 7.62 MG, can also be used on 6.5 and 5.56 MGs
		displayName = "$STR_ASDG_cfgweapons_muzzle_snds_h_mg";
		class ItemInfo: ItemInfo {
			__SUPP_COEF;
		};
	};
	class muzzle_snds_H_SW : muzzle_snds_H_MG {
		displayName = "$STR_ASDG_cfgweapons_muzzle_snds_h_mg";
		class ItemInfo: ItemInfo {
			__SUPP_COEF;
		};
	};
	class muzzle_snds_acp: muzzle_snds_H {
		model = "\A3\weapons_f\acc\acca_snds_osprey_F"; // Silencerco .45 Osprey
		picture = "\asdg_jointrails_xtra\acc\gear_acca_snds_osprey";
		class ItemInfo: ItemInfo {
			__SUPP_COEF;
		};
	};
	class muzzle_snds_338_black : ItemCore {
		class ItemInfo : InventoryMuzzleItem_Base_F {
			__SUPP_COEF;
		};
	};
	class muzzle_snds_93mmg : ItemCore {
		class ItemInfo : InventoryMuzzleItem_Base_F {
			__SUPP_COEF;
		};
	};

};
