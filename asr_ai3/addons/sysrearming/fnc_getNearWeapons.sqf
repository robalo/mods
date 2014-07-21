// unit searches for places with weapons as needed
// returns place and useful stuff found [object,[items]]
#define DEBUG_MODE_FULL
#include "script_component.hpp"

PARAMS_3(_unit,_nc,_nt);
private["_place","_found","_search","_w","_gc","_type","_oksec","_prefsec","_ptype","_gc0","_gc1","_gc2","_gc3","_gc4","_gc5","_needit"];

_place = [];
_found = [];
//_search = nearestObjects [_unit, ["ReammoBox","ReammoBox_F","AllVehicles","WeaponHolderSimulated"], GVAR(radius)];
_search = nearestObjects [_unit, ["CAManBase"], GVAR(radius)];

[_search] call BIS_fnc_arrayShift; //exclude myself
_oksec = _unit getVariable[QGVAR(allowedsec),[]];
if (count _oksec > 0) then {
	_prefsec = _oksec select 0;
	_ptype = _unit getVariable["asr_ai3_main_primarytype",""];
};

{ scopename "searching";
	switch (true) do {
		case (_x isKindOf "CAManBase"): {
  		if (_x call FNCMAIN(isUnc)) then {
  			_w = primaryWeapon _x;
  			// should I grab this weapon ?
  			_needit = _nc select 0 > 0;
  			if (!_needit) then {
  				if ((_nc select 5) + 1 == (GVAR(needmax) select 5)) then { //last mag for current weapon
  					if ({_x in (_nt select 5)} count (magazines _x) > 2) then { // found weapon with at least 3 mags
  						_needit = true;
  					};
  				};
  			};
  			if (_needit) then {
  				if ((_w call FNCMAIN(getWeaponType)) in ["RIFLE","SNIPER","MG","AR"]) then {
  					if (_x ammo _w > 0) then {
  						_found set [count _found, _w];
  						if (_w call FNCMAIN(getWeaponType) != "RIFLE") then {_nc set [1,0]};
  					};
  				};
  			};
  			_w = secondaryWeapon _x;
  			if (_nc select 1 > 0) then {
  				if (_w call FNCMAIN(getWeaponType) == "LAUNCHER") then {
  					if ([_w,_oksec] call FUNC(found)) then { // have ammo for it OR it's a disposable launcher, loaded (ACE)
  						if (_x ammo _w > 0 || [configFile >> "CfgWeapons" >> _w >> "ace_disposable", "number", 0] call CBA_fnc_getConfigEntry == 1) then {
  							_found set [count _found, _w];
  						};
  					};
  				};
  			};
  			if (_nc select 2 > 0) then {
  				_w = handgunWeapon _x;
  				if (_w != "") then {_found set [count _found, _w]};
  			};
  			if (_nc select 3 > 0) then {
  				_w = _x call FUNC(getBinoculars);
  				if (count _w > 0) then {_found set [count _found, _w select 0]};
  			};
  			if (_nc select 4 > 0) then {
  				if (_x call FNCMAIN(hasNVG)) then {_found set [count _found, "NVGoggles"]}; //for now
  			};
  			_type = "DEADGUY";
  		} else { // alive and kickin, care to share ?
  			/* // WIP
  			if ((side _x) == (side _unit) && !(isPlayer _x)) then { // another AI buddy
  				private "_goodies";
  				if (isClass (configFile >> "CfgPatches" >> "ace_sys_ruck") && [_x] call ace_sys_ruck_fnc_HasRuck) then {
  					//_goodies = [_x] call ace_sys_ruck_fnc_RuckWeapons;
  					_type = "ACERUCK";
  				} else {
  					//_gc = getWeaponCargo (unitBackpack _x);
  					//_goodies = [_gc] call FUNC(getCargo);
  					_type = "BISRUCK";
  				};
  			};
  			*/
  		};
		};
		default {
  		// re-sort contents by pref & importance
  		_gc0 = []; // pref pri
  		_gc1 = []; // pref sec
  		_gc2 = []; // other pri
  		_gc3 = []; // other sec
  		_gc4 = []; // side
  		_gc5 = []; // binocs
  		{
  			switch (_x call FNCMAIN(getWeaponType)) do {
  				case "RIFLE": {
  					if (_nc select 0 > 0) then {
  						if (_x != _nt select 0) then {
  							if ("RIFLE" == _ptype) then {
  								_gc0 set [count _gc0,_x];
  							} else {
  								_gc2 set [count _gc2,_x];
  							};
  						};
  					};
  				};
  				case "SNIPER": {
  					if (_nc select 0 > 0) then {
  						if (_x != _nt select 0) then {
  							if ("SNIPER" == _ptype) then {
  								_gc0 set [count _gc0,_x];
  							} else {
  								_gc2 set [count _gc2,_x];
  							};
  						};
  					};
  				};
  				case "AR": {
  					if (_nc select 0 > 0) then {
  						if (_x != _nt select 0) then {
  							if ("AR" == _ptype) then {
  								_gc0 set [count _gc0,_x];
  							} else {
  								_gc2 set [count _gc2,_x];
  							};
  						};
  					};
  				};
  				case "MG": {
  					if (_nc select 0 > 0) then {
  						if (_x != _nt select 0) then {
  							if ("MG" == _ptype) then {
  								_gc0 set [count _gc0,_x];
  							} else {
  								_gc2 set [count _gc2,_x];
  							};
  						};
  					};
  				};
  				case "LAUNCHER": {
  					if (_nc select 1 > 0) then {
  						if (_x != _nt select 1) then {
  							if ([_x,_oksec] call FUNC(found)) then {
  								if (_x == _prefsec) then {
  									_gc1 set [count _gc1,_x];
  								} else {
  									_gc3 set [count _gc3,_x];
  								};
  							};
  						};
  					};
  				};
  				case "PISTOL": {
  					if (_nc select 2 > 0) then {
  						if (_x != _nt select 2) then {
  							_gc4 set [count _gc4,_x];
  						};
  					};
  				};
  				case "EQUIP": {
  					if (_nc select 4 > 0) then {
  						if (_x == "NVGoggles") then {
  							_found set [count _found, _x];
  							_nc set [4,0];
  						};
  					} else {
  						if !(_x in ["Laserdesignator","ACE_Laserdesignator_D","ACE_BrokenNVGoggles","LRTV_ACR"]) then {
  							if (_nc select 3 > 0) then {_gc5 set [count _gc5,_x]};
  						};
  					};
  				};
  			};
  		} forEach ((getWeaponCargo _x) select 0);
  
  		TRACE_7("WEAPON CARGO after sorting",_x,_gc0,_gc1,_gc2,_gc3,_gc4,_gc5);
  
  		if (_nc select 0 > 0) then {
    		if (count _gc0 > 0) then {
    			if ((_gc0 select 0) call FNCMAIN(getWeaponType) != "RIFLE") then {_nc set [1,0]};
    			_found set [count _found, _gc0 select 0];
    			_nc set [0,0];
    		} else {
    			if (count _gc2 > 0) then {
    				if ((_gc2 select 0) call FNCMAIN(getWeaponType) != "RIFLE") then {_nc set [1,0]};
    				_found set [count _found, _gc2 select 0];
    				_nc set [0,0];
    			};
    		};
    	};
  
  		if (_nc select 1 > 0) then {
    		if (count _gc1 > 0) then {
    			_found set [count _found, _gc1 select 0];
    			_nc set [1,0];
    		} else {
    			if (count _gc3 > 0) then {
    				_found set [count _found, _gc3 select 0];
    				_nc set [1,0];
    			};
    		};
    	};
  
    	if (count _gc4 > 0) then {
    		_found set [count _found, _gc4 select 0];
    		_nc set [2,0];
   		};
  
    	if (count _gc5 > 0) then {
    		_found set [count _found, _gc5 select 0];
    		_nc set [3,0];
   		};
  
  		_type = "CARGO";
		};
	};
	if (count _found > 0) then {
		_place set [0,_x];
		_place set [1,_found];
		_place set [2,_type];
		TRACE_1("WEAPONS FOUND",_place);
		breakOut "searching";
	};
} forEach _search;

_place
