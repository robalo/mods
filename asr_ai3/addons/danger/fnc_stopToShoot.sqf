//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit","_enemy"];

//go prone if target is far and I have no cover - might need to improve this
if (_enemy distance _unit > 250 && {nearestTerrainObjects [_unit, ["WALL","BUILDING","HOUSE","TREE"], 10, false] isEqualTo []}) then {
	_unit setUnitPosWeak "DOWN";
} else {
    _unit setUnitPosWeak "AUTO";
};
