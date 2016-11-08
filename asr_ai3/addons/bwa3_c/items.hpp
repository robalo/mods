#define __OPTIC_CQB opticType = 0
#define __OPTIC_DMR opticType = 1
#define __OPTIC_SNP opticType = 2

	class ItemCore;
	class InventoryOpticsItem_Base_F;
    class BWA3_ItemCore;

    class BWA3_optic_Kolimator_base : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_CQB;
        };
    };
    class BWA3_optic_EOTech;
    class BWA3_optic_EOTech_Mag_Off : BWA3_optic_EOTech {
        class ItemInfo;
    };
    class BWA3_optic_EOTech_Mag_On : BWA3_optic_EOTech_Mag_Off {
        class ItemInfo : ItemInfo {
			__OPTIC_DMR;
        };
    };
    class BWA3_optic_Attachment_base : BWA3_ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_CQB;
        };
    };

    class BWA3_optic_ZO4x30 : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
        };
    };

    class BWA3_optic_Shortdot : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
        };
    };

    class BWA3_optic_20x50 : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_SNP;
        };
    };
    class BWA3_optic_24x72 : ItemCore {
        class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_SNP;
        };
    };


    class muzzle_snds_H : ItemCore {
        class ItemInfo;
    };

    class BWA3_muzzle_snds_G28 : muzzle_snds_H {
        class ItemInfo : ItemInfo {
			ASR_SUPP_COEFF;
        };
    };
