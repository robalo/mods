//sets random skill depending on unit's class
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];
private ["_j","_st","_sv"];

private _fnc_getskillvalue = {
    params ["_min", "_var"]; //min skill, max variance
	(_min + random _var)
};

private _t = typeOf _unit;
private _sc = [configfile>>"cfgvehicles">>_t>>"asr_ai_level", "number", 6] call CBA_fnc_getConfigEntry;
TRACE_2("config",_unit,_sc);

// also check for override setting
private _i = 0;
{
	if (_t in _x || {{_t isKindOf _x} count _x > 0}) exitWith {
		_sc = _i;
		TRACE_2("override",_unit,_i);
	};
	INC(_i);
}
forEach GVAR(levels_units);

private _sa = GVAR(sets) select _sc; // get skill array for this unit
if (_sa isEqualTo []) exitWith {}; // do not run if empty

private _fc = 1;
if (count GVAR(factions) > 0) then {
	{ if (faction _unit == _x select 0) exitWith {_fc = _x select 1} } forEach GVAR(factions); TRACE_2("Faction coefficient",_unit,_fc);
};

// if unit is in player group and team super AI is set, put unit in skill class 0
if (GVAR(teamsuperai) && {_unit call FNCMAIN(hasPlayer)}) then {
    _unit setSkill 1;
    _sc = 0;
    _fc = 1;
};

for "_i" from 0 to (count _sa) step 2 do {
    _st = _sa select _i; // skill type
    _j = _i + 1;
    call {
        if (_st == "general") exitWith {
            {
                _sv = ((_sa select _j) call _fnc_getskillvalue) * _fc;
                [_unit,[_x,_sv]] call FUNC(setSkill);
            }
            forEach ["courage","commanding"];
        };
        if (_st == "aiming") exitWith {
            {
                _sv = ((_sa select _j) call _fnc_getskillvalue) * _fc;
                [_unit,[_x,_sv]] call FUNC(setSkill);
            }
            forEach ["aimingAccuracy","aimingShake","aimingSpeed"];
        };
        if (_st == "spotting") exitWith {
            {
                _sv = ((_sa select _j) call _fnc_getskillvalue) * _fc;
                [_unit,[_x,_sv]] call FUNC(setSkill);
            }
            forEach ["spotDistance","spotTime"];
        };
    };
};
