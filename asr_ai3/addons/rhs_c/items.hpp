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
		asr_ai_variants[] = {"rhs_acc_pso1m2","ASR_Optic_PSO1_AI_N"};
	};
	class ASR_Optic_PSO1_AI_N : rhs_acc_pso1m2 {
		scope = 1;
		class ItemInfo : ItemInfo {
			__OPTIC_CQB;
		};
	};

	class rhs_acc_1p29 : rhs_acc_sniper_base {
		class ItemInfo : InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
		asr_ai_variants[] = {"rhs_acc_1p29","ASR_Optic_1p29_AI_N"};
	};
	class ASR_Optic_1p29_AI_N : rhs_acc_1p29 {
		scope = 1;
		class ItemInfo : ItemInfo {
			__OPTIC_CQB;
		};
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
		asr_ai_variants[] = {"rhsusf_acc_LEUPOLDMK4","ASR_Optic_LEUPOLDMK4_AI_N"};
	};

	class ASR_Optic_LEUPOLDMK4_AI_N : rhsusf_acc_LEUPOLDMK4 {
		scope = 1;
		class ItemInfo : ItemInfo {
			__OPTIC_CQB;
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
		asr_ai_variants[] = {"rhsusf_acc_ELCAN","ASR_Optic_ELCAN_AI_N"};
	};

	class ASR_Optic_ELCAN_AI_N : rhsusf_acc_ELCAN {
		scope = 1;
		class ItemInfo : ItemInfo {
			__OPTIC_CQB;
		};
	};

	class rhsusf_acc_ACOG: rhsusf_acc_sniper_base {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_DMR;
		};
		asr_ai_variants[] = {"rhsusf_acc_ACOG","ASR_Optic_ACOG_AI_N"};
	};

	class ASR_Optic_ACOG_AI_N : rhsusf_acc_ACOG {
		scope = 1;
		class ItemInfo : ItemInfo {
			__OPTIC_CQB;
		};
	};

	class rhsusf_acc_ACOG2: rhsusf_acc_ACOG {
		class ItemInfo: ItemInfo {
			__OPTIC_DMR;
		};
		asr_ai_variants[] = {"rhsusf_acc_ACOG2","ASR_Optic_ACOG2_AI_N"};
	};

	class ASR_Optic_ACOG2_AI_N : rhsusf_acc_ACOG2 {
		scope = 1;
		class ItemInfo : ItemInfo {
			__OPTIC_CQB;
		};
	};

	class rhsusf_acc_ACOG3: rhsusf_acc_ACOG {
		class ItemInfo: ItemInfo {
			__OPTIC_DMR;
		};
		asr_ai_variants[] = {"rhsusf_acc_ACOG3","ASR_Optic_ACOG3_AI_N"};
	};

	class ASR_Optic_ACOG3_AI_N : rhsusf_acc_ACOG3 {
		scope = 1;
		class ItemInfo : ItemInfo {
			__OPTIC_CQB;
		};
	};

	class rhsusf_acc_LEUPOLDMK4_2 : rhsusf_acc_sniper_base {
		class ItemInfo: InventoryOpticsItem_Base_F {
			__OPTIC_SNP;
		};
		asr_ai_variants[] = {"rhsusf_acc_LEUPOLDMK4_2","ASR_Optic_LEUPOLDMK42_AI_N"};
	};

	class ASR_Optic_LEUPOLDMK42_AI_N : rhsusf_acc_LEUPOLDMK4_2 {
		scope = 1;
		class ItemInfo : ItemInfo {
			__OPTIC_CQB;
		};
	};
