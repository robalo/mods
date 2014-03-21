//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_2(_unit,_hitman);

// wait a few seconds
sleep 5 + random 5;
if (!alive _unit) exitWith {};

// check if it's an init or hit event
if (isNil "_hitman") then {

	// initialize
	[_unit] call FUNC(setUnitSkill);

} else {

	if (GVAR(hitcoef) < 1) then {
  	// hit, reduce skills
  	private "_newskill";
  	{
  		_newskill = 0.1 max ((_unit skill _x)*GVAR(hitcoef));
  		_unit setskill [_x,_newskill];
  	} forEach ["aimingAccuracy","aimingShake","aimingSpeed","spotDistance","spotTime","courage","reloadSpeed","commanding","general"];
  
  	// debug stuff
  	private "_log_skill";
  	_log_skill = {
  		private "_sv";
  		_sv = skill _unit;
  		diag_log format["Unit %1, type %2, has skill %3", _unit, typeOf _unit, _sv];
  		{
  			_sv = _unit skillFinal _x;
  			diag_log format["%1 | Unit %2 has final sub-skill %3 value %4",time,_unit,_x,_sv];
  		}
  		forEach ["aimingAccuracy","aimingShake","aimingSpeed","spotDistance","spotTime","courage","reloadSpeed","commanding","general"];
  	};
  
  	#ifndef DEBUG_MODE_FULL
  	if (GVAR(debug) != 0) then {
  	#endif
  		call _log_skill;
  	#ifndef DEBUG_MODE_FULL
  	};
  	#endif
	};

};
