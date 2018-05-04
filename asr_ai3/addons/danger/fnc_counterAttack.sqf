//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params["_unit", "_dangerCausedBy"];

private _unitIsLeader = _unit == leader _unit;
private _unitPendingAttack = _unit getVariable [QGVAR(ATK_PEND), 0] == 0;
private _unitKnowledge = ((_unit targetKnowledge _dangerCausedBy select 5) < 6 );
private _unitDistance = ((_unit distance _dangerCausedBy) < GVAR(AUTO_ATTACK_WITHIN));
private _unitKnowledgeOrDistance = (_unitKnowledge || _unitDistance);
private _unitLeaderAndPending = _unitIsLeader && _unitPendingAttack;
private _validTarget = vehicle _dangerCausedBy == _dangerCausedBy || vehicle _dangerCausedBy isKindOf "LandVehicle";
private _validSelfVehicle = vehicle _unit == _unit || (vehicle _unit isKindOf "LandVehicle" && (commander (vehicle _unit) == _unit));

TRACE_5("counterattack: ", _unitLeaderAndPending, _unitKnowledgeOrDistance, _validTarget, _validSelfVehicle, (_unit targetKnowledge _dangerCausedBy));
if(_unitLeaderAndPending && _unitKnowledgeOrDistance
    && _validTarget && _validSelfVehicle) then {
    _unit setVariable [QGVAR(ATK_PEND), 1];
    [_unit, getPosATL _dangerCausedBy] call FUNC(counterAttackHelper);
};
