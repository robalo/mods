// return array with all compatible mags for a weapon's main muzzle
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_w"];
private _compat = [];
private["_mags","_find"];

_find = {
	params ["_needle", "_haystack"];
	({_needle == _x} count _haystack) > 0
};

{ // for each weapon muzzle
	if (toLower _x == "this") then {
		_mags = getArray(configFile >> "CfgWeapons" >> _w >> "magazines");
	} else {
		_mags = getArray(configFile >> "CfgWeapons" >> _w >> _x >> "magazines");
	};
	{ // for each magazine type, check slot size
		if (getNumber(configFile >> "CfgMagazines" >> _x >> "type") > 128) then {_compat pushBackUnique _x};
	} forEach _mags;
} forEach getArray(configFile >> "CfgWeapons" >> _w >> "muzzles");

_compat
