#define __OPTIC_CQB opticType = 0
#define __OPTIC_DMR opticType = 1
#define __OPTIC_SNP opticType = 2

	class ItemCore;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;

// muzzle

	class muzzle_snds_H;

    class rhs_silencer_base : muzzle_snds_H {
        class ItemInfo : InventoryMuzzleItem_Base_F {
			class AmmoCoef;
        };
    };
    class rhs_acc_tgpa : rhs_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
    };
    class rhs_acc_pbs1 : rhs_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
    };
    class rhs_acc_tgpv : rhs_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
    };
    class rhs_acc_dtk4short : rhs_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
    };
    class rhs_acc_dtk4long : rhs_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
    };
    class rhs_acc_dtk4screws : rhs_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
    };
	class rhs_acc_pbs4: rhs_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
    };
    class rhs_acc_6p9_suppressor : rhs_silencer_base {
		class ItemInfo : ItemInfo {
			__AI_SUPP_INH_COEFF;
		};
    };

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


// optics

    class rhs_acc_sniper_base : ItemCore {
        //displayName = "PSO-1M2";
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
        };
    };
    class rhs_acc_1p29 : rhs_acc_sniper_base {
        //displayName = "1P29";
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
        };
    };
    class rhs_acc_1p78 : rhs_acc_1p29 {
        //displayName = "1P78";
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
        };
    };
    class rhs_acc_pkas : rhs_acc_sniper_base {
        //displayName = "PK-AS";
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_CQB;
        };
    };
    class rhs_acc_1p63 : rhs_acc_pkas {
        //displayName = "1P63";
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_CQB;
        };
    };
    class rhs_acc_nita : rhs_acc_pkas {
        //displayName = "NIT-A";
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_CQB;
        };
    };
    class rhs_acc_pgo7v : rhs_acc_sniper_base {
        //displayName = "PGO-7V3";
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
        };
    };
    class rhs_acc_1pn93_base : rhs_acc_sniper_base {
        //displayName = "1PN93-1";
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
        };
    };
    class rhs_acc_1pn93_2 : rhs_acc_pgo7v {
        //displayName = "1PN93-2";
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
        };
    };
	class rhs_acc_rakursPM: rhs_acc_1p63 {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_CQB;
        };
    };

	class rhs_acc_scope_base: ItemCore {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
        };
    };
    class rhs_acc_mtz : rhs_acc_scope_base {
		class ItemInfo: ItemInfo {
			__OPTIC_CQB;
        };
    };

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
    class rhsusf_acc_SpecterDR : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
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
