#define __OPTIC_CQB opticType = 0
#define __OPTIC_DMR opticType = 1
#define __OPTIC_SNP opticType = 2

	class ItemCore;
	class InventoryOpticsItem_Base_F;

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


	class InventoryMuzzleItem_Base_F;
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

    class Uniform_Base;

    class rhs_uniform_flora : Uniform_Base {
        //displayName = "Flora (MSV)";
        __CAMO_U_CAMOCAMO;
    };
    class rhs_uniform_df15;
    class rhs_uniform_df15_tan : rhs_uniform_df15 {
        //displayName = "DF-15-2 (Tan)";
        __CAMO_U_MONOMONO;
    };
    class rhs_uniform_m88_patchless : rhs_uniform_flora {
        //displayName = "M88";
        __CAMO_U_MONOMONO;
    };
    class rhs_uniform_gorka_r_y : rhs_uniform_flora {
        //displayName = "Gorka-R (Yellow)";
        __CAMO_U_MONOMONO;
    };

    class U_I_OfficerUniform;

    class rhs_chdkz_uniform_1 : U_I_OfficerUniform {
        //displayName = "Guerilla Uniform (Les)";
        __CAMO_U_CAMOCAMO;
    };
    class rhs_chdkz_uniform_2 : U_I_OfficerUniform {
        //displayName = "Guerilla Uniform (Half-Les)";
        __CAMO_U_CAMOMONO;
    };
    class rhs_chdkz_uniform_3 : U_I_OfficerUniform {
        //displayName = "Guerilla Uniform (Half-Kamysh)";
        __CAMO_U_MONOCAMO;
    };
    class rhs_chdkz_uniform_4 : U_I_OfficerUniform {
        //displayName = "Guerilla Uniform (Half-Flora)";
        __CAMO_U_CAMOMONO;
    };
    class rhs_chdkz_uniform_5 : U_I_OfficerUniform {
        //displayName = "Guerilla Uniform (Flora-Les)";
        __CAMO_U_CAMOCAMO;
    };

    class Vest_Camo_Base;

    class rhs_6b23 : Vest_Camo_Base {
        //displayName = "6B23";
        __CAMO_V_CAMO;
    };
    class rhs_6b23_6sh116;
    class rhs_6b23_6sh116_od : rhs_6b23_6sh116 {
        //displayName = "6B23 (6Sh116)";
        __CAMO_V_MONO;
    };
    class rhs_6b23_6sh116_vog;
    class rhs_6b23_6sh116_vog_od : rhs_6b23_6sh116_vog {
        //displayName = "6B23 (6Sh116/VOG)";
        __CAMO_V_MONO;
    };

    class rhs_6sh46 : Vest_Camo_Base {
        //displayName = "6Sh46";
        __CAMO_V_IGNORE;
    };
    class rhs_vest_commander : Vest_Camo_Base {
        //displayName = "Mapcase and Holster";
        __CAMO_V_IGNORE;
    };
    class rhs_vydra_3m : Vest_Camo_Base {
        //displayName = "Vydra-3M";
        __CAMO_V_IGNORE;
    };
    class rhs_6sh92 : Vest_Camo_Base {
        //displayName = "6Sh92";
        __CAMO_V_IGNORE;
    };
