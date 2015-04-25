//#define DEBUG_MODE_FULL
#include "\x\asr_ai3\addons\main\script_component.hpp"
LOG(MSG_INIT);

if (isServer) then {
	// Server, propagate settings and required functions to clients
	publicVariable "ASR_AI3_SETTINGS"; publicVariable QUOTE(FUNC(setSkill));
	if (GVAR(enabled) == 1) then {
		["itemAdd", [QGVAR(initgs), { {_x call FUNC(groupInit)} forEach allGroups; }, 20]] call BIS_fnc_loop;
		if (GVAR(packNVG) == 1) then {
			["itemAdd", [QGVAR(gearLoop), {[] spawn {{_x call FUNC(setupGear); sleep 0.2} forEach allUnits}}, 60]] call BIS_fnc_loop;
		};
		if (GVAR(rearm) > 0) then {
			[] spawn {
				private ["_fh","_i","_thisgroup","_units","_c","_u","_d","_from","_to"];
				_fh = true;
				sleep 10;

				while {true} do {
					{ // cycle all groups
						_thisgroup = _x;
						_units = units _thisgroup;
						if ({isPlayer _x} count _units == 0) then {
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

if (!hasInterface && {GVAR(enabled) == 1 && GVAR(dynsvd) > 0}) then {
	[] spawn {
		sleep 60; // allow VD to be custom set first
		GVAR(startvd) = 900 max viewDistance;
		["itemAdd", [QGVAR(dvdloop), { [] call FUNC(changeVD); }, 120]] call BIS_fnc_loop;
	};
};

//make player leader on teamswitch; prevents AI left in place from sending stupid orders
if (hasInterface && GVAR(onteamswitch) > 0) then {[] spawn {waitUntil {time > 1 && {player == player}}; onTeamSwitch {[_from,_to] call FUNC(onTeamSwitch)}}};
