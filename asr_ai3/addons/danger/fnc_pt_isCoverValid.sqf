#include "script_component.hpp"
params ["_unit", "_dangerCausedBy", "_coverObj"];
//check to see if cover obj does block sight from the danger obj

private _dangerCenter = eyePos _dangerCausedBy;
private _unitEye = eyePos _unit;
private _unitKneel = [_unitEye select 0, _unitEye select 1, (getPosASL _unit select 2) + 1.2];
private _unitProne = [_unitEye select 0, _unitEye select 1, (getPosASL _unit select 2) + 0.4];
private _doesCover = false;
if (_coverObj in (lineIntersectsWith [_dangerCenter, _unitProne]) || {_coverObj in (lineIntersectsWith [_dangerCenter, _unitKneel])} || {_coverObj in (lineIntersectsWith [_dangerCenter, _unitEye])}) then {
    _doesCover = true;
};
_doesCover;
