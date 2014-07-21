// unit searches for places with magazines as needed
// returns place and useful stuff found [object,[items]]
//#define DEBUG_MODE_FULL
#include "script_component.hpp"

PARAMS_3(_unit,_nc,_nt);
private["_place","_found","_search","_goodies","_type"];

_place = [];
_found = [];
//_search = nearestObjects [_unit, ["ReammoBox","ReammoBox_F","AllVehicles","WeaponHolderSimulated"], GVAR(radius)];
_search = nearestObjects [_unit, ["CAManBase"], GVAR(radius)];

[_search] call BIS_fnc_arrayShift; //exclude myself
TRACE_2("PLACES TO SEARCH",_unit,_search);

{	scopename "searching";
	_goodies = [];
	TRACE_2("CHECKING",_unit,_x);
	if (_x isKindOf "CAManBase") then {
		if (_x call FNCMAIN(isUnc)) then { // unit is down
			_gc = getMagazineCargo (unitBackpack _x);
			_goodies = [_gc] call FUNC(getCargo);
			_goodies = + (magazines _x);
			_type = "DEADGUY";
			TRACE_3("FOUND ON BODY",_unit,_x,_goodies);
		} else { // alive and kickin, care to share ?
			/* //disabled until action takexxxx works
			if (side _x == side _unit && ! isPlayer _x) then { // another AI buddy
				//check for backpack
				if !(isNull (unitBackpack _x)) then {
					_gc = getMagazineCargo (unitBackpack _x);
					_goodies = [_gc] call FUNC(getCargo);
					_type = "BISRUCK";
					TRACE_3("FOUND ON RUCK",_unit,_x,_goodies);
				};
			};
			*/
		};
	} else { //vehicle, check cargo
		_gc = getMagazineCargo _x;
		_goodies = [_gc] call FUNC(getCargo);
		_type = "CARGO";
		TRACE_3("FOUND ON CARGO",_unit,_x,_goodies);
	};
	if (count _goodies > 0) then {
		_found = [_goodies,_nc,_nt] call FUNC(foundMag);
		if (count _found > 0) then {
			_place set [0,_x];
			_place set [1,_found];
			_place set [2,_type];
			breakOut "searching";
		};
	};
} forEach _search;

_place
