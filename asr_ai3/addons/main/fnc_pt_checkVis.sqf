#include "script_component.hpp"
private ["_unit", "_dangerCausedBy", "_unitPos", "_height", "_dangerPos", "_objs", "_visible"];
private _unit = _this select 0;
private _dangerCausedBy = _this select 1;
private _unitPos = eyePos _unit;

if(count _this > 2) then {
    private _height =  _this select 2;
    _unitPos = [_unitPos select 0, _unitPos select 1, (((getPosASL _unit) select 2) + _height)];
};
private _dangerPos = eyePos _dangerCausedBy;
private _objs =  lineIntersectsWith [ _dangerPos, _unitPos];

private _visible = true;
{
    
    _bbr = boundingBoxReal _x;
    _p1 = _bbr select 0;
    _p2 = _bbr select 1;
    _maxHeight = abs ((_p2 select 2) - (_p1 select 2));
    if(_maxHeight > GVAR(MIN_HEIGHT_OBJ_TO_CONSIDER)
            && _x != _unit && _x != _dangerCausedBy) then {
        _visible = false;
    }
} forEach _objs;
TRACE_2("check vis returning",_visible);
_visible;