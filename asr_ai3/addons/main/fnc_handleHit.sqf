//hit EH: remove gimps; switch to combat; throw smoke; go to cover

//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (GVAR(enabled) != 1) exitWith {}; // disabled

PARAMS_2(_unit,_hitman);

if (isPlayer _unit || isPlayer leader _unit) exitWith {}; // AI groups only

if (_unit call FUNC(isValidUnitC)) then {

	if (GVAR(removegimps) > 0) then {_unit spawn FUNC(removeGimp)};

	if (!isNull _hitman && _unit != _hitman) then {

		// switch behavior to combat
		private "_beh";
		_beh = behaviour _unit;
		if (_beh == "SAFE" || _beh == "AWARE") then {_unit setBehaviour "COMBAT"};

		// throw smoke
		if (isNil QGVAR(smokin) && {random 5 < GVAR(throwsmoke)} && {vehicle _unit == _unit}) then {[_unit] spawn FUNC(throwSmoke)};

	};

	// move to cover
	if (GVAR(seekcover) == 1 && isNil QGVAR(mToCover)) then {
		[_unit,_hitman,time,100] call FUNC(moveToCover);
	};

};
