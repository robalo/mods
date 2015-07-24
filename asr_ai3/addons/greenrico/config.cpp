#include "script_component.hpp"

// some basic defines
#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define private		0
#define protected	1
#define public		2

#define true	1
#define false	0

class CfgPatches {
	class ADDON {
		units[] = {"asdg_I_AssaultPack_dgtl_AR","asdg_I_Soldier_MG","asdg_I_recon","asdg_I_recon_exp","asdg_I_recon_medic","asdg_I_recon_TL","asdg_I_recon_M","asdg_I_recon_MG"};
		weapons[] = {"asdg_LMG_Mk200_ARCO_LP_BI","asdg_DMR_06_DMS_BI"};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[] = {"A3_Characters_F","A3_Weapons_F","A3_Weapons_F_Mark"};
		version = VERSION;
		author[] = {"Robalo"};
	};
};

PRELOAD_ADDONS;

class Extended_InitPost_EventHandlers {
	class asdg_I_Soldier_recon_base {
		class ADDON {
			serverInit = "(_this select 0) execVM ""\A3\Characters_F_Bootcamp\Data\Scripts\randomize_gue1.sqf""";
		};
	};
};

class CfgWeapons {

	class LMG_Mk200_F;

	class asdg_LMG_Mk200_ARCO_LP_BI : LMG_Mk200_F {
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_Arco";
			};
			class LinkedItemsAcc {
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
			class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "bipod_03_F_blk";
			};
		};
	};

	class srifle_DMR_06_olive_F;

	class asdg_DMR_06_DMS_BI : srifle_DMR_06_olive_F {
		class LinkedItems {
			class LinkedItemsOptic {
				slot = "CowsSlot";
				item = "optic_DMS";
			};
			class LinkedItemsUnder {
				slot = "UnderBarrelSlot";
				item = "bipod_03_F_oli";
			};
		};
	};
};

class CfgVehicles {

	class B_AssaultPack_dgtl;

	class asdg_I_AssaultPack_dgtl_AR : B_AssaultPack_dgtl {
		scope = protected;
		class TransportMagazines {
			class _xx_200Rnd_65x39_cased_Box {
				magazine = "200Rnd_65x39_cased_Box";
				count = 1;
			};
			class _xx_200Rnd_65x39_cased_Box_Tracer {
				magazine = "200Rnd_65x39_cased_Box_Tracer";
				count = 1;
			};
		};
	};

	class I_Soldier_base_F;

	class asdg_I_Soldier_recon_base : I_Soldier_base_F {
		scope = private;
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_infantry_SF_s"};
				speechPlural[] = {"veh_infantry_SF_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_SF_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_SF_p";
		nameSound = "veh_infantry_SF_s";
		vehicleClass = "MenRecon";
		sensitivity = 3.5;
		detectSkill = 30;
		ASR_AI_SKILL_SOF2;
		ASR_AI_COST_SPECIAL;
		minFireTime = 5;
		ASR_AI_CAMO_FULL;
		headgearProbability = 100;
		allowedHeadgear[] = {"H_Bandanna_gry", "H_Bandanna_khk_hs", "H_Bandanna_khk", "H_Bandanna_sgg", "H_Watchcap_blk", "H_Watchcap_cbr", "H_Watchcap_camo", "H_Watchcap_khk", "H_Booniehat_dgtl", "H_Booniehat_oli", "H_Cap_blk", "H_Cap_oli", "H_Cap_oli_hs", "H_Cap_blk_Raven", "H_MilCap_dgtl", "H_Booniehat_dgtl", "H_Cap_blk_Raven"};
	};
	
	class asdg_I_recon : asdg_I_Soldier_recon_base {
		scope = public;
		displayName = "$STR_B_recon_F0";
		uniformClass = "U_I_CombatUniform";
		weapons[] = {"arifle_Mk20_MRCO_pointer_F", "hgun_ACPC2_F", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"arifle_Mk20_MRCO_pointer_F", "hgun_ACPC2_F", "Throw", "Put", "Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		linkedItems[] = {"V_PlateCarrier1_blk", "H_Booniehat_dgtl", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_Booniehat_dgtl", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
	};
	
