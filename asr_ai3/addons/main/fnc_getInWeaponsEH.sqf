//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_veh", "_pos", "_unit", "_turret"];
if (_unit == call CBA_fnc_currentUnit || {(group _unit) call FUNC(hasPlayer)}) exitWith {};
private _time2leave = time + 300 + (random 300);
waitUntil {time > _time2leave || {(_veh magazinesTurret _turret) isEqualTo []}};
if (alive _unit && {alive _veh} && {_veh == objectParent _unit}) then {doGetOut _unit};
