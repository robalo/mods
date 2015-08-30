
#include "script_component.hpp"
private ["_unit", "_dangerCause", "_dangerCausedBy", "_checkDown", "_checkMiddle", "_foundResult"];
PARAMS_3(_unit, _dangerCausedBy, _dangerCause);
//I am in a structure, and I know who the enemy is and I am visible to the enemy.

_checkMiddle = false;
_checkDown = false;

if(unitPos _unit == "AUTO") then {
    _checkMiddle = true;
    _checkDown = true;
};

if(unitPos _unit == "UP") then {
    _checkMiddle = true;
    _checkDown = true;
};

if(unitPos _unit == "MIDDLE") then {
    _checkDown = true;
};

_foundResult = "";

if(_checkMiddle) then {
    if(!([_unit, _dangerCausedBy, 1.2] call FUNC(pt_checkVis))) then {
        _foundResult = "MIDDLE";
    };
};

if((_foundResult == "") && _checkDown) then {
    if(!([_unit, _dangerCausedBy, 0.4] call FUNC(pt_checkVis))) then {
        _foundResult = "DOWN";
    };
};

//if found a unitPos where we would be safe, switch to it
//else go to another the next position in the building
if(_foundResult != "") then {

    _unit setUnitPos _foundResult;
    _unit  setVariable [QGVAR(DT),time + GVAR(DT_IN_STRUCT_CHANGE_POS),false];
    _unit  setVariable [QGVAR(RT),GVAR(RT_IN_STRUCT_CHANGE_POS),false];
    if(_unit == leader _unit) then {
        _unit  setVariable [QGVAR(AT),time + GVAR(AT_IN_STRUCT_CHANGE_POS),false];
        _unit  setVariable [QGVAR(AD),GVAR(AD_IN_STRUCT_CHANGE_POS),false];
    };
    
    //add reset for unitPos so that they will not get stuck down
    if(_unit getVariable [QGVAR(POS_RESET_PEND), 0] == 0) then {
        _unit  setVariable [QGVAR(POS_RESET_PEND),1,false];
        [_unit] call FUNC(pt_reset_Pos);
    };
}else {
    [_unit, _dangerCausedBy, _dangerCause] call FUNC(pt_goToNextBuildingPos);
    _unit  setVariable [QGVAR(DT),time + GVAR(DT_IN_STRUCT_AM_VIS_MOVE),false];
    _unit  setVariable [QGVAR(RT),GVAR(RT_IN_STRUCT_AM_VIS_MOVE),false];

        if(_unit == leader _unit) then {
            _unit  setVariable [QGVAR(AT),time + GVAR(AT_IN_STRUCT_AM_VIS_MOVE),false];
            _unit  setVariable [QGVAR(AD),GVAR(AD_IN_STRUCT_AM_VIS_MOVE),false];
        };
};
