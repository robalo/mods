
private ["_pos","_objs"];
_pos = eyePos _this;
_objs = lineIntersectsWith [_pos, _this modelToWorld [0, 0, (_pos select 2) + 20], _this];
if (count _objs == 0) exitWith {false};
(_objs select 0) isKindOf "HouseBase";
