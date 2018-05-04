    class Bag_Base;
    class Weapon_Bag_Base;
    class B_AssaultPack_Base;
    class B_AssaultPack_rgr;

    class rhs_assault_umbts : B_AssaultPack_Base {
        //displayName = "UMBTS Backpack";
        __CAMO_B_MEDIUMMONO;
    };
    class rhs_rpg : B_AssaultPack_Base {
        //displayName = "RPG Carrier";
        __CAMO_B_MEDIUMMONO;
    };
    class rhs_sidor : B_AssaultPack_Base {
        //displayName = "Sidor";
        __CAMO_B_MEDIUMMONO;
    };
    class rhs_medic_bag: B_AssaultPack_Base {
        __CAMO_B_SMALLMONO;
    };

    class rhsusf_assault_eagleaiii_ucp : B_AssaultPack_Base {
        //displayName = "Eagle A-III UCP";
        __CAMO_B_MEDIUMCAMO;
    };
    class rhsusf_assault_eagleaiii_coy : rhsusf_assault_eagleaiii_ucp {
        //displayName = "Eagle A-III Coyote";
        __CAMO_B_MEDIUMMONO;
    };
    class rhsusf_falconii : B_AssaultPack_rgr {
        //displayName = "Falcon-II RGR";
        __CAMO_B_SMALLMONO;
    };
    class rhsusf_falconii_mc : B_AssaultPack_rgr {
        //displayName = "Falcon-II MC";
        __CAMO_B_SMALLCAMO;
    };

    class RHS_M2_Gun_Bag : Weapon_Bag_Base {
        //displayName = "M2 Gun Bag";
        __CAMO_B_HUGEMONO;
    };
    class RHS_M2_Tripod_Bag : Weapon_Bag_Base {
        //displayName = "M2 Tripod Bag";
        __CAMO_B_MEDIUMMONO;
    };

    class rhsgref_hidf_alicepack : Bag_Base {
        __CAMO_B_LARGEMONO;
    };
    class rhsgref_wdl_alicepack : rhsgref_hidf_alicepack {
        __CAMO_B_LARGECAMO;
    };
    class rhsgref_ttsko_alicepack : rhsgref_hidf_alicepack {
        __CAMO_B_LARGECAMO;
    };

    class rhssaf_Kitbag_base;

    class rhssaf_kitbag_md2camo : rhssaf_Kitbag_base {
        __CAMO_B_MEDIUMCAMO;
    };
    class rhssaf_kitbag_digital : rhssaf_Kitbag_base {
        __CAMO_B_MEDIUMCAMO;
    };
    class rhssaf_kitbag_smb : rhssaf_Kitbag_base {
        __CAMO_B_MEDIUMMONO;
    };

    class rhssaf_alice_md2camo : Bag_Base {
        __CAMO_B_LARGECAMO;
    };
    class rhssaf_alice_smb : Bag_Base {
        __CAMO_B_LARGEMONO;
    };
