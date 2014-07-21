//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_1(_unit);
private ["_medic"];
scopeName "main";
_medic = objNull;
{
	if ((side _x) getFriend (side _unit) > 0.6) then {
		if (_x call FUNC(isMedic)) then {
			if !(_x call FUNC(isUnc)) then {
				_medic = _x;
				breakTo "main";
			};
		};
	};
} forEach ((getposATL _unit) nearEntities [["CAManBase"],200]);

_medic
