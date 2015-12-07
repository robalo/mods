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

//how far we're allowed to get to cover
ASR_AI_SETDEFAULT(MAX_DIST_TO_COVER, 50)
ASR_AI_SETDEFAULT(AUTO_ATTACK_WITHIN, 50)
//an object must be at least this tall to be considered for cover
ASR_AI_SETDEFAULT(MIN_HEIGHT_OBJ_TO_CONSIDER, 0.2)
ASR_AI_SETDEFAULT(CHANCE_USE_BUILDING_POS, 0.2)


//time until we're allowed to react to danger again
ASR_AI_SETDEFAULT(DT_OUTSIDE, 3);
ASR_AI_SETDEFAULT(DT_IN_STRUCT_HIT, 3)
ASR_AI_SETDEFAULT(DT_IN_STRUCT_NOT_HIT, 3);

//how often the AI is allowed to re-evaluate its cover while outside
ASR_AI_SETDEFAULT(RESELECT_COVER_TIME, 30);
ASR_AI_SETDEFAULT(NO_COVER_FOR_DANGER_WITHIN, 100);
//time until counter attack
ASR_AI_SETDEFAULT(DEFAULT_ATTACK_TIME, 45);
ASR_AI_SETDEFAULT(AT_OUTSIDE, 90);
ASR_AI_SETDEFAULT(AT_IN_STRUCT_HIT, 45);
ASR_AI_SETDEFAULT(AT_IN_STRUCT_NOT_HIT, 45);


//These trigger if unit is not told to go to cover
ASR_AI_SETDEFAULT(DEFAULT_ATTACK_DISTANCE_INDOORS, 50);
ASR_AI_SETDEFAULT(DEFAULT_ATTACK_DISTANCE_OUTDOORS, 250);

//counter attack max disatance
ASR_AI_SETDEFAULT(AD_OUTSIDE, 250);
ASR_AI_SETDEFAULT(AD_IN_STRUCT_HIT, 50);
ASR_AI_SETDEFAULT(AD_IN_STRUCT_NOT_HIT, 50);



ASR_AI_SETDEFAULT(DEBUG_NAME, "pooter");

GVAR(DC_NEED_COVER) = [2,4,9];
GVAR(DC_ATTACK) =[2,3,4,6,9];



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

PREP(pt_checkVis);
PREP(pt_downPos);
PREP(pt_findPossibleCenter);
PREP(pt_getCoverPos);
PREP(pt_getCoverPosUnknownEnemy);
PREP(pt_getClosestBuildingPos);
PREP(pt_getUnitsThatNeedCover);
PREP(pt_goToNextBuildingPos);
PREP(pt_isCoverValid);
PREP(pt_moveToPoint);
PREP(pt_reactDanger_attack);
PREP(pt_reactDanger_inStruct);
PREP(pt_reactDanger_inStruct_amVis);
PREP(pt_reactDanger_outStruct);
PREP(pt_reactDanger);
PREP(pt_reset_pos);
PREP(pt_calculatePos);
PREP(pt_setStatusText);