#define __OPTIC_CQB opticType = 0
#define __OPTIC_DMR opticType = 1
#define __OPTIC_SNP opticType = 2

	class ItemCore;
	class InventoryOpticsItem_Base_F;

    class rhs_acc_scope_base : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
        };
    };


    class Uniform_Base;
    class rhssaf_uniform_m10_digital : Uniform_Base {
        __CAMO_U_CAMOCAMO;
    };
    class rhssaf_uniform_m10_digital_summer : Uniform_Base {
        __CAMO_U_CAMOCAMO;
    };
    class rhssaf_uniform_m10_digital_desert : Uniform_Base {
        __CAMO_U_CAMOCAMO;
    };
    class rhssaf_uniform_m10_digital_tan_boots : Uniform_Base {
        __CAMO_U_CAMOCAMO;
    };
    class rhssaf_uniform_m93_oakleaf : Uniform_Base {
        __CAMO_U_CAMOCAMO;
    };
    class rhssaf_uniform_m93_oakleaf_summer : Uniform_Base {
        __CAMO_U_CAMOCAMO;
    };

    class rhssaf_uniform_heli_pilot : Uniform_Base {
        __CAMO_U_MONOMONO;
    };

    class rhssaf_balistic_vest_base;
    class rhssaf_vest_md98_woodland : rhssaf_balistic_vest_base {
        __CAMO_V_CAMO;
    };
    class rhssaf_vest_md98_md2camo : rhssaf_balistic_vest_base {
        __CAMO_V_CAMO;
    };
    class rhssaf_vest_md98_digital : rhssaf_balistic_vest_base {
        __CAMO_V_CAMO;
    };
    class rhssaf_vest_md98_officer : rhssaf_balistic_vest_base {
        __CAMO_V_CAMO;
    };
    class rhssaf_vest_md98_rifleman : rhssaf_balistic_vest_base {
        __CAMO_V_CAMO;
    };
    class rhssaf_vest_otv_md2camo : rhssaf_balistic_vest_base {
        __CAMO_V_CAMO;
    };

    class rhssaf_tactical_vest_base;
    class rhssaf_vest_md99_md2camo_rifleman : rhssaf_tactical_vest_base {
        __CAMO_V_CAMO;
    };
    class rhssaf_vest_md99_digital_rifleman : rhssaf_tactical_vest_base {
        __CAMO_V_CAMO;
    };
    class rhssaf_vest_md99_woodland_rifleman : rhssaf_tactical_vest_base {
        __CAMO_V_CAMO;
    };
    class rhssaf_vest_md99_md2camo : rhssaf_tactical_vest_base {
        __CAMO_V_CAMO;
    };
    class rhssaf_vest_md99_digital : rhssaf_tactical_vest_base {
        __CAMO_V_CAMO;
    };
    class rhssaf_vest_md99_woodland : rhssaf_tactical_vest_base {
        __CAMO_V_CAMO;
    };
