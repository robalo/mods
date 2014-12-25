//#define DEBUG_MODE_FULL
#include "script_component.hpp"

PARAMS_1(_unit);
private ["_w","_aivar","_newo"];
_w = primaryWeapon _unit;
if (_w == "") exitWith {};

_w = (primaryWeaponItems _unit) select 2; // optics
if (_w == "") exitWith {};

_aivar = [configFile>>"CfgWeapons">>_w>>"asr_ai_variants", "array", []] call CBA_fnc_getConfigEntry;
if (count _aivar < 2) exitWith {};
if ({_x == ""} count _aivar > 0) exitWith {};
if ({_x == _w} count _aivar == 0) exitWith {};

//if (isPlayer _unit) then {
//	_newo = _aivar select 0;
//} else {
	if (sunOrMoon < 1) then { // dark
		_newo = _aivar select 1;
	} else {
		_newo = _aivar select 0;
	};
//};

if (_w != _newo) then {
	TRACE_2("Change Optic",_unit,_newo);
	_unit addPrimaryWeaponItem _newo;
};
