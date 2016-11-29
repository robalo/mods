//#define DEBUG_MODE_FULL
#include "script_component.hpp"
private _pos = eyePos _this;
private _objs = lineIntersectsWith [_pos, _this modelToWorld [0, 0, (_pos select 2) + 20], _this];
if (_objs isEqualTo []) exitWith {false};
(_objs select 0) isKindOf "HouseBase";
