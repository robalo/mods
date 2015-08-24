
#include "script_component.hpp"

private ["_unit", "_attackTime", "_dangerPos", "_distance", "_wp"];
_unit = _this select 0;

//check what time we're supposed to attack
//this variable may change between recursive calls
_attackTime = (_unit getVariable [QGVAR(AT), 0]);

format ["attack, time:%1", _attackTime] call BIS_fnc_log;
if(_attackTime == 0) exitWith {

};


//this variable may change between recursive calls
_dangerPos = _unit getVariable  [QGVAR(ATTACKER_POS), 0];

//not yet time, sleep until then
if(time < _attackTime) then {
    [_unit, _attackTime] spawn {
        private ["_unit", "_attackTime"];
        _unit = _this select 0;
        _attackTime = _this select 1;
    format ["attack, sleeping for :%1", (_attackTime - time)] call BIS_fnc_log;
        sleep (_attackTime - time);
        //then restart
        [_unit] call FUNC(pt_reactDanger_attack);
    };
}else {

    //attack no longer pending, allow attack to be called again
    _unit  setVariable [QGVAR(ATK_PEND),0,false];
    //is the location of the one who caused the danger (at danger time) within Attack Distance (AD)?
    if((_unit distance _dangerPos) < (_unit getVariable [QGVAR(AD), 0]) && (waypointType [group _unit, currentWaypoint (group _unit)])!= "SAD") then {
        //ATTACK!
		//add in a waypoint
        _wp = group _unit addWaypoint [_dangerPos, 0, currentWaypoint group _unit];
        _wp setWaypointType "SAD";
        format ["attack, attacking"] call BIS_fnc_log;
    }else {
        format ["attack, not attacking, enemy outside distance"] call BIS_fnc_log;
    };
};