
#include "script_component.hpp"

private _unit = _this select 0;
//check what time we're supposed to attack
//this variable may change between recursive calls
private _attackTime = (_unit getVariable [QGVAR(AT), 0]);

[_unit, format ["AT0"]] call FUNC(pt_setStatusText);
if(_attackTime == 0) exitWith {};
//not yet time, sleep until then
if(time < _attackTime) then {
    [_unit, _attackTime] spawn {
        _unit = _this select 0;
        _attackTime = _this select 1;
        [_unit, format ["AT TIMER %1", _attackTime]] call FUNC(pt_setStatusText);
        sleep (_attackTime - time);
        //then restart
        [_unit] call FUNC(counterAttackHelper);
    };
}else {

    //attack no longer pending, allow attack to be called again
    _unit  setVariable [QGVAR(ATK_PEND),0,false];
    //this variable may have change between recursive calls
    private _dangerPos = _unit getVariable  [QGVAR(ATTACKER_POS), 0];

    private _group = group _unit;

    private _inDistance = (_unit distance2D _dangerPos) < (_unit getVariable [QGVAR(AD), 0]);
    private _hasCargo = count( fullCrew [(vehicle _unit), "cargo"]) > 0;
    private _hasCheckpoint = waypointType [_group, currentWaypoint _group] in ["GETOUT","UNLOAD","TR UNLOAD"];
    if(_inDistance && !_hasCargo && !_hasCheckpoint) then {
        [_unit, "attacking"] call FUNC(pt_setStatusText);
        if(waypointName [_group, currentWaypoint _group] == "PT_ASR_AI_SAD") then {
            //repoint current SAD waypoint to new target
            [_group, currentWaypoint _group] setWaypointPosition [_dangerPos, 0];
        }else {
            //add in a waypoint
            private _returnWP = _group addWaypoint [position _unit, 0, currentWaypoint _group];
            _returnWp setWaypointBehaviour  "SAFE";
            _returnWp setWaypointCombatMode "YELLOW";
            private _wp = _group addWaypoint [_dangerPos, 0, currentWaypoint _group];
            _wp setWaypointName "PT_ASR_AI_SAD";
            _wp setWaypointBehaviour "COMBAT";
            _wp setWaypointCombatMode "RED";
            _wp setWaypointSpeed "FULL";
        };
        {
            _x doFollow leader _group;
        } forEach units _group;
    }else {
        TRACE_3("not attacking, enemy at dist 1, max dist 2", (_unit distance2D _dangerPos), (_unit getVariable [QGVAR(AD), 0]));
        [_unit, format ["not attacking, %1, %2, %3",_inDistance,  !_hasCargo, !_hasCheckpoint]] call FUNC(pt_setStatusText);
    };
    _unit setVariable[QGVAR(AT), 0, false];
    _unit setVariable[QGVAR(AD), 0, false];
};
