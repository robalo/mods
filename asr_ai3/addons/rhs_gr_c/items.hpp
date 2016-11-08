#define __OPTIC_CQB opticType = 0
#define __OPTIC_DMR opticType = 1
#define __OPTIC_SNP opticType = 2

	class ItemCore;
	class InventoryOpticsItem_Base_F;

	class rhs_acc_scope_base: ItemCore {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
        };
    };

	class rhsgref_acc_oko21: ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_CQB;
        };
    };


	class InventoryMuzzleItem_Base_F;
	class muzzle_snds_H;

	class rhsgref_silencer_base: muzzle_snds_H {
        class ItemInfo : InventoryMuzzleItem_Base_F {
			class AmmoCoef;
        };
    };

	class rhsgref_savz61_suppressor: rhsgref_silencer_base {
		class ItemInfo : ItemInfo {
			ASR_SUPP_INH_COEFF;
		};
    };
