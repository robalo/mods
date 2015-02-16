	class ItemCore;
	class InventoryOpticsItem_Base_F;

// RU

	class rhs_acc_sniper_base: ItemCore {
		class ItemInfo;
	};

	class rhs_acc_pso1m2 : rhs_acc_sniper_base {
		class ItemInfo : ItemInfo {
			__OPTIC_DMR;
		};
		__AIN_VARIANTS(rhs_acc_pso1m2);
	};

	class rhs_acc_1p29 : rhs_acc_sniper_base {
		class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
		__AIN_VARIANTS(rhs_acc_1p29);
	};

	class rhs_acc_pkas : rhs_acc_sniper_base {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_CQB;
		};
	};

	class rhs_acc_1p63 : rhs_acc_pkas {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_CQB;
		};
	};

	class rhs_acc_pgo7v : rhs_acc_sniper_base {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
	};

	class rhs_acc_1pn93_base : rhs_acc_sniper_base {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
	};

	class rhs_acc_1pn93_2 : rhs_acc_pgo7v {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
	};

// US

	class rhsusf_acc_sniper_base: ItemCore {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_SNP;
		};
	};

	class rhsusf_acc_LEUPOLDMK4 : rhsusf_acc_sniper_base {
		__AIN_VARIANTS(rhsusf_acc_LEUPOLDMK4);
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
		__AIN_VARIANTS(rhsusf_acc_ELCAN);
	};

	class rhsusf_acc_ACOG: rhsusf_acc_sniper_base {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
		__AIN_VARIANTS(rhsusf_acc_ACOG);
	};

	class rhsusf_acc_ACOG2: rhsusf_acc_ACOG {
		class ItemInfo: ItemInfo {
			__OPTIC_DMR;
		};
		__AIN_VARIANTS(rhsusf_acc_ACOG2);
	};

	class rhsusf_acc_ACOG3: rhsusf_acc_ACOG {
		class ItemInfo: ItemInfo {
			__OPTIC_DMR;
		};
		__AIN_VARIANTS(rhsusf_acc_ACOG3);
	};

	class rhsusf_acc_LEUPOLDMK4_2 : rhsusf_acc_sniper_base {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_SNP;
		};
		__AIN_VARIANTS(rhsusf_acc_LEUPOLDMK4_2);
	};
