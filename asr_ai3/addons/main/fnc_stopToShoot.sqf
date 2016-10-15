//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit","_enemy"];

// soldier stop - set max. speed to 0
_unit forceSpeed 0;

//go prone if target is far and I have no cover - might need to improve this
if (_enemy distance _unit > 200 && {count (nearestTerrainObjects [_unit, ["WALL","BUILDING","HOUSE","TREE"], 10, false]) == 0}) then {
	_unit setVariable ["lastunitPos",unitPos _unit];
	_unit setunitPos "DOWN";
};
