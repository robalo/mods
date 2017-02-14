//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_point", "_rPoint"];

private _eyeD = eyeDirection _rPoint;
private _axis = (_eyeD select 0) atan2 (_eyeD select 1);
private _angle = [getPosATL _rPoint,getPosATL _point,10] call FUNC(angTowards);

if (_angle < 0) then {_angle = _angle + 360};
if (_axis < 0) then {_axis = _axis + 360};

private _diffA = _angle - _axis;

if (_diffA < 0) then {_diffA = _diffA + 360};

(_diffA > 45 && _diffA < 315)
