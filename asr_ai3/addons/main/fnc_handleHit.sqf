//hit EH: remove gimps; switch to combat; throw smoke; go to cover

//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (GVAR(enabled) != 1) exitWith {}; // disabled

PARAMS_2(_unit,_hitman);

if (isPlayer _unit || isPlayer leader _unit) exitWith {}; // AI groups only

if (local _unit && {_unit call FUNC(isValidUnitC)}) then {

	if (GVAR(removegimps) > 0) then {_unit spawn FUNC(removeGimp)};

	if (!isNull _hitman && _unit != _hitman) then {

		// switch behavior to combat
		private "_beh";
		_beh = behaviour _unit;
		if (_beh == "SAFE" || _beh == "AWARE") then {_unit setBehaviour "COMBAT"};

	};

	// move to cover
	[_unit,_hitman,diag_ticktime,50] call FUNC(moveToCover);

};
