#define __OPTIC_CQB opticType = 0
#define __OPTIC_DMR opticType = 1
#define __OPTIC_SNP opticType = 2

	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;

// muzzle

	class muzzle_snds_H;

	class rhsusf_silencer_base : muzzle_snds_H {
		class ItemInfo: InventoryMuzzleItem_Base_F {
			class AmmoCoef;
		};
	};
	class rhsusf_acc_M2010S : rhsusf_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
	};
	class rhsusf_acc_SR25S : rhsusf_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
	};
	class rhsusf_acc_rotex5_grey : rhsusf_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
	};
    class rhsusf_acc_nt4_black : rhsusf_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
	};
    class rhsusf_acc_omega9k : rhsusf_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
	};
    class rhsusf_acc_rotex_mp7 : rhsusf_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
	};
    class rhsusf_acc_m24_silencer_black : rhsusf_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
	};


// optics

	class rhsusf_acc_sniper_base: ItemCore {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_SNP;
		};
	};
	class rhsusf_acc_compm4 : ItemCore {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_CQB;
		};
	};
    class rhsusf_acc_anpvs27 : ItemCore {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
	};
    class rhsusf_acc_anpas13gv1 : ItemCore {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
	};
	class rhsusf_acc_ELCAN: rhsusf_acc_sniper_base {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
	};
    class rhsusf_acc_su230_base : ItemCore {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
	};
	class rhsusf_acc_ACOG: rhsusf_acc_sniper_base {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
	};
    class rhsusf_acc_ACOG_anpvs27 : rhsusf_acc_ACOG {
        class ItemInfo : ItemInfo {
			__OPTIC_DMR;
		};
	};
    class rhsusf_acc_ACOG_MDO : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
	};
    class rhsusf_acc_g33_xps3 : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
	};
