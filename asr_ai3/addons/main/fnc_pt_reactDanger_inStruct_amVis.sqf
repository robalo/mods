#include "script_component.hpp"
private ["_unit", "_dangerCause", "_dangerCausedBy", "_checkDown", "_checkMiddle", "_foundResult"];
_unit = _this select 0;
_dangerCausedBy = _this select 1;
_dangerCause = _this select 2;
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

    [_unit, "ducking from known"] call FUNC(pt_setStatusText);
    _unit setUnitPos _foundResult;
    _unit  setVariable [QGVAR(DT),time + GVAR(DT_IN_STRUCT_CHANGE_POS),false];
    if(_unit == leader _unit) then {
        _unit  setVariable [QGVAR(AT),time + GVAR(AT_IN_STRUCT_CHANGE_POS),false];
        _unit  setVariable [QGVAR(AD),GVAR(AD_IN_STRUCT_CHANGE_POS),false];
    };
}else {
    [_unit, _dangerCausedBy, _dangerCause] call FUNC(pt_goToNextBuildingPos);
    _unit  setVariable [QGVAR(DT),time + GVAR(DT_IN_STRUCT_AM_VIS_MOVE),false];

        if(_unit == leader _unit) then {
            _unit  setVariable [QGVAR(AT),time + GVAR(AT_IN_STRUCT_AM_VIS_MOVE),false];
            _unit  setVariable [QGVAR(AD),GVAR(AD_IN_STRUCT_AM_VIS_MOVE),false];
        };
};
