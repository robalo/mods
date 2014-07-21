//#define DEBUG_MODE_FULL
#include "script_component.hpp"

// return all mags for a weapon in this form: [[primaries],[secondaries]]
PARAMS_1(_w);
private["_muz","_mags","_pri","_sec"];
_muz = getArray(configFile >> "CfgWeapons" >> _w >> "muzzles");
_pri = [];
_sec = [];
{ // for each weapon muzzle
	if (toLower _x == "this") then {
		_mags = getArray(configFile >> "CfgWeapons" >> _w >> "magazines");
	} else {
		_mags = getArray(configFile >> "CfgWeapons" >> _w >> _x >> "magazines");
	};
	{ // for each magazine type, check slot size
		if (getNumber(configFile >> "CfgMagazines" >> _x >> "type") > 128) then {
			if !([_x,_pri] call FUNC(found)) then {_pri set [count _pri, _x]};
		}	else {
			if !([_x,_sec] call FUNC(found)) then {_sec set [count _sec, _x]};
		};
	} forEach _mags;
} forEach _muz;

[_pri,_sec]
