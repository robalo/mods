//#define DEBUG_MODE_FULL
#include "script_component.hpp"
LOG(MSG_INIT);

if (isServer) then {
	// Server, propagate settings and required functions to clients
	//publicVariable "ASR_AI3_SETTINGS";
    ["itemAdd", [QGVAR(cfgLoop), {call FUNC(configLoop);}, 10]] call BIS_fnc_loop;

	[] spawn {
		private ["_i","_thisgroup","_units","_c","_u","_d","_from","_to"];
		private _fh = true;
		sleep 10;

		while {true} do {
            if (GVAR(rearm) > 0) then {
                { // cycle all groups
                    _thisgroup = _x;
                    _units = (units _thisgroup) select {_x call FUNC(isValidUnitC)};
                    _c = count _units;
                    if (_c > 0 && {!(_thisgroup call FUNC(hasPlayer))}) then {
                        if (_c == 1) then {
                            _u = _units select 0;
                            if (_u call FUNC(allowRearm)) then {_u spawn FUNC(rearm)};
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
                                if (_u call FUNC(allowRearm)) then {_u spawn FUNC(rearm)};
                                sleep 0.1;
                            };
                        };
                    };
                    sleep 1;
                } forEach allGroups;
                _fh = !_fh;
            };
			sleep 30;
		};
	};
};

if (hasInterface) then {
    [] spawn {
        waitUntil {time > 5 && player == player};
        //make player leader on teamswitch; prevents AI left in place from sending stupid orders
        onTeamSwitch {[_from,_to] call FUNC(onTeamSwitch)};
    }
};
