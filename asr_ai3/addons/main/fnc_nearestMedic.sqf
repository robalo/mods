//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_unit);
private ["_medic"];
scopeName "main";
_medic = objNull;
{
	if (_x call FUNC(isMedic) && {!(_x call FUNC(isUnc))} && {(side _x) getFriend (side _unit) > 0.6}) exitWith {_medic = _x};
}
forEach ((getposATL _unit) nearEntities [["CAManBase"],200]);

_medic
