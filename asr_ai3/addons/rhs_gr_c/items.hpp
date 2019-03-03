	class ItemCore;
	class InventoryMuzzleItem_Base_F;

// muzzle

	class muzzle_snds_H;

    class rhsgref_silencer_base : muzzle_snds_H {
		class ItemInfo: InventoryMuzzleItem_Base_F {
			class AmmoCoef;
		};
	};
    class rhsgref_sdn6_suppressor : rhsgref_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
	};
