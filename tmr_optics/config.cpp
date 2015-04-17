#define true	1
#define false	0

class CfgPatches {
	class tmr_optics {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.60;
		requiredAddons[] = {A3_Weapons_F, A3_Weapons_F_beta, A3_Weapons_F_gamma, A3_Weapons_F_Acc, A3_Weapons_F_Beta_Acc, A3_Characters_F, tmr_core, asdg_jointrails};
		version = 0.1;
		author[] = {"Taosenai","Robalo"};
		authorUrl = "http://www.ryanschultz.org/tmr/";
	};
};

class CfgFunctions {
	class tmr_optics {
		tag = "tmr_optics";
		class functions	{
			file = "\tmr_optics\f";
			class preInit {
				preInit = 1; // 1 to call the function upon mission start, before objects are initialized. Passed arguments are ["preInit"]
			};
			class postInit {
				postInit = 1; // 1 to call the function upon mission start, after objects are initialized. Passed arguments are ["postInit"]
			};
		};
	};
};

class Extended_FiredBIS_EventHandlers {
	class CAManBase {
		class tmr_optics {
			clientFiredBIS = "if (hasInterface) then {_this spawn tmr_optics_fnc_scopeRecoil_firedEH}";
		};
	};
};

class CfgOpticsEffect {
	class TMR_OpticsRadBlur1 {
		type = "radialblur";
		params[] = {0.019, 0.019, 0.16, 0.70};
		priority = 950;
	};
};

class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
	class compatibleItems {
		optic_Hamr_TMR = 1;
		optic_Arco_TMR = 1;
		optic_MRCO_TMR = 1;
	};
};

class CfgWeapons {
	class ItemCore;
	class InventoryOpticsItem_Base_F;

	class optic_Hamr : ItemCore {
		scope = 1;
		scopeArsenal = 0;
		displayName = "HAMR 4x";
		descriptionShort = "High Accuracy Multi-Range Optic<br />Magnification: 4x<br />Reticle: CM-RW 6.5mm";

		class ItemInfo : InventoryOpticsItem_Base_F {
			class OpticsModes {
				class Hamr2Collimator {
					opticsPPEffects[] = {"", ""};
				};
				class Hamr2Scope {
					visionmode[] = {"Normal"};
				};
			};
		};
		MRT_SwitchItemNextClass = "optic_Hamr_TMR";
		MRT_SwitchItemPrevClass = "optic_Hamr_TMR";
		MRT_SwitchItemHintText = "";
	};

	class optic_Hamr_TMR : optic_Hamr {
		scope = 2;
		scopeArsenal = 2;
		author = "Bohemia Interactive";
		weaponInfoType = "RscWeaponTMR";

		tmr_optics_enhanced = 1;
		tmr_optics_reticle = "\tmr_optics\data\hamr\hamr-reticle65_ca.paa";
		tmr_optics_reticleIllum = "\tmr_optics\data\hamr\hamr-reticle65Illum_ca.paa";
		tmr_optics_body = "\tmr_optics\data\hamr\hamr-body_ca.paa";
		tmr_optics_bodyNight = "\tmr_optics\data\hamr\hamr-bodyNight_ca.paa";
		
		class ItemInfo : ItemInfo {
			class OpticsModes : OpticsModes {	
				class Hamr2Collimator : Hamr2Collimator {
					tmr_optics_enhanced = 0;
					opticsPPEffects[] = {"", "", ""};
				};
				class Hamr2Scope : Hamr2Scope {
					opticsppeffects[] = {"OpticsCHAbera2", "OpticsBlur1", "TMR_OpticsRadBlur1"};
					opticszoominit = 0.0872664626;
					opticszoommax = 0.0872664626;
					opticszoommin = 0.0872664626;
					discretefov[] = {0.0872664626};
					discreteinitindex = 0;
					usemodeloptics = 1;
					modeloptics = "\tmr_optics\data\tmr_optics_reticle80.p3d";
				};
			};
		};
		MRT_SwitchItemNextClass = "optic_Hamr";
		MRT_SwitchItemPrevClass = "optic_Hamr";
		MRT_SwitchItemHintText = "";
	};

