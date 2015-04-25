#define true	1
#define false	0

class CfgPatches {
	class tmr_nlaw {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.60;
		requiredAddons[] = {A3_Weapons_F, A3_UI_F, "A3_Data_F", "A3_Missions_F", tmr_core};
		version = 0.1;
		author[] = {"Taosenai"};
		authorUrl = "http://www.ryanschultz.org/tmr/";
	};
};

class Extended_PostInit_EventHandlers {
	class tmr_nlaw {
		clientInit = "call compile preProcessFileLineNumbers '\tmr_nlaw\init.sqf'";
	};
};

class Extended_FiredBIS_EventHandlers {
	class CAManBase {
		class tmr_nlaw {
			clientFiredBIS = "_this call tmr_nlaw_fnc_pcml_firedEH";
		};
	};
};

class TMR_EFPTrail {
	class Trail1 {
		simulation = "particles";
		type = "TMR_EFPSparksTrail";
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
	};
};

class CfgCloudlets {
	class Default;
	class ArtilleryShell1;
	class TMR_EFPSparksTrail : ArtilleryShell1 {
		interval = 0.00008;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.15;
		moveVelocity[] = {1, 1, 1};
		rotationVelocity = 1;
		weight = 1.275;
		volume = 1;
		rubbing = 0.08;
		size[] = {0.2, 0.2, 0.2, 0.2, 0.2, 0.12, 0.12, 0.12, 0.12, 0};
		sizeCoef = 1;
		color[] = {{1, 0.6, 0.6, -10}, {1, 0.6, 0.6, -8}, {1, 0.6, 0.6, -6}, {1, 0.6, 0.6, -4.5}};
		colorCoef[] = {1, 1, 1, 1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.6;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 0.4;
		positionVar[] = {0.04, 0.04, 0.04};
		MoveVelocityVar[] = {4, 4, 4};
		rotationVelocityVar = 3;
		sizeVar = 0.05;
		colorVar[] = {0, 0.15, 0.15, 0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};

class CfgAmmo {
	class ShellBase;
	class TMR_NLAW_EFP : ShellBase {
		explosioneffects = "ExploAmmoExplosion";
		cratereffects = "";

		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		effectfly = "TMR_EFPTrail";

		typicalSpeed = 600;

		caliber = 15.17;
		deflecting = 15;
		tracerstarttime = 0;

		timetolive = 2;

		hit = 660;
		indirectHit = 5;
		indirectHitRange = 1;
	};

	class MissileBase;
	class M_NLAW_AT_F : MissileBase {
		maneuvrability = 0;
		maxcontrolrange = 0;

		thrust = 457; // This value is only used by the AI.
	};

	class TMR_M_NLAW_MPV_F : M_NLAW_AT_F {
		irlock = 0;
		canLock = 0;
		fuseDistance = 7;

		cratereffects = "ATMissileCrater";
		explosioneffects = "ATMissileExplosion";

		hit = 367;
		indirecthit = 33;
		indirecthitrange = 10;
	};

	class SmallSecondary;

	class TMR_NLAW_MissileExplode : SmallSecondary {
		//explosioneffects = "ATRocketExplosion";
		craterEffects = "";
		hit = 190;
		indirecthit = 17;
		indirecthitrange = 6;
	};
};

class CfgMagazines {
	class CA_LauncherMagazine;
	class NLAW_F : CA_LauncherMagazine {
		ammo = "M_NLAW_AT_F";
		model = "\A3\weapons_f\launchers\nlaw\nlaw_proxy";

		type = 256;
		mass = 1;
		allowedSlots[] = {701, 801, 901};

		displayname = "PCML AT Missile";
		displaynameshort = "AT";
		descriptionshort = "Type: 150mm AT missile<br />Used in: PCML AT";
	};

	class TMR_NLAW_MPV_F : NLAW_F {
		ammo = "TMR_M_NLAW_MPV_F";
		model = "\A3\weapons_f\launchers\nlaw\nlaw_proxy";
		
		displayname = "PCML MPV Missile";
		displaynameshort = "MPV";
		descriptionshort = "Type: 150mm MPV Blast-Frag missile<br />Used in: PCML MPV";
	};
};

class CfgWeapons {
	class Launcher_Base_F;
	class launch_NLAW_F : Launcher_Base_F {
		descriptionshort = "Warhead: Anti-tank, overflight top attack";
		displayname = "PCML AT";

		magazines[] = {"NLAW_F"};

		irlock = 0;
		canLock = 0;
		fuseDistance = 7;

		modelOptics = "\tmr_nlaw\data\tmr_reticle_pcml";

		class CamShakePlayerFire {
			duration = 0.1;
			frequency = 20;
			power = 3;
		};
	};
	class TMR_launch_NLAW_MPV_F : launch_NLAW_F {
		descriptionshort = "Warhead: Multi-purpose, direct attack ";
		displayname = "PCML MPV";

		magazines[] = {"tmr_NLAW_MPV_F"};
	};
};

class CfgSounds {
	class tmr_nlaw_plungerPress {
		name = "tmr_nlaw_plungerPress";
		sound[] = {"\tmr_nlaw\data\plunger_press.wss", db-0, 1};
		titles[] = {};
	};
	class tmr_nlaw_plungerRelease {
		name = "tmr_nlaw_plungerRelease";
		sound[] = {"\tmr_nlaw\data\plunger_release.wss", db-0, 1};
		titles[] = {};
	};
};

class CfgMissions {
	class Missions {
		class TMRTraining {
			class PCMLGuidance {
				briefingName = "PCML Guidance";
				directory = "tmr_nlaw\TMR_PCMLTraining.Stratis";
			};
		};
	};
};

class CfgHints {
	class TMR {
		displayName = "TMR Tutorials";
		class PCMLInit {
			arguments[] = {};
			description = "TMR NLAW Attack &amp; Guidance makes the PCML behave like its real counterpart, the NLAW. <br/><br/>This tutorial will teach you how to employ the new version.<br/>%1%2Take a PCML from the box ahead of you and ready it.<br/>";
			displayName = "PCML Operation";
			image = "launcher_ca.paa";
			tip = "";
		};
		class PCMLOTADirectAttack {
			arguments[] = {};
			description = "The standard PCML AT has two guidance modes: flattened trajectory and predicted line-of-sight (PLOS).<br/><br/>In flattened trajectory mode, the missile flies directly towards the target after reaching its overfly altitude. Gravity and wind are corrected.<br/>%1%2An Ifrit has appeared ahead of you. Look through the scope of the PCML, place the tip of the red triangle near the center of the target, and fire.";
			displayName = "Flattened Trajectory";
			image = "";
			tip = "The anti-tank version of the PCML uses an overfly top attack (OTA) flight profile. It will 'pop-up' above the sight line. This enables it to fire its penetrator warhead directly down into the target.<br/>";
		};
		class PCMLOTAPLOS {
			arguments[] = {{{"LockTargets"}}};
			description = "Good job. Grab a new launcher.<br/><br/>The second guidance mode is called predicted line-of-sight (PLOS). In this mode, the missile will attempt to fly to the future location of the target.<br/>%1%2Another target has appeared. To use PLOS guidance, depress the %11 plunger and continue holding it as you steadily track the target for 2 to 3 seconds. Fire without releasing the plunger.<br/>%1%2A steady hand, consistent movement by the target, and an appropriate range are all necessary for success with PLOS.";
			displayName = "Predicted Line-of-Sight";
			image = "";
			tip = "For good results, PLOS should only be used against targets at ranges less than 200 meters.<br/>";
		};
		class PCMLMPV {
			arguments[] = {};
			description = "Good aiming. You've mastered the PCML!<br/><br/>Note that a second variant of the PCML exists with a direct attack, multi-purpose warhead (PCML MPV). Employment of this weapon is the same; however, the pop-up will not occur.<br/><br/>You can leave the mission when you're ready.";
			displayName = "Multi-Purpose Variant";
			image = "";
			tip = "You can find more PCML launchers in an ammunition crate behind you.<br/>";
		};
	};
};