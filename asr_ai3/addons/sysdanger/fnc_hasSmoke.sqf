//#define DEBUG_MODE_FULL
#include "script_component.hpp"
#define __SMOKEMUZZLES ["SmokeShellMuzzle", "SmokeShellYellowMuzzle", "SmokeShellGreenMuzzle", "SmokeShellRedMuzzle", "SmokeShellPurpleMuzzle", "SmokeShellOrangeMuzzle", "SmokeShellBlueMuzzle"]
PARAMS_1(_unit);
private ["_thismuz","_thismags","_bingo"];
scopeName "hasmoke_main";
// look for smoke grenades

{ // cycle known smoke throwing muzzles
	_thismuz = _x;
	if (isArray (configFile >> "CfgWeapons" >> "Throw" >> _thismuz >> "magazines")) then {
		_thismags = getArray (configFile >> "CfgWeapons" >> "Throw" >> _thismuz >> "magazines");
		{
			if (_x in (magazines _unit)) then {
				_bingo = _x;
				breakTo "hasmoke_main";
			};
		} forEach _thismags;
	};
} forEach __SMOKEMUZZLES;

if (isNil "_bingo") exitWith {[]};

TRACE_3("Got smoke nade",_unit,_thismuz,_bingo);

[_thismuz,_bingo]
