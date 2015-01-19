//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private ["_wpntype"];
if !(canStand _this) exitWith {}; // no point if already forced laying
if (_this getVariable [QGVAR(shooting), false]) exitWith {}; // already shooting, prevent overlap
_wpntype = (primaryWeapon _this) call FUNC(getWeaponType);
if ((_wpntype == "MG" || _wpntype == "SNIPER") && {count ((getPosATL _this) nearObjects ["HouseBase", 3]) == 0}) then {
	_this spawn {
		_this setVariable [QGVAR(shooting), true];
		_this setUnitPosWeak "Down";
		waitUntil {isNil {_this getVariable QGVAR(shooting)}}; // wait until the danger fsm resets this
		_this setUnitPosWeak "Auto";
	};
};
