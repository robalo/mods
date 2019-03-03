//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_veh", "_pos", "_unit", "_turret"];
scopeName "main";
if (_unit == call CBA_fnc_currentUnit || {(group _unit) call FNCMAIN(hasPlayer)}) exitWith {};
private _time2leave = time + 300 + (random 300);
waitUntil { //too much time or out of ammo
    sleep 0.1;
    if (isNull _unit || {isNull _veh} || {!alive _unit} || {!(_veh isEqualTo objectParent _unit)}) exitWith {breakOut "main"; true};
    isNull _veh || {time > _time2leave} || {(_veh magazinesTurret _turret) isEqualTo []};
};
doGetOut _unit;
