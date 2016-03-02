//#define DEBUG_MODE_FULL
#include "script_component.hpp"
LOG(MSG_INIT);

if (isServer) then {
	// Server, propagate settings and required functions to clients
	publicVariable "ASR_AI3_SETTINGS";
	if (GVAR(enabled) == 1) then {
        ["itemAdd", [QGVAR(cfgLoop), {call FUNC(configLoop);}, 10]] call BIS_fnc_loop;

		if (GVAR(rearm) > 0) then {
			[] spawn {
				private ["_fh","_i","_thisgroup","_units","_c","_u","_d","_from","_to"];
				_fh = true;
				sleep 10;

				while {true} do {
					{ // cycle all groups
						_thisgroup = _x;
						_units = units _thisgroup;
						if (side _thisgroup != civilian && {!(_thisgroup call FUNC(hasPlayer))}) then {
							_c = count _units;
							if (_c == 1) then {
								_u = _units select 0;
								if (_u call FUNC(isReady)) then {_u spawn FUNC(rearm)};
							} else {
								_d = ceil(_c/2 - 1);
								if (_fh) then { // first half
									_from = 0;
									_to = _d;
								}	else { // second half
									_from = _d + 1;
									_to = _c - 1;
								};
								for "_i" from _from to _to do {
									_u = _units select _i;
									if (_u call FUNC(isReady)) then {_u spawn FUNC(rearm)};
									sleep 0.1;
								};
							};
						};
						sleep 1;
					} forEach allGroups;
					_fh = !_fh;
					sleep 20;
				};
			};
		};
	};
} else {
	// Wait for the server to push our settings and run them
	[] spawn {
		waitUntil {!isNil "ASR_AI3_SETTINGS"};
		[] call ASR_AI3_SETTINGS;
		LOG("ASR AI3 settings loaded from server.");
	};
};

if (GVAR(enabled) == 0) exitWith {};

if (hasInterface) then {
    [] spawn {
        waitUntil {time > 5 && player == player};
        //make player leader on teamswitch; prevents AI left in place from sending stupid orders
        if (GVAR(onteamswitch) > 0) then {onTeamSwitch {[_from,_to] call FUNC(onTeamSwitch)}};
    }
};
