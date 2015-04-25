#define true	1
#define false	0

class CfgPatches {
	class tmr_core {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.60;
		requiredAddons[] = {"A3_Weapons_F", "A3_Data_F", "A3_Characters_F", "A3_UI_F", CBA_XEH, CBA_MAIN, tmr_language};
		version = 0.2.3;
		author[] = {"Taosenai"};
		authorUrl = "http://www.ryanschultz.org/tmr/";
	};
};

class Extended_PostInit_EventHandlers {
	class tmr_core {
		clientInit = "call compile preProcessFileLineNumbers '\tmr_core\init.sqf'";
	};
};

class CfgWeapons {
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
};

//////////////////////////////////

class CfgAmmo {
	class B_9x21_Ball;
	class B_556x45_Ball;
	class B_762x51_Ball;
	class B_127x99_Ball;
	class TMR_TinyFrag : B_9x21_Ball {
		model = "\A3\weapons_f\empty";
		tracerstarttime = 0;
		timetolive = 2.5;
		typicalspeed = 1400;
	};
	class TMR_LightFrag : B_556x45_Ball {
		model = "\A3\weapons_f\empty";
		tracerstarttime = 0;
		timetolive = 2.5;
		typicalspeed = 1400;
	};
	class TMR_MedFrag : B_762x51_Ball {
		model = "\A3\weapons_f\empty";
		tracerstarttime = 0;
		timetolive = 2.5;
		typicalspeed = 1400;

	};
	class TMR_BigFrag : B_127x99_Ball {
		model = "\A3\weapons_f\empty";
		tracerstarttime = 0;
		timetolive = 2.5;
		typicalspeed = 1400;
	};
};

class CfgMissions {
	class Missions {
		class TMRTraining {
			displayName = "TMR Training";
			briefingName = "TMR Training";
			overviewText = "Training missions for the new systems and weapons in TMR.";
			overviewPicture = "\tmr_core\data\training_ca.paa";
			author = "TMR";
		};
	};
};