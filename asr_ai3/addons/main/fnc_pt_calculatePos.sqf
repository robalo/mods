#include "script_component.hpp"
private ["_unit", "_dangerUnit", "_unitCenter", "_objs", "_blocks", "_result"];
_unit = _this select 0;
_dangerUnit = _this select 1;
_unitCenter = eyePos _unit;
_unitCenter = [_unitCenter select 0, _unitCenter select 1, 0];
_unitCenter = ATLToASL _unitCenter;

_objs = (lineIntersectsWith [_unitCenter vectorAdd [0,0,1.7], eyePos _dangerUnit]);
_blocks = false;
{
    if(!(_x isKindOf "CAManBase")) then {
        _blocks = true;
    };
} forEach _objs;

if(!_blocks)  then {
    _objs = (lineIntersectsWith [_unitCenter vectorAdd [0,0,1.2], eyePos _dangerUnit]);
    _blocks = false;
    {
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
TRACE_2("calculated pos results", _result);
_result;