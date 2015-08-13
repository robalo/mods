//#define DEBUG_MODE_FULL
#include "script_component.hpp"
LOG(MSG_INIT);

if (isServer) then {
	ASR_AI3_SETTINGS = compile preprocessFileLineNumbers "\userconfig\asr_ai3\asr_ai3_settings.sqf";
	if (!isNil "ASR_AI3_SETTINGS") then {
		[] call ASR_AI3_SETTINGS; // Load the global defaults
	};
	ASR_AI3_SETTINGS_SS = compile preprocessFileLineNumbers "\userconfig\asr_ai3\asr_ai3_settings_ss.sqf";
	if (!isNil "ASR_AI3_SETTINGS_SS") then {
		[] call ASR_AI3_SETTINGS_SS; // Load the server-side defaults
	};
};

ASR_AI_SETDEFAULT(enabled,1);
ASR_AI_SETDEFAULT(radiorange,500);
ASR_AI_SETDEFAULT(seekcover,1);
ASR_AI_SETDEFAULT(usebuildings,0.8);
ASR_AI_SETDEFAULT(getinweapons,0.5);
ASR_AI_SETDEFAULT(packNVG,1);
ASR_AI_SETDEFAULT(disableAIPGfatigue,1);
ASR_AI_SETDEFAULT(onteamswitch,1);
ASR_AI_SETDEFAULT(copymystance,1);
ASR_AI_SETDEFAULT(debug,0);

ASR_AI_SETDEFAULT(setskills,1);
ASR_AI_SETDEFAULT(rearm,40);
ASR_AI_SETDEFAULT(joinlast,2);
ASR_AI_SETDEFAULT(removegimps,300);
ASR_AI_SETDEFAULT(sets,[]);
ASR_AI_SETDEFAULT(levels_units,[]);
ASR_AI_SETDEFAULT(factions,[]);

if (count GVAR(sets) < 10) then {GVAR(sets) = [["aiming",[1,0],"spotting",[1,0],"general",[1,0]],["aiming",[0.4,0.1],"spotting",[0.4,0.2],"general",[0.8,0.2]],["aiming",[0.35,0.1],"spotting",[0.35,0.2],"general",[0.75,0.2]],["aiming",[0.3,0.1],"spotting",[0.3,0.2],"general",[0.7,0.2]],["aiming",[0.25,0.1],"spotting",[0.25,0.2],"general",[0.65,0.2]],["aiming",[0.2,0.1],"spotting",[0.2,0.2],"general",[0.6,0.2]],["aiming",[0.15,0.1],"spotting",[0.15,0.2],"general",[0.55,0.2]],["aiming",[0.1,0.1],"spotting",[0.1,0.2],"general",[0.5,0.2]],["aiming",[0.25,0.1],"spotting",[0.5,0.2],"general",[0.7,0.2]],["aiming",[0.2,0.1],"spotting",[0.4,0.2],"general",[0.6,0.2]],["aiming",[0.6,0.4],"spotting",[0.8,0.2],"general",[0.8,0.2]]]};
if (count GVAR(levels_units) < 10) then {GVAR(levels_units) = [[],[],[],[],[],[],[],[],[],[],[]]};

ASR_AI_SETDEFAULT(gunshothearing,1.1);
GVAR(loudrange) = 1500 * GVAR(gunshothearing);

GVAR(needmax) = [ // The level of supplies the unit will try to maintain
	3, // mags for primary weapon
	1  // fak
];

GVAR(configQueue) = [];

FUNC(isValidUnit) = {!(isNull _this) && {alive _this} && {!(_this isKindOf "Civilian")} && {!(_this getVariable ["asr_ai_exclude", false])}};
FUNC(isValidUnitC) = {_this call FUNC(isValidUnit) && {!(_this call FUNC(isUnc))}};
FUNC(isMedic) = {getNumber(configFile >>"CfgVehicles">>(typeOf _this)>>"attendant") == 1};
FUNC(getAlive) = {[units _this, {alive _x}] call BIS_fnc_conditionalSelect};

PREP(isUnc);
PREP(getWeaponType);
PREP(isNearStuff);
PREP(getNearest);
PREP(nearFactionGroups);
PREP(hasRadio);
PREP(hasPlayer);
PREP(setUnitSkill);
PREP(addUnitToQueue);
PREP(configureUnit);
PREP(firedEH);
PREP(killedEH);
PREP(sendInfo);
PREP(broadcastInfo);
PREP(canCover);
PREP(findCover);
PREP(moveToCover);
PREP(getInWeaponsEH);
PREP(handleHit);
PREP(shootingStance);
PREP(showHideNVG);
PREP(setupGear);
PREP(reactDanger);
PREP(reveal);
PREP(isUnderRoof);
PREP(pistolToPrimary);
PREP(inventoryClosed);
PREP(setSkill);
PREP(canMountAIGunner);
PREP(onTeamSwitch);
PREP(isReady);
PREP(getCompatMags);
PREP(countItems);
PREP(inventoryCheck);
PREP(rearm);
