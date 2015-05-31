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
ASR_AI_SETDEFAULT(radiorange,700);
ASR_AI_SETDEFAULT(seekcover,1);
ASR_AI_SETDEFAULT(throwsmoke,0.4);
ASR_AI_SETDEFAULT(usebuildings,0.5);
ASR_AI_SETDEFAULT(getinweapons,0.5);
ASR_AI_SETDEFAULT(packNVG,1);
ASR_AI_SETDEFAULT(debug,0);

ASR_AI_SETDEFAULT(setskills,1);
ASR_AI_SETDEFAULT(dynsvd,1);
ASR_AI_SETDEFAULT(rearm,40);
ASR_AI_SETDEFAULT(joinlast,2);
ASR_AI_SETDEFAULT(removegimps,300);
ASR_AI_SETDEFAULT(onteamswitch,1);
ASR_AI_SETDEFAULT(sets,[]);
ASR_AI_SETDEFAULT(levels_units,[]);
ASR_AI_SETDEFAULT(factions,[]);

if (count GVAR(sets) < 10) then {GVAR(sets) = [["aiming",[1,0],"spotting",[1,0],"general",[1,0]],["aiming",[0.4,0.1],"spotting",[0.4,0.2],"general",[0.8,0.2]],["aiming",[0.35,0.1],"spotting",[0.35,0.2],"general",[0.75,0.2]],["aiming",[0.3,0.1],"spotting",[0.3,0.2],"general",[0.7,0.2]],["aiming",[0.25,0.1],"spotting",[0.25,0.2],"general",[0.65,0.2]],["aiming",[0.2,0.1],"spotting",[0.2,0.2],"general",[0.6,0.2]],["aiming",[0.15,0.1],"spotting",[0.15,0.2],"general",[0.55,0.2]],["aiming",[0.1,0.1],"spotting",[0.1,0.2],"general",[0.5,0.2]],["aiming",[0.25,0.1],"spotting",[0.5,0.2],"general",[0.7,0.2]],["aiming",[0.2,0.1],"spotting",[0.4,0.2],"general",[0.6,0.2]],["aiming",[0.6,0.4],"spotting",[0.8,0.2],"general",[0.8,0.2]]]};
if (count GVAR(levels_units) < 10) then {GVAR(levels_units) = [[],[],[],[],[],[],[],[],[],[],[]]};

ASR_AI_SETDEFAULT(gunshothearing,1);
GVAR(loudrange) = 1500 * GVAR(gunshothearing);

PREP(isUnc);
PREP(isValidUnit);
PREP(isValidUnitC); //conscious and valid
PREP(groupInit);
PREP(isMedic);
PREP(getWeaponType);
PREP(isNearStuff);
PREP(getNearest);
PREP(nearFactionGroups);
PREP(hasRadio);
PREP(hasSmoke);
PREP(setUnitSkill);
PREP(modUnitSkill);
PREP(changeVD);
PREP(firedEH);
PREP(killedEH);
PREP(removeGimp);
PREP(sendInfo);
PREP(broadcastInfo);
PREP(throwSmoke);
PREP(canCover);
PREP(findCover);
PREP(moveToCover);
PREP(getInWeaponsEH);
PREP(getInWeapons);
PREP(handleHit);
PREP(shootingStance);
PREP(showHideNVG);
PREP(setupGear);
PREP(reactDanger);
PREP(reveal);

FUNC(pistolToPrimary) = {
	PARAMS_1(_unit);
	_pw = primaryWeapon _unit;
	if (_pw != "" && {_pw != currentWeapon _unit}) then {
		_unit action ["handGunOff", _unit];
	};
};

FUNC(inventoryClosed) = {
	PARAMS_1(_unit);
	if (!(isPlayer _unit) && {local _unit} && {_unit call FUNC(isValidUnitC)}) then {
		_unit call FUNC(pistolToPrimary);
	};
};

FUNC(setSkill) = {
	PARAMS_2(_unit,_skillset);
	_unit setSkill _skillset;
	if (GVAR(debug) > 0) then {
		private "_type"; _type = _skillset select 0;
		diag_log format["%1 | Unit %2 sub-skill %3 set: %4, get: %5, skillFinal: %6",diag_ticktime,_unit,_type,_skillset select 1,_unit skill _type,_unit skillFinal _type];
	};
};

FUNC(getAlive) = {
	private "_return";
	_return = [];
	{if (alive _x) then {_return pushBack _x}} foreach (units _this);
	_return
};

FUNC(canMountAIGunner) = {
	if (locked _this == 2) exitWith {false};
	if (_this emptypositions "Gunner" > 0) exitWith {true};
	{!alive (_x select 0)} count fullCrew [_this, "gunner"] > 0;
};

FUNC(onTeamSwitch) = {
	private "_grp";
	_grp = group player;
	_grp selectLeader player;
	{_x enableFatigue (isPlayer _x)} forEach (units _grp);
};

GVAR(smokin) = false;

GVAR(needmax) = [ // The level of supplies the unit will try to maintain
	3, // mags for primary weapon
	1  // fak
];

PREP(isReady);
PREP(getCompatMags);
PREP(countItems);
PREP(inventoryCheck);
PREP(rearm);
