//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private ["_wpntype"];
if !(canStand _this) exitWith {}; // no point if already forced laying
if (_this getVariable [QGVAR(shooting), false]) exitWith {}; // already shooting, prevent overlap
_wpntype = (primaryWeapon _this) call FUNC(getWeaponType);
if ((_wpntype == "MG" || _wpntype == "SNIPER") && {count ((getPosATL _this) nearObjects ["HouseBase", 3]) == 0}) then {
	_this spawn {
        PARAMS_1(_unit);
        private "_t";
        _t = time;
		_unit setVariable [QGVAR(shooting), true];
		_unit setUnitPos "Down";
		waitUntil {isNil {_unit getVariable QGVAR(shooting)} || {time > _t + 30}}; // wait until the danger fsm resets this or 30s passed
		_unit setUnitPos "Auto";
	};
};