	class asdg_I_recon_exp : asdg_I_Soldier_recon_base {
		scope = public;
		displayName = "$STR_B_recon_exp_F0";
		uniformClass = "U_I_CombatUniform_shortsleeve";
		backpack = "I_Carryall_oli_Exp";
		weapons[] = {"arifle_Mk20C_ACO_F", "hgun_ACPC2_F", "Throw", "Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_F", "hgun_ACPC2_F", "Throw", "Put"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "APERSMine_Range_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		canDeactivateMines = true;
		detectSkill = 80;
		linkedItems[] = {"V_PlateCarrier1_blk", "H_Booniehat_dgtl", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_Booniehat_dgtl", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		icon = "iconManExplosive";
		picture = "pictureExplosive";
	};
	
	class asdg_I_recon_medic : asdg_I_Soldier_recon_base {
		scope = public;
		displayName = "$STR_B_recon_medic_F0";
		uniformClass = "U_I_CombatUniform_shortsleeve";
		backpack = "I_Fieldpack_oli_Medic";
		attendant = true;
		weapons[] = {"arifle_Mk20C_ACO_F", "hgun_ACPC2_F", "Throw", "Put"};
		respawnWeapons[] = {"arifle_Mk20C_ACO_F", "hgun_ACPC2_F", "Throw", "Put"};
		icon = "iconManMedic";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		linkedItems[] = {"V_TacVestIR_blk", "H_Bandanna_khk_hs", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_TacVestIR_blk", "H_Bandanna_khk_hs", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		picture = "pictureHeal";
	};
	
	class asdg_I_recon_TL : asdg_I_Soldier_recon_base {
		scope = public;
		displayName = "$STR_B_recon_TL_F0";
		uniformClass = "U_I_CombatUniform";
		icon = "iconManLeader";
		weapons[] = {"arifle_Mk20_GL_MRCO_pointer_F", "hgun_ACPC2_F", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"arifle_Mk20_GL_MRCO_pointer_F", "hgun_ACPC2_F", "Throw", "Put", "Binocular"};
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "UGL_FlareWhite_F", "UGL_FlareWhite_F", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_SmokeBlue_Grenade_shell"};
		linkedItems[] = {"V_PlateCarrier1_blk", "H_MilCap_dgtl", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrier1_blk", "H_MilCap_dgtl", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
	};
	
	class asdg_I_recon_M : asdg_I_Soldier_recon_base {
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_infantry_sniper_s"};
				speechPlural[] = {"veh_infantry_sniper_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_sniper_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_sniper_p";
		nameSound = "veh_infantry_sniper_s";
		scope = public;
		displayName = "$STR_B_recon_M_F0";
		uniformClass = "U_I_CombatUniform";
		weapons[] = {"asdg_DMR_06_DMS_BI", "hgun_ACPC2_F", "Throw", "Put", "Binocular"};
		respawnWeapons[] = {"asdg_DMR_06_DMS_BI", "hgun_ACPC2_F", "Throw", "Put", "Binocular"};
		magazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		respawnMagazines[] = {"20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		linkedItems[] = {"V_Chestrig_oli", "H_Shemag_olive_hs", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_Chestrig_oli", "H_Shemag_olive_hs", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		ASR_AI_AMMOCOEF_SNIPER;
	};
	
	class asdg_I_recon_MG : asdg_I_Soldier_recon_base {
		scope = public;
		displayName = "Recon (Support)";
		uniformClass = "U_I_CombatUniform_tshirt";
		weapons[] = {"asdg_LMG_Mk200_ARCO_LP_BI", "hgun_ACPC2_F", "Throw", "Put"};
		respawnWeapons[] = {"asdg_LMG_Mk200_ARCO_LP_BI", "hgun_ACPC2_F", "Throw", "Put"};
		magazines[] = {"200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		respawnMagazines[] = {"200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "MiniGrenade", "MiniGrenade", "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green"};
		linkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_Watchcap_blk", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		respawnLinkedItems[] = {"V_PlateCarrierIA1_dgtl", "H_Watchcap_blk", "ItemGPS", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles_INDEP"};
		backpack = "asdg_I_AssaultPack_dgtl_AR";
		threat[] = {1, 0.1, 0.3};
		icon = "iconManMG";
		class SpeechVariants {
			class Default {
				speechSingular[] = {"veh_infantry_MG_s","veh_infantry_SF_s"};
				speechPlural[] = {"veh_infantry_MG_p","veh_infantry_SF_p"};
			};
		};
	};

};

class CfgGroups {
	class Indep {
		class IND_F {
			class SpecOps {
				class asdg_HAF_reconTeam {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconTeam0";
					side = TGuerrila;
					faction = IND_F;
					
					class Unit0 {
						side = TGuerrila;
						vehicle = "asdg_I_recon_TL";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					
					class Unit1 {
						side = TGuerrila;
						vehicle = "asdg_I_recon_M";
						rank = CORPORAL;
						position[] = {5, -5, 0};
					};
					
					class Unit2 {
						side = TGuerrila;
						vehicle = "asdg_I_recon_medic";
						rank = PRIVATE;
						position[] = {-5, -5, 0};
					};
					
					class Unit3 {
						side = TGuerrila;
						vehicle = "asdg_I_recon";
						rank = CORPORAL;
						position[] = {10, -10, 0};
					};
					
					class Unit4 {
						side = TGuerrila;
						vehicle = "asdg_I_recon_MG";
						rank = PRIVATE;
						position[] = {-10, -10, 0};
					};
					
					class Unit5 {
						side = TGuerrila;
						vehicle = "asdg_I_recon_exp";
						rank = PRIVATE;
						position[] = {15, -15, 0};
					};
				};
				
				class asdg_HAF_reconPatrol {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconPatrol0";
					side = TGuerrila;
					faction = IND_F;
					
					class Unit0 {
						side = TGuerrila;
						vehicle = "asdg_I_recon_TL";
						rank = SERGEANT;
						position[] = {0, 0, 0};
					};
					
					class Unit1 {
						side = TGuerrila;
						vehicle = "asdg_I_recon_M";
						rank = CORPORAL;
						position[] = {5, -5, 0};
					};
					
					class Unit2 {
						side = TGuerrila;
						vehicle = "asdg_I_recon_medic";
						rank = PRIVATE;
						position[] = {-5, -5, 0};
					};
					
					class Unit3 {
						side = TGuerrila;
						vehicle = "asdg_I_recon";
						rank = PRIVATE;
						position[] = {10, -10, 0};
					};
				};
				
				class asdg_HAF_reconSentry {
					name = "$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_reconSentry0";
					side = TGuerrila;
					faction = IND_F;
					
					class Unit0 {
						side = TGuerrila;
						vehicle = "asdg_I_recon_M";
						rank = CORPORAL;
						position[] = {0, 0, 0};
					};
					
					class Unit1 {
						side = TGuerrila;
						vehicle = "asdg_I_recon";
						rank = PRIVATE;
						position[] = {5, -5, 0};
					};
				};
			};
		};
	};
};
