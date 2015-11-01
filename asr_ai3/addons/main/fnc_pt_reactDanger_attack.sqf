#include "script_component.hpp"

private ["_unit", "_attackTime", "_dangerPos", "_distance", "_wp", "_inBuilding"];
_unit = _this select 0;
//check what time we're supposed to attack
//this variable may change between recursive calls
_attackTime = (_unit getVariable [QGVAR(AT), 0]);

if(_attackTime == 0) exitWith {};
//not yet time, sleep until then
if(time < _attackTime) then {
    [_unit, _attackTime] spawn {
        _unit = _this select 0;
        _attackTime = _this select 1;
        sleep (_attackTime - time);
        //then restart
        [_unit] call FUNC(pt_reactDanger_attack);
    };
}else {

    //attack no longer pending, allow attack to be called again
    _unit  setVariable [QGVAR(ATK_PEND),0,false];
    //this variable may have change between recursive calls
    _dangerPos = _unit getVariable  [QGVAR(ATTACKER_POS), 0];
    //find a suitable location to attack
    _inBuilding = false;
    {
        if(_x  isKindOf "HouseBase") then {
            _inBuilding = true;
        };
    } forEach lineIntersectsWith [_dangerPos vectorAdd [0,0,-10], _dangerPos vectorAdd [0,0,10]];


    //ensure the attack WP doesn't end up someplace the AI can't get to
    _attackPos = [];
    if(_inBuilding) then {
        _attackPos = [_dangerPos] call FUNC(pt_getClosestBuildingPos);
        if(count _attackPos == 0) then {
            _attackPos = _dangerPos findEmptyPosition [0, 20, "CAManBase"];
        };
    } else {
        _attackPos = _dangerPos findEmptyPosition [0, 20, "CAManBase"];
    };
    
    if(count _attackPos == 0) then {
        _attackPos = _dangerPos findEmptyPosition [0, 50, "CAManBase"];
    };
    
    if(count _attackPos == 0) exitWith {
        
    };
    
    //is the attack location within Attack Distance (AD)?
    if((_unit distance2D _attackPos) < (_unit getVariable [QGVAR(AD), 0])) then {
        _group = group _unit;
        if(waypointName [_group, currentWaypoint _group] == "PT_ASR_AI_SAD") then {
            //repoint current SAD waypoint to new target
            [_group, currentWaypoint _group] setWaypointPosition [_attackPos, 0];
        }else {
            //add in a waypoint
            _wp = _group addWaypoint [_attackPos, 0, currentWaypoint _group];
            _wp setWaypointType "SAD";
            _wp setWaypointName "PT_ASR_AI_SAD";
        };
    }else {
        TRACE_3("not attacking, enemy at dist 1, max dist 2", (_unit distance2D _attackPos), (_unit getVariable [QGVAR(AD), 0]));
    };
};