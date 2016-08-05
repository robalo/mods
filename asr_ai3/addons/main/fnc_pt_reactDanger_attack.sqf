#include "script_component.hpp"

private ["_unit", "_attackTime", "_dangerPos", "_wp"];
private _unit = _this select 0;
//check what time we're supposed to attack
//this variable may change between recursive calls
private _attackTime = (_unit getVariable [QGVAR(AT), 0]);

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
    private _dangerPos = _unit getVariable  [QGVAR(ATTACKER_POS), 0];
    
    //is the attack location within Attack Distance (AD)?
    if((_unit distance2D _dangerPos) < (_unit getVariable [QGVAR(AD), 0])) then {
        private _group = group _unit;
        
        [_unit, "attacking"] call FUNC(pt_setStatusText);
        if(waypointName [_group, currentWaypoint _group] == "PT_ASR_AI_SAD") then {
            //repoint current SAD waypoint to new target
            [_group, currentWaypoint _group] setWaypointPosition [_dangerPos, 0];
        }else {
            //add in a waypoint
            private _wp = _group addWaypoint [_dangerPos, 0, currentWaypoint _group];
            _wp setWaypointType "SAD";
            _wp setWaypointName "PT_ASR_AI_SAD";
        };
    }else {
        TRACE_3("not attacking, enemy at dist 1, max dist 2", (_unit distance2D _dangerPos), (_unit getVariable [QGVAR(AD), 0]));
        [_unit, "not attacking"] call FUNC(pt_setStatusText);
    };
    _unit setVariable[QGVAR(AT), 0, false];
    _unit setVariable[QGVAR(AD), 0, false];
};