	class optic_Arco : ItemCore {
		scope = 1;
		scopeArsenal = 0;
		displayname = "ARCO 4x";
		descriptionshort = "Advanced Rifle Combat Optic<br />Magnification: 4x<br />Reticle: SpecterDR 6.5mm";
		class ItemInfo : InventoryOpticsItem_Base_F {
			class OpticsModes {
				class ARCO2collimator {
					opticsPPEffects[] = {"", ""};
				};
				class ARCO2scope : ARCO2collimator {
					visionmode[] = {"Normal"};
				};
			};
		};
		MRT_SwitchItemNextClass = "optic_Arco_TMR";
		MRT_SwitchItemPrevClass = "optic_Arco_TMR";
		MRT_SwitchItemHintText = "";
	};

	class optic_Arco_TMR : optic_Arco {
		scope = 2;
		scopeArsenal = 2;
		author = "Bohemia Interactive";
		weaponInfoType = "RscWeaponTMR";

		tmr_optics_enhanced = 1;
		tmr_optics_reticle = "\tmr_optics\data\arco\arco-reticle65_ca.paa";
		tmr_optics_reticleIllum = "\tmr_optics\data\arco\arco-reticle65Illum_ca.paa";
		tmr_optics_body = "\tmr_optics\data\arco\arco-body_ca.paa";
		tmr_optics_bodyNight = "\tmr_optics\data\arco\arco-bodyNight_ca.paa";

		class ItemInfo: ItemInfo {
			class OpticsModes : OpticsModes {
				class ARCO2collimator : ARCO2collimator {
					tmr_optics_enhanced = 0;
					opticsppeffects[] = {"", "", ""};
				};
				class ARCO2scope: ARCO2scope {
					opticsppeffects[] = {"OpticsCHAbera2", "OpticsBlur1", "TMR_OpticsRadBlur1"};
					opticszoominit = 0.0872664626; // 0.0872664626 rad = 5 degrees
					opticszoommax = 0.0872664626; // SpecterDR 4x is 6 degrees
					opticszoommin = 0.0872664626; // Scope graphic in game covers 1 degree
					discretefov[] = {0.0872664626};
					discreteinitindex = 0;
					usemodeloptics = 1;
					modeloptics = "\tmr_optics\data\tmr_optics_reticle80.p3d";
				};
			};
		};
		MRT_SwitchItemNextClass = "optic_Arco";
		MRT_SwitchItemPrevClass = "optic_Arco";
		MRT_SwitchItemHintText = "";
	};

	class optic_MRCO : ItemCore {
		scope = 1;
		scopeArsenal = 0;
		displayName = "MRCO 1x/4x";
		descriptionShort = "Medium Range Combat Optic<br />Magnification: 1x/4x<br />Reticle: Pitbull Gen II 5.56mm";
		class ItemInfo : InventoryOpticsItem_Base_F {
			class OpticsModes {
				class MRCOcq {
					opticsPPEffects[] = {"", ""};
				};
				class MRCOscope {
					visionmode[] = {"Normal"};
				};
			};
		};
		MRT_SwitchItemNextClass = "optic_MRCO_TMR";
		MRT_SwitchItemPrevClass = "optic_MRCO_TMR";
		MRT_SwitchItemHintText = "";
	};

	class optic_MRCO_TMR : optic_MRCO {
		scope = 2;
		scopeArsenal = 2;
		author = "Bohemia Interactive";
		weaponInfoType = "RscWeaponTMR";

		tmr_optics_enhanced = 1;
		tmr_optics_reticle = "\tmr_optics\data\mrco\mrco-reticle556_ca.paa";
		tmr_optics_reticleIllum = "\tmr_optics\data\mrco\mrco-reticle556Illum_ca.paa";
		tmr_optics_body = "\tmr_optics\data\mrco\mrco-body_ca.paa";
		tmr_optics_bodyNight = "\tmr_optics\data\mrco\mrco-bodyNight_ca.paa";
		
