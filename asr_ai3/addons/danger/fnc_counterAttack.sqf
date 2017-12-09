
#include "script_component.hpp"
params["_unit", "_dangerCausedBy"];

_unitIsLeader = _unit == leader _unit;
_unitPendingAttack = _unit getVariable [QGVAR(ATK_PEND), 0] == 0;
_unitKnowledge = ((_unit targetKnowledge _dangerCausedBy select 5) < 6 );
_unitDistance = ((_unit distance _dangerCausedBy) < GVAR(AUTO_ATTACK_WITHIN));
_unitKnowledgeOrDistance = (_unitKnowledge || _unitDistance);
_unitLeaderAndPending = _unitIsLeader && _unitPendingAttack;
_validTarget = vehicle _dangerCausedBy == _dangerCausedBy || vehicle _dangerCausedBy isKindOf "LandVehicle";
_validSelfVehicle = vehicle _unit == _unit || (vehicle _unit isKindOf "LandVehicle" && (commander (vehicle _unit) == _unit));

TRACE_4("counterattack: ", _unitLeaderAndPending, _unitKnowledgeOrDistance, _validTarget, _validSelfVehicle);
if(_unitLeaderAndPending && _unitKnowledgeOrDistance
    && _validTarget && _validSelfVehicle) then {
    _unit  setVariable [QGVAR(ATK_PEND),1,false];
    [_unit, getPosATL _dangerCausedBy] call FUNC(counterAttackHelper);
};
