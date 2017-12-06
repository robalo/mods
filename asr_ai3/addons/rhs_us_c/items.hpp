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
	
	class rhsusf_acc_LEUPOLDMK4_2 : rhsusf_acc_sniper_base {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_SNP;
		};
	};

    class rhsusf_acc_premier : rhsusf_acc_LEUPOLDMK4_2 {
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_SNP;
		};
	};

    class rhsusf_acc_premier_anpvs27 : rhsusf_acc_premier {
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_SNP;
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

    class Uniform_Base;

    class rhs_uniform_g3_mc : Uniform_Base {
        //displayName = "G3 Uniform (Multicam)";
        __CAMO_U_CAMOCAMO;
    };
    class rhs_uniform_g3_m81 : Uniform_Base {
        //displayName = "G3 Uniform (M81)";
        __CAMO_U_CAMOCAMO;
    };
    class rhs_uniform_g3_tan : Uniform_Base {
        //displayName = "G3 Uniform (Tan)";
        __CAMO_U_MONOMONO;
    };
    class rhs_uniform_g3_rgr : Uniform_Base {
        //displayName = "G3 Uniform (Ranger Green)";
        __CAMO_U_MONOMONO;
    };
    class rhs_uniform_g3_blk : Uniform_Base {
        //displayName = "G3 Uniform (Black)";
        __CAMO_U_DARKDARK;
    };
    class rhs_uniform_cu_ocp : Uniform_Base {
        //displayName = "Combat Uniform OCP";
        __CAMO_U_CAMOCAMO;
    };
    class rhs_uniform_acu_ucp : Uniform_Base {
        __CAMO_U_CAMOCAMO;
    };

    class Vest_Camo_Base;
    
    class rhsusf_iotv_ocp_base : Vest_Camo_Base {
        __CAMO_V_CAMO;
    };
    class rhsusf_spc : rhsusf_iotv_ocp_base {
        //displayName = "SPC";
        __CAMO_V_MONO;
    };
    class rhsusf_mbav : rhsusf_iotv_ocp_base {
        __CAMO_V_MONO;
    };
    class rhsusf_plateframe_sapi : rhsusf_iotv_ocp_base {
        __CAMO_V_MONO;
    };
