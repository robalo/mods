//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_grp"];
private _hasPlayer = false;

{ if (isPlayer _x) exitWith {_hasPlayer = true} } forEach units _grp;

_hasPlayer
