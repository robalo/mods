// sets random skill depending on unit's class
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private["_t","_sc","_sa","_i","_st","_sv","_fc","_fnc_getskillvalue"];
PARAMS_1(_unit);

_fnc_getskillvalue = {
	private["_sv","_min","_var"];
	_min = _this select 0; //min skill
	_var = _this select 1; //max variance
	_sv = if (random 50 < 1) then {_min + _var} else {_min + random _var};
	_sv
};

_t = typeOf _unit;
_sc = [configfile>>"cfgvehicles">>_t>>"asr_ai_level", "number", 6] call CBA_fnc_getConfigEntry;
TRACE_2("config",_unit,_sc);

// also check for override setting
_i = 0;
{
	if (_t in _x) exitWith {
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
{	if (faction _unit == _x select 0) exitWith {_fc = _x select 1} } forEach GVAR(factions);
TRACE_2("Faction coefficient",_unit,_fc);

_i = 0;
while {_i < count _sa} do {
	_st = _sa select _i; // skill type
	INC(_i);
	switch (_st) do {
		case "aiming": {
			{	_sv = ((_sa select _i) call _fnc_getskillvalue) * _fc;
				_unit setSkill [_x,_sv]; TRACE_3("",_unit,_x,_sv);
			}	forEach ["aimingAccuracy","aimingShake","aimingSpeed"];
		};
		case "spotting": {
			{	_sv = ((_sa select _i) call _fnc_getskillvalue) * _fc;
				_unit setSkill [_x,_sv];
			}	forEach ["spotDistance","spotTime"];
		};
		case "general": {
			{	_sv = ((_sa select _i) call _fnc_getskillvalue) * _fc;
				_unit setSkill [_x,_sv];
			}	forEach ["courage","reloadSpeed","commanding","general"];
		};
	};
	INC(_i);
};

_unit setVariable [QGVAR(configured),true];

private "_log_skill";
_log_skill = {
	private "_sv";
	_sv = skill _unit;
	diag_log format["Unit %1, type %2, faction %3 with coef %4, has skill %5", _unit, typeOf _unit, faction _unit, _fc, _sv];
	{
		_sv = _unit skillFinal _x;
		diag_log format["%1 | Unit %2 has final sub-skill %3 value %4",time,_unit,_x,_sv];
	}
	forEach ["aimingAccuracy","aimingShake","aimingSpeed","spotDistance","spotTime","courage","reloadSpeed","commanding","general"];
};

#ifndef DEBUG_MODE_FULL
if (GVAR(debug) != 0) then {
#endif
	call _log_skill;
#ifndef DEBUG_MODE_FULL
};
#endif
