//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private ["_unit", "_dangerCausedBy", "_unitThatNeedCover", "_coverObj"];
_unit = _this select 0;
_dangerCausedBy = _this select 1;
//for each unit in this unit's group, see if their saved piece of cover blocks vision from the enemy
_unitThatNeedCover = [];


{
    if(_x getVariable [QGVAR(POS_RESET_PEND), 0] == 0) then {
        //just use _x as a default so we know that it is blank
        _coverObj = _x getVariable [QGVAR(savedCover), _x];
        if(_coverObj == _x) then {
            _unitThatNeedCover pushBack _x;
            TRACE_1("outStruct: needs cover", _x);
        }else {
            if(!([_x, _dangerCausedBy, _coverObj] call FUNC(pt_isCoverValid))) then {
            
                TRACE_1("outStruct: needs new cover, old cover bad", _x);
                _unitThatNeedCover pushBack _x;
                _unit setVariable [QGVAR(savedCover),nil,false];
            }else {
                TRACE_1("outStruct: doesn't need cover, old cover good", _x);
            };
        };
    }
} forEach units _unit;

_unitThatNeedCover;