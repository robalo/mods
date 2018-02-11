#include "script_component.hpp"
params["_unit", "_dangerCausedBy"];
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
    if(_maxHeight > 0.2
            && _x != _unit && _x != _dangerCausedBy) then {
        _visible = false;
    }
} forEach _objs;
TRACE_2("check vis returning",_visible);
_visible;
