/*
    ___    _____    ____    ______              __    ___     __  ___
   /   |  / ___/   / __ \  / ____/             / /   /   |   /  |/  /
  / /| |  \__ \   / / / / / / __          __  / /   / /| |  / /|_/ / 
 / ___ | ___/ /  / /_/ / / /_/ /         / /_/ /   / ___ | / /  / /  
/_/  |_|/____/  /_____/  \____/          \____/   /_/  |_|/_/  /_/   


Goal: provide common bullet and magazine classes for use by weapon mods in order to achieve better consistency and compatibility

TO DO:
- add common bullets (CfgAmmo classes)
- add magazines (CfgMagazines classes)
- add magazine groups
- provide macros as alternative to magazine groups so mod makers can use them
- configure vanilla weapons to use new magazines
- add support for AB, ACE3

TO NOT DO:
- create too many bullet and magazine variations

HOW TO:

- set up weapons with various muzzle velocities:

	class arifle_Mk20_F: mk20_base_F {
		initSpeed = -0.98913;		//  FS2000: 910 m/s
	};
	class arifle_Mk20C_F: mk20_base_F {
		initSpeed = -0.97826;		//  F2000 Tactical: 900 m/s
	};

	class arifle_TRG21_F: Tavor_base_F {
		initSpeed = -1;			//  TAR-21: 920 m/s
	};
	class arifle_TRG20_F: Tavor_base_F {
		initSpeed = -0.96739;		//  CTAR-21: 890 m/s
	};

	// NOTE: the above coefficients were calculated relative to 30Rnd_556x45_Stanag (initspeed = 920) but they will be applied to all types of magazines/bullets

*/

#include "script_macros.hpp"

class CfgPatches {
	class asdg_jam {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.44;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Mark"};
		author[] = {"Robalo"};
	};
};

class CfgAddons {
	class PreloadAddons {
		class asdg_jam {
			list[] = {"asdg_jam"};
		};
	};
};

class CfgAmmo {

	class B_556x45_Ball;
	class asdg_B_556x45_M855A1 : B_556x45_Ball { // 62gr M855A1 EPR 20 Inch Barrel -- Spartan0536
		hit = 8.606374;
		typicalSpeed = 960.12;
		airFriction = -0.0011336141;
		caliber = 0.901;
		deflecting = 21;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class asdg_B_556x45_Mk318 : B_556x45_Ball { // 62gr Mk318 Mod 0 SOST 20 inch Barrel -- Spartan0536
		hit = 10.073716;
		typicalSpeed = 955.2432;
		airFriction = -0.0011487255;
		caliber = 0.734;
		deflecting = 18;
	};
	class asdg_B_556x45_Mk262 : B_556x45_Ball { // 77gr Mk262 Mod 1 SPR 20 Inch Barrel -- Spartan0536
		hit = 11.5702505;
		typicalSpeed = 868.68;
		airFriction = -0.0010867938;
		caliber = 0.615;
		deflecting = 16;
	};

};

class CfgMagazines {

	class 30Rnd_556x45_Stanag;
	class asdg_M_30Rnd_556x45_M855A1_Stanag : 30Rnd_556x45_Stanag { // 62gr M855A1 EPR 20 Inch Barrel
		displayName = "5.56mm 30rnd M855A1 STANAG Mag";
		displaynameshort = "M855A1";
		ammo = "asdg_B_556x45_M855A1";
		initSpeed = 960.12;
		tracersEvery = 0;
		lastRoundsTracer = 3;
		magazineGroup[] += {"asdg_jam_mg_556x45_stanag"};
		author = "ASDG JAM";
	};
	class asdg_M_30Rnd_556x45_M856A1_Stanag : asdg_M_30Rnd_556x45_M855A1_Stanag { // 56gr M856A1 Tracer 20 Inch Barrel
		displayName = "5.56mm 30rnd M856A1 (Tracer) STANAG Mag";
		displaynameshort = "Tracer";
		picture = "\A3\weapons_F\data\UI\m_30stanag_red_ca.paa";
		tracersEvery = 1;
		lastRoundsTracer = 30;
		author = "ASDG JAM";
	};
	class asdg_M_30Rnd_556x45_Mk318_Stanag : 30Rnd_556x45_Stanag { // 62gr Mk318 Mod 0 SOST 20 inch Barrel
		displayName = "5.56mm 30rnd Mk318 STANAG Mag";
		displaynameshort = "Mk318";
		ammo = "asdg_B_556x45_Mk318";
		initSpeed = 955.2432;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		magazineGroup[] += {"asdg_jam_mg_556x45_stanag"};
		author = "ASDG JAM";
	};
	class asdg_M_30Rnd_556x45_Mk262_Stanag : 30Rnd_556x45_Stanag { // 77gr Mk262 Mod 1 SPR 20 Inch Barrel
		displayName = "5.56mm 30rnd Mk262 STANAG Mag";
		displaynameshort = "Mk262";
		ammo = "asdg_B_556x45_Mk262";
		initSpeed = 868.68;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		magazineGroup[] += {"asdg_jam_mg_556x45_stanag"};
		author = "ASDG JAM";
	};

};

class CfgWeapons {

	class Rifle_Base_F;
	class mk20_base_F : Rifle_Base_F {
		//magazines[] += {"asdg_jam_mg_556x45_stanag"}; // fail :/
		magazines[] += {ASDG_JAM_MAGAZINES_556x45_STANAG};
	};

	class SDAR_base_F : Rifle_Base_F {
		magazines[] += {ASDG_JAM_MAGAZINES_556x45_STANAG};
	};

	class Tavor_base_F : Rifle_Base_F {
		magazines[] += {ASDG_JAM_MAGAZINES_556x45_STANAG};
	};

};
