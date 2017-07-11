//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_caller"];
if (leader _caller != _caller) exitWith {hint "ASR-AI3 :: Fire On My Shot : You are not the leader of the group !"; false};
private _grp = group _caller;

if (GVAR(fireonme) == 0) then {
    GVAR(fireonme) = 1;
    _grp setVariable [QGVAR(FOMCM), combatMode _grp]; //save current cm
    _grp setCombatMode "GREEN"; // hold fire
    {
        private _firedEHid = _x addEventHandler ["FiredMan", {params ["_s"]; (group _s) setCombatMode "YELLOW"; _s removeEventHandler ["FiredMan", _s getVariable QGVAR(FireOnMeEHID)]; GVAR(fireonme) = 0;}];
        _x setVariable [QGVAR(FireOnMeEHID), _firedEHid];
    } forEach units _grp;
    //hintSilent "Team holds fire until I fire";
} else {
    GVAR(fireonme) = 0;
    _grp setCombatMode (_grp getVariable [QGVAR(FOMCM), "YELLOW"]); //restore cm
    {
        _x removeEventHandler ["FiredMan", _x getVariable QGVAR(FireOnMeEHID)]; //remove eh
    } forEach units _grp;
    //hintSilent "Team no longer firing on my shot";
};

true
