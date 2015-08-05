//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_grp);
private "_hasPlayer";
_hasPlayer = false;

{ if (isPlayer _x) exitWith {_hasPlayer = true} } forEach units _grp;

_hasPlayer
