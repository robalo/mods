#define __OPTIC_CQB opticType = 0
#define __OPTIC_DMR opticType = 1
#define __OPTIC_SNP opticType = 2

	class ItemCore;
	class InventoryOpticsItem_Base_F;

// US

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

	class rhsusf_acc_ELCAN: rhsusf_acc_sniper_base {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
	};

	class rhsusf_acc_ACOG: rhsusf_acc_sniper_base {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
	};

	class rhsusf_acc_ACOG2: rhsusf_acc_ACOG {
		class ItemInfo: ItemInfo {
			__OPTIC_DMR;
		};
	};

	class rhsusf_acc_ACOG3: rhsusf_acc_ACOG {
		class ItemInfo: ItemInfo {
			__OPTIC_DMR;
		};
	};

	class rhsusf_acc_ACOG_USMC : rhsusf_acc_sniper_base {
		class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
	};
	
	class rhsusf_acc_ACOG2_USMC : rhsusf_acc_ACOG {
		class ItemInfo : ItemInfo {
			__OPTIC_DMR;
		};
	};
	
	class rhsusf_acc_LEUPOLDMK4_2 : rhsusf_acc_sniper_base {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_SNP;
		};
	};

#define __SUPP_COEF \
			class AmmoCoef : AmmoCoef { \
				visibleFire = 0.2; \
				audibleFire = 0.3; \
			}

	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_H;

	class rhsusf_silencer_base : muzzle_snds_H {
		class ItemInfo: InventoryMuzzleItem_Base_F {
			class AmmoCoef;
		};
	};
	
	class rhsusf_acc_M2010S : rhsusf_silencer_base {
		class ItemInfo : ItemInfo {
			__SUPP_COEF;
		};
	};
	class rhsusf_acc_SR25S : rhsusf_silencer_base {
		class ItemInfo : ItemInfo {
			__SUPP_COEF;
		};
	};
	class rhsusf_acc_rotex5_grey : rhsusf_silencer_base {
		class ItemInfo : ItemInfo {
			__SUPP_COEF;
		};
	};