		class ItemInfo : ItemInfo {
			class OpticsModes : OpticsModes {
				class MRCOcq : MRCOcq {
					tmr_optics_enhanced = 0;
					opticsppeffects[] = {"", "", ""};
				};
				class MRCOscope : MRCOscope {
					opticsppeffects[] = {"OpticsCHAbera2", "OpticsBlur2", "TMR_OpticsRadBlur1"};
					opticszoominit = 0.0872664626;
					opticszoommax = 0.0872664626;
					opticszoommin = 0.0872664626;
					discretefov[] = {0.0872664626};
					discreteinitindex = 0;
					usemodeloptics = 1;
					modeloptics = "\tmr_optics\data\tmr_optics_reticle80.p3d";
				};
			};
		};
		MRT_SwitchItemNextClass = "optic_MRCO";
		MRT_SwitchItemPrevClass = "optic_MRCO";
		MRT_SwitchItemHintText = "";
	};

	class optic_LRPS : ItemCore {
		descriptionshort = "Nightforce NXS Riflescope<br />Magnification: 5.5-22x";
		displayname = "NXS 5.5-22x";
		weaponinfotype = "RscWeaponTMR";

		tmr_optics_enhanced = 1;
		tmr_optics_reticle = "\tmr_optics\data\sos\sos-reticleMLR_ca.paa";
		tmr_optics_reticleIllum = "\tmr_optics\data\sos\sos-reticleMLRIllum_ca.paa";
		tmr_optics_body = "\tmr_optics\data\sos\sos-body_ca.paa";
		tmr_optics_bodyNight = "\tmr_optics\data\sos\sos-bodyNight_ca.paa";

		class ItemInfo: InventoryOpticsItem_Base_F {
			modeloptics = "\tmr_optics\data\tmr_optics_reticle80.p3d";
			weaponinfotype = "RscWeaponRangeZeroingFOV";
			opticType = 2; // Sniper optics

			class OpticsModes {
				// Based on Nightforce NXS 5.5-22 scope
				class Snip {
					cameradir = "";
					discretedistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300};
					discretedistanceinitindex = 0;
					discreteinitindex = 0;
					distancezoommax = 2300;
					distancezoommin = 100;
					memorypointcamera = "opticView";
					modeloptics = "\tmr_optics\data\tmr_optics_reticle80.p3d";
					opticsdisableperipherialvision = 1;
					opticsdisplayname = "SOS";
					opticsflare = 1;
					opticsid = 1;
					opticsppeffects[] = {"OpticsCHAbera1", "OpticsBlur1", "TMR_OpticsRadBlur1"};
					// How to determine opticszoom
					// First do the basic math based on the listed FOV of the scope to 
					// get a baseline FOV
					// 0.1 meter at 100 meters = 1 mrad
					//
					// 5.5x FOV -- 5.3 m at 100 m = 53 mrad
					// = 0.053 rad = 3.037 deg FOV

					// 22x FOV -- 1.4 m at 100m = 14 mrad
					// = 0.014 rad = 0.802 deg

					// The FOV you give the engine is based on a rather larger scope outline, so we
					// have to do this extra work ourselves.

					// At 1680x1050
					// The width of a TMR optic viewfield is 864px
					// The engine viewport width (which is what the below FOV is based on) is 980
					// (864/980) = (FOV to give engine / true FOV of optic)
					// 864/980 * 0.053 = 0.04673
					// 864/980 * 0.014 = 0.01234

					// Measured experimentally, these values seem quite right.
					// Certainly they're close enough after you account for pixel density, etc.

