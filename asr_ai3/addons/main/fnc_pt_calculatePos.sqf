
#include "script_component.hpp"
private ["_unit", "_dangerUnit", "_unitCenter", "_objs", "_blocks", "_result"];
//accepts posATL
_unit = _this select 0;
_dangerUnit = _this select 1;
//format ["calculated pos starts with:%1, %2", _unit, _dangerUnit] call BIS_fnc_log;
_unitCenter = eyePos _unit;
_unitCenter = [_unitCenter select 0, _unitCenter select 1, 0];
_unitCenter = ATLToASL _unitCenter;

_objs = (lineIntersectsWith [_unitCenter vectorAdd [0,0,1.7], eyePos _dangerUnit]);
_blocks = false;
{
    
    //format ["calculated pos saw %1 round one", _x] call BIS_fnc_log;
    if(!(_x isKindOf "CAManBase")) then {
        _blocks = true;
    };
} forEach _objs;

if(!_blocks)  then {

    
    _objs = (lineIntersectsWith [_unitCenter vectorAdd [0,0,1.2], eyePos _dangerUnit]);
    _blocks = false;
    {
        
    //format ["calculated pos saw %1 round two", _x] call BIS_fnc_log;
        if(!(_x isKindOf "CAManBase")) then {
            _blocks = true;
        };
    } forEach _objs;
    if(!_blocks) then {
        _result = "DOWN";
    }else {
        _result = "MIDDLE";
    };
}else {
    _result = "AUTO";
};
//format ["calculated pos resulted in:%1", _result] call BIS_fnc_log;
_result;