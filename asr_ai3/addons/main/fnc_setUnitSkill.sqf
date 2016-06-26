//sets random skill depending on unit's class
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];
private["_t","_sc","_sa","_i","_st","_sv","_fc","_fnc_getskillvalue"];

_fnc_getskillvalue = {
	private["_sv","_min","_var"];
	_min = _this select 0; //min skill
	_var = _this select 1; //max variance
	(_min + random _var)
};

_t = typeOf _unit;
_sc = [configfile>>"cfgvehicles">>_t>>"asr_ai_level", "number", 6] call CBA_fnc_getConfigEntry;
TRACE_2("config",_unit,_sc);

// also check for override setting
_i = 0;
{
	if (_t in _x || {{if (_t isKindOf _x) exitWith {true}; false} forEach _x}) exitWith {
		_sc = _i;
		TRACE_2("override",_unit,_i);
	};
	INC(_i);
}
forEach GVAR(levels_units);

_sa = GVAR(sets) select _sc; // get skill array for this unit
if (count _sa == 0) exitWith {}; // do not run if empty
if (isNull _unit) exitWith {};

_fc = 1;
if (count GVAR(factions) > 0) then {
	{ if (faction _unit == _x select 0) exitWith {_fc = _x select 1} } forEach GVAR(factions); TRACE_2("Faction coefficient",_unit,_fc);
};

_i = 0;
while {_i < count _sa} do {
	_st = _sa select _i; // skill type
	INC(_i);
	switch (_st) do {
		case "general": {
			{
				_sv = ((_sa select _i) call _fnc_getskillvalue) * _fc;
				[_unit,[_x,_sv]] call FUNC(setSkill);
			}
			forEach ["courage","reloadSpeed","commanding"];
		};
		case "aiming": {
			{
				_sv = ((_sa select _i) call _fnc_getskillvalue) * _fc;
				[_unit,[_x,_sv]] call FUNC(setSkill);
			}
			forEach ["aimingAccuracy","aimingShake","aimingSpeed"];
		};
		case "spotting": {
			{
				_sv = ((_sa select _i) call _fnc_getskillvalue) * _fc;
				[_unit,[_x,_sv]] call FUNC(setSkill);
			}
			forEach ["spotDistance","spotTime"];
		};
	};
	INC(_i);
};
