//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_2(_unit,_pos);
private ["_group","_pw"];
_group = group _unit;

_unit doWatch objNull;

if (_unit == leader _group) then {
	_unit doMove _pos;
} else {
	[_unit] joinSilent _group;
};

sleep 7; //finish reloading anim

_pw = primaryWeapon _unit;
if (_pw != "") then {
	if (_pw != currentWeapon _unit) then {
		_unit action ["handGunOff", _unit];
	};
};