					opticszoominit = 0.01234; 
					opticszoommax = 0.04673;
					opticszoommin = 0.01234;
					discretefov[] = {};
					usemodeloptics = 1;
					visionmode[] = {"Normal"};
				};
			};
		};
	};

	class optic_Yorris : ItemCore {
		descriptionshort = "Burris FastFire II Red Dot Sight<br />Magnification: 1x";
		displayname = "FastFire II";
	};

	class optic_MRD : ItemCore {
		descriptionshort = "EOTech MRDS Red Dot Sight<br />Magnification: 1x";
		displayname = "MRDS";
	};

	class optic_Holosight : ItemCore {
		descriptionshort = "EOTech XPS3 Holographic Sight<br />Magnification: 1x";
		displayname = "XPS3 Holo";
	};

	class optic_Holosight_smg : ItemCore {
		descriptionshort = "EOTech XPS3 Holographic Sight<br />Magnification: 1x";
		displayname = "XPS3 Holo SMG";
	};
};

class RscControlsGroup;
class RscOpticsText;
class RscOpticsValue;
class RscInGameUI {
	class RscUnitInfo;
	class RscWeaponZeroing;
	class RscWeaponTMR : RscWeaponZeroing {
		idd = -1;
		controls[] = {"CA_Zeroing",  "CA_FOVMode"};

		onLoad ="with uiNameSpace do { TMR_OpticsIGUI = _this select 0 }";
		
		class CA_FOVMode : RscOpticsValue {
			idc = 154;
			style = 2;
			colorText[] = {0, 0, 0, 0};
			x = 0;
			y = 0;
			w = 0;
			h = 0;
		};
	};
};

class TMR_RscPicture {
	type = 0;
	style = 48;
	idc = -1;
	colorBackground[] = {1, 1, 1, 1};
	colorText[] = {1, 1, 1, 1};
	font = "PuristaMedium";
	size = 0;
	sizeEx = 1;
	lineSpacing = 1.0; 
};

class RscTitles {
	class TMR_Optics_Scope {
		idd = -1;
		onLoad = "with uiNameSpace do { TMR_Optics_Scope = _this select 0 };";
		onUnload = "";
		movingEnable = 1;
		duration = 10000;
		controls[] = {"Reticle", "ReticleNight", "BodyNight", "Body"};

		class Reticle : TMR_RscPicture {
			idc = 1;
			movingEnable = 1;
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1,1,1,1};
			fade = 0;
			text = "";
			x = (SafeZoneXAbs + SafeZoneWAbs/2 - (SafeZoneWAbs / ((getResolution select 0) / (getResolution select 1)))/2);
			y = SafeZoneY;
			w = SafeZoneWAbs / ((getResolution select 0) / (getResolution select 1));
			h = SafeZoneH;
		};

		class ReticleNight : Reticle {
			idc = 2;
			text = "";
		};

		class BodyNight : Reticle {
			idc = 5;
			text = "";
			x = (SafeZoneXAbs + SafeZoneWAbs/2 - (SafeZoneWAbs / ((getResolution select 0) / (getResolution select 1))));
			y = SafeZoneY - (SafeZoneH/2);
			w = SafeZoneWAbs / ((getResolution select 0) / (getResolution select 1)) * 2;
			h = SafeZoneH * 2;
		};

		class Body : BodyNight {
			idc = 6;
			text = "";
		};
	};
};

class PreloadTextures {
	class CfgWeapons {
		class optic_Hamr_TMR {
			tmr_optics_body= "*";
			tmr_optics_bodyNight = "*";
			tmr_optics_reticle = "*";
			tmr_optics_reticleIllum = "*";
		};
		class optic_Arco_TMR {
			tmr_optics_body= "*";
			tmr_optics_bodyNight = "*";
			tmr_optics_reticle = "*";
			tmr_optics_reticleIllum = "*";
		};
		class optic_MRCO_TMR {
			tmr_optics_body= "*";
			tmr_optics_bodyNight = "*";
			tmr_optics_reticle = "*";
			tmr_optics_reticleIllum = "*";
		};
		class optic_LRPS {
			tmr_optics_body= "*";
			tmr_optics_bodyNight = "*";
			tmr_optics_reticle = "*";
			tmr_optics_reticleIllum = "*";
		};
	};
};
