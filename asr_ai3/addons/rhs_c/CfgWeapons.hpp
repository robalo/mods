class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class asdg_SlotInfo {
	linkProxy = "defaultProxy";
};
class asdg_OpticRail: asdg_SlotInfo {
	linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
	displayName = "$STR_A3_CowsSlot0";
};
class asdg_OpticRail1913: asdg_OpticRail {
	class compatibleItems {
//		ASR_optic_Arco_AI_N = 1;
//		ASR_optic_Hamr_AI_N = 1;
//		ASR_optic_SOS_AI_N = 1;
//		ASR_optic_MRCO_AI_N = 1;
//		ASR_optic_DMS_AI_N = 1;
//		ASR_optic_LRPS_AI_N = 1;
	};
};
class asdg_OpticRail1913_short: asdg_OpticRail1913 {
	class compatibleItems: compatibleItems {
//		ASR_optic_DMS_AI_N = 0;
//		ASR_optic_LRPS_AI_N = 0;
	};
};

class asdg_OpticSideMount: asdg_OpticRail {
	class compatibleItems {
	};
};

class CfgWeapons {
/*
	class ItemCore;
	class InventoryOpticsItem_Base_F;

	class rhs_acc_sniper_base: ItemCore {
		class ItemInfo: InventoryOpticsItem_Base_F {
			opticType = 1;
		};
	};
	class rhs_acc_1p29 : rhs_acc_sniper_base {
		class ItemInfo: InventoryOpticsItem_Base_F {
			opticType = 1;
		};
		asr_ai_variants[] = {"rhs_acc_1p29","ASR_rhs_acc_1p29_AI_N"};
	};
	class ASR_rhs_acc_1p29_AI_N : rhs_acc_1p29 {
		scope = 1;
		class ItemInfo : ItemInfo {
			opticType = 0;
		};
	};
	class rhs_acc_pso1m2 : rhs_acc_sniper_base {
		asr_ai_variants[] = {"rhs_acc_pso1m2","ASR_rhs_acc_pso1m2_AI_N"};
	};
	class ASR_rhs_acc_pso1m2_AI_N : rhs_acc_pso1m2 {
		scope = 1;
		class ItemInfo : ItemInfo {
			opticType = 0;
		};
	};
*/

	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class hgun_Rook40_F;

	class rhs_weap_pya : hgun_Rook40_F {
		ASR_AI_ROF_PISTOL_SEMI;
	};

	class rhs_weap_ak74m_Base_F: Rifle_Base_F {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISP_REGULAR;
	};

	class rhs_weap_ak74m : rhs_weap_ak74m_Base_F {};
	class rhs_weap_ak74 : rhs_weap_ak74m {};
	class rhs_weap_aks74 : rhs_weap_ak74 {};

	class rhs_weap_aks74u : rhs_weap_aks74 {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_CQB_MODES(Single,FullAuto);
	};

	class rhs_weap_akm : rhs_weap_ak74m {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
	};

	class rhs_weap_svd : rhs_weap_ak74m {
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
	};
	class rhs_weap_svdp : rhs_weap_svd {
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
	};

	class rhs_pkp_base: Rifle_Long_Base_F {
		modes[] = {"FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_far_optic2"};
		ASR_AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
		ASR_AI_DISP_REGULAR;
	};

	class rhs_weap_pkp;

	class rhs_weap_pkm: rhs_weap_pkp {
		modes[] = {"manual", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_far_optic2"};
		ASR_AI_MG_MODES(manual,Mode_FullAuto,manual);
	};

	class rhs_weap_rpk74m: rhs_weap_pkp {
		modes[] = {"Manual", "Single", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_far_optic2"};
		ASR_AI_MG_MODES(Manual,Mode_FullAuto,Mode_SemiAuto);
		ASR_AI_DISP_REGULAR;
	};


	class rhs_weap_M320_Base_F : Rifle_Base_F {
		modes[] = {"Single"};
		class Single : Mode_SemiAuto {
			ASR_AI_ROF_GL_SINGLE;
		};
		ASR_AI_DISP_REGULAR;
	};
/*
	class rhs_weap_XM2010_Base_F : Rifle_Base_F {
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISP_REGULAR;
	};
*/
	class arifle_MX_Base_F;

	class rhs_weap_m4_Base : arifle_MX_Base_F {
		modes[] = {"Single", "ASR_Burst3", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
		ASR_AI_RIFLE_SMALL_MODES(Mode_SemiAuto,Mode_FullAuto);
		ASR_AI_DISP_REGULAR;
	};

	class rhs_weap_m4a1 : rhs_weap_m4_Base {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
	};

	class rhs_m4a1_m320 : rhs_weap_m4_Base {
		modes[] = {"Single", "FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_far", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
	};

	class LMG_Mk200_F;
	
	class rhs_M249_base : LMG_Mk200_F {
		modes[] = {"FullAuto", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_far_optic2"};
		ASR_AI_MG_MODES(FullAuto,Mode_FullAuto,Mode_SemiAuto);
	};

	class weap_m240_base : rhs_M249_base {
		modes[] = {"manual", "ASR_AI_Burst_close", "ASR_AI_Burst_short", "ASR_AI_Burst_medium", "ASR_AI_Burst_far", "ASR_AI_Burst_far_optic1", "ASR_AI_Burst_far_optic2"};
		ASR_AI_MG_MODES(manual,Mode_FullAuto,manual);
		ASR_AI_DISP_REGULAR;
	};

	class srifle_EBR_F;

	class rhs_weap_m14ebrri : srifle_EBR_F {
 		modes[] = {"ASR_SemiAuto", "ASR_AI_Single_optics1", "ASR_AI_Single_optics2"};
 		ASR_AI_RIFLE_MEDIUM_MODES(Mode_SemiAuto,Mode_FullAuto);
	};

};
