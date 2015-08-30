
#include "script_component.hpp"
private ["_unit", "_dangerCausedBy", "_coverObj", "_dangerCenter", "_unitEye", "_unitKneel", "_unitProne", "_doesCover"];
PARAMS_3(_unit, _dangerCausedBy, _coverObj);
//check to see if cover obj does block sight from the danger obj

_dangerCenter = eyePos _dangerCausedBy;
_unitEye = eyePos _unit;
_unitKneel = [_unitEye select 0, _unitEye select 1, (getPosASL _unit select 2) + 1.2];
_unitProne = [_unitEye select 0, _unitEye select 1, (getPosASL _unit select 2) + 0.4];
_doesCover = false;
if(_coverObj in (lineIntersectsWith [ _dangerCenter, _unitEye]) || _coverObj in (lineIntersectsWith [ _dangerCenter, _unitKneel]) || _coverObj in (lineIntersectsWith [ _dangerCenter, _unitProne])) then {
    _doesCover = true;
} else {
    _doesCover = false;
};
    
_doesCover;