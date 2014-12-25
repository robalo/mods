//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_2(_unit,_hitman);

// AI groups only
if (isPlayer _unit || isPlayer leader _unit) exitWith {};

// throw smoke
if (isNil QGVAR(smokin) && random 5 < GVAR(throwsmoke) && !isNull _hitman && _unit != _hitman && vehicle _unit == _unit) then {[_unit] spawn FUNC(throwSmoke)};

// move to cover
if (GVAR(seekcover) == 1 && isNil QGVAR(mToCover)) then {
	[_unit,_hitman,time,100] call FUNC(moveToCover);
};
