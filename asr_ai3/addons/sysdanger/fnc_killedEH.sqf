//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (!isServer) exitWith {};
private ["_grp","_units","_lonedude"];

scopeName "main";
if (GVAR(joinlastunit) == 1) then {
	_grp = group (_this select 0);
	_units = _grp call CBA_fnc_getAlive;
	if (count _units == 1 && _grp getVariable [QGVAR(initgroupsize),-1] > 1) then {
		_lonedude = _units select 0; TRACE_2("group left with only one",_grp,_lonedude);
		while {alive _lonedude} do {
			if (_lonedude call FUNC(isValidUnit)) then {
				if (vehicle _lonedude == _lonedude && !isPlayer _lonedude) then { // new AI loners on foot
					[_lonedude,_grp] spawn {
						PARAMS_2(_dude,_grp);
						private ["_neargroups","_nleader","_ngrp"];
						sleep (20 + random 10);
						_neargroups = [_grp,300] call FUNC(nearFactionGroups);
						TRACE_2("Friendlies in the area",_dude,_neargroups);
						{	// looks for other groups of the same faction nearby, also on foot, and joins the closest one
							_ngrp = _x;
							if (count (units _ngrp) < 12) then {
								_nleader = leader _ngrp;
								if (_nleader call FUNC(isValidUnit)) then {
									if (!isPlayer _nleader && vehicle _nleader == _nleader && canStand _nleader) then {
										// if broken legs, join only if group has medic
										if (canStand _dude || {_x call FUNC(isMedic)} count (units _ngrp) > 0) then {
											TRACE_2("Lone dude joins another group",_dude,_ngrp);
											_dude allowFleeing 0.1; //the unit is probably fleeing but now it found some friends, morale boost :)
											[_dude] joinSilent _ngrp;
											deleteGroup _grp;
											breakTo "main";
										};
									};
								};
							};
						}	forEach _neargroups;
					};
				};
			};
			sleep 120;
		};
	};
};
