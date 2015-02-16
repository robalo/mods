// help the AI hear bullets fired; for anything larger, help them hear the explosions
//#define DEBUG_MODE_FULL
#define __RANGE_FAR 1000
#define __RANGE_MEDIUM 500
#define __RANGE_CLOSE 50
#define __RANGE_MINIMUM 50
#include "script_component.hpp"
if (isNull (_this select 6)) exitWith {}; //projectile

if ((_this select 4) isKindOf "BulletCore") then {
	if (GVAR(gunshothearing) > 0 /*&& {!GVAR(firing)}*/ && {diag_fps > 40}) then {
		_this spawn {
			PARAMS_6(_shooter,_weapon,_muzzle,_mode,_ammo,_magazine);
			//GVAR(firing) = true;

			private ["_cfg","_snda","_snd","_range","_k","_sdweap","_sdammo","_distance","_detectupto","_audible","_ammofactor","_burst","_initspeed","_supp","_audiblecoef","_veh","_sti","_sndclass"];

			_sti = 0; // default soundTypeIndex

			// get muzzle config
			if (_muzzle == _weapon) then {
				_cfg = configFile>>"cfgWeapons">>_weapon;
			} else {
				_cfg = configFile>>"cfgWeapons">>_weapon>>_muzzle;
			};

			_veh = vehicle _shooter;
			_sdweap = false;
			_sdammo = false;

			//TODO: add check for integral suppressor (config-based); move this to a function
			_supp = "";
			if (_veh == _shooter) then {
				{ if (_weapon == _x select 0) exitWith {_supp = _x select 1} } forEach (weaponsItems _shooter);
			};

			_audible = [configFile>>"CfgAmmo">>_ammo>>"audiblefire", "number", 16] call CBA_fnc_getConfigEntry;
			if (_supp != "") then {
				_audiblecoef = [configFile>>"cfgWeapons">>_supp>>"ItemInfo">>"AmmoCoef">>"audibleFire","number",1] call CBA_fnc_getConfigEntry;
				_sdweap = _audiblecoef < 1;
				_audible = _audible*_audiblecoef;
				_sti = [configFile>>"cfgWeapons">>_supp>>"ItemInfo">>"soundTypeIndex","number",1] call CBA_fnc_getConfigEntry;
			};

			_initspeed = [configFile>>"CfgMagazines">>_magazine>>"initSpeed","number",0] call CBA_fnc_getConfigEntry;
			if (_initspeed < 360) then {_sdammo = true};

			TRACE_3("CHECK IF SILENCED",_weapon,_sdweap,_sdammo);

			if (_sdweap && _sdammo) exitWith {
				//GVAR(firing) = false;
				LOG("silencer and subsonic ammo, exiting");
			};

			if (_mode != _muzzle) then {
				_cfg = _cfg>>_mode;
			};

			if (!isArray(_cfg>>"sounds")) exitWith {
				//GVAR(firing) = false;
				TRACE_1("outdated sound config for weapon, exiting",_weapon);
			};

			_sndclass = (getArray(_cfg>>"sounds")) select _sti;
			if (isNil "_sndclass") exitWith {
				//GVAR(firing) = false;
				TRACE_1("outdated sound config for weapon, exiting",_weapon);
			};

			TRACE_1("Sound class",_sndclass);

			_snda = getArray(_cfg>>_sndclass>>"soundbegin");
			TRACE_1("Sound probab array",_snda);
			if (count _snda < 2) exitWith {
				//GVAR(firing) = false;
				LOG("no sounds defined, exiting");
			};
			_snd = getArray(_cfg>>_sndclass>>(_snda select 0));
			TRACE_1("Sound cfg array",_snd);
			if (count _snd < 4) exitWith {
				//GVAR(firing) = false;
				LOG("bad sound config, exiting");
			};
			if (_snd select 0 == "") exitWith {
				//GVAR(firing) = false;
				LOG("empty sound, exiting");
			};
			_range = _snd select 3;
			if (typeName _range != "SCALAR") exitWith {
				//GVAR(firing) = false;
				LOG("sound range not a number, exiting");
			};

			//JSRSFIX
			if (!_sdweap && {isClass (configFile >> "cfgPatches" >> "DragonFyre_Distance")} && {_range == 50 || _range == 130}) then {
				if (([configFile>>"cfgWeapons">>_weapon>>"dfyre_soundeffect", "text", ""] call CBA_fnc_getConfigEntry) != "" || {([configFile>>"cfgWeapons">>_weapon>>"jsrs_soundeffect", "text", ""] call CBA_fnc_getConfigEntry) != ""}) then {
					_range = 1400;
				};
			};

			// apply userconfig coefficient
			_range = _range * GVAR(gunshothearing);

			_ammofactor = _audible / 16;
			if (_ammofactor > 1 || _sdweap) then {
				_range = _range * _ammofactor;
			};
/*
			_burst = [_cfg>>"burst","number",1] call CBA_fnc_getConfigEntry;

			if (_burst > 3) then {
				//a little hack to prevent AI gunners from shooting long bursts while turning around
				if (!isPlayer _shooter) then {
					if (_veh == _shooter) then {
						_shooter forceSpeed 0; // stop
					};
				};

				sleep (_burst*2); // reveal with delay, stop to shoot, helps performance too

				if (!isPlayer _shooter) then {
					if (_veh == _shooter) then {
						if (isNil {_shooter getVariable QGVAR(shooting)}) then {
							_shooter forceSpeed -1; // release
						};
					};
				};
			};
*/
			if (_range < 50) exitWith {
				//GVAR(firing) = false;
				LOG("short sound range, exiting");
			};

			_detectupto = _range / 1.5; // maximum distance for which calculated knowledge is at least 0.5

			if (isPlayer gunner _veh || isPlayer driver _veh) then {
				// for players, reduce the range they're heard from when in forests or houses, to balance against AI's super see-through-things vision
				if ([_veh,"(forest + houses)",4] call FUNC(isNearStuff)) then {
					_detectupto = _detectupto * 0.5;
				};
				if (GVAR(debug) == 1) then {
					hint format["ASR DEBUG: gunshot hearing aid: minimum reveal of 0.5 at max range of %1 meters", _detectupto];
				};
			};

			{
				if (group _x != group _shooter) then {
					_distance = _veh distance _x;
					// gain knowledge based on weapon sound and range
					_k = 1.5 * (1 - _distance/_range);
					// when in forest, not so accurate
					if ([_x,"(forest + houses)",4] call FUNC(isNearStuff)) then {
						_k = _k * 0.5;
					};
					_x reveal [_veh,_k];
					TRACE_3("unit hears this shooter",_x,_veh,_k);
				};
			} forEach (_veh nearEntities [["SoldierWB","SoldierEB","SoldierGB","StaticWeapon"],_detectupto]);

			sleep 5; if (!isMultiplayer) then {sleep 5};

			//GVAR(firing) = false;
		};
	};
} else { // munition other than bullets
	_this spawn {
		PARAMS_7(_shooter,_weapon,_muzzle,_mode,_ammo,_magazine,_projectile);
		private ["_early","_range","_timeout","_exPos","_distance","_veh"];

		// determine range based on ammo type
		// for smoke and flares, alert shortly after getting fired, instead of waiting for the projectile to self-destruct // also don't hide from these ones even if they land close
		_early = false;
		_range = 0;

		switch (true) do {
			case (_ammo isKindOf "MissileCore"): {
				_range = __RANGE_MEDIUM;
			};
			case (_ammo isKindOf "BombCore"): {
				_range = __RANGE_FAR;
			};
			case (_ammo isKindOf "RocketCore"): {
				_range = __RANGE_MEDIUM;
			};
			case (_ammo isKindOf "ShellCore"): {
				_range = __RANGE_FAR;
			};
			case (_ammo isKindOf "SubmunitionCore"): {
				_range = __RANGE_FAR;
			};
			case (_ammo isKindOf "ShotDeployCore"): {
				_range = __RANGE_MEDIUM;
			};
			case (_ammo isKindOf "FlareCore"): {
				_range = __RANGE_MEDIUM;
				_early = true;
			};
			case (_ammo isKindOf "SmokeShellCore"): {
				_range = __RANGE_CLOSE;
				_early = true;
			};
			case (_ammo isKindOf "GrenadeBase"): {
				_range = __RANGE_MEDIUM;
			};
			case (_ammo isKindOf "TimeBombCore"): {
				_range = __RANGE_MEDIUM;
			};
			case (_ammo isKindOf "FuelExplosion"): {
				_range = __RANGE_FAR;
			};
			case (_ammo isKindOf "Grenade"): {
				_range = __RANGE_MEDIUM;
				if (_ammo isKindOf "GrenadeHand_stone") then {
					_range = __RANGE_CLOSE;
				};
				if (_ammo isKindOf "SmokeShell") then {
					_range = __RANGE_CLOSE;
					_early = true;
				};
			};
		};

		if (_range < __RANGE_MINIMUM) exitWith {
			TRACE_1("short range, exiting",_range);
		};

		if (_early) then {
			_timeout = diag_ticktime + ([configFile>>"CfgAmmo">>_ammo>>"timetolive", "number", 1] call CBA_fnc_getConfigEntry)/4;
		};

		scopeName "main";

		switch (_weapon) do {
			case "Throw": {
				while {alive _projectile} do {
					_exPos = getPosATL _projectile;
					sleep 1;
					if (_early) then {
						if (diag_ticktime > _timeout) then {breakTo "main"};
					};
				};
			};
			case "Put": {
				_exPos = getPosATL _projectile;
				while {alive _projectile} do {
					sleep 3;
				};
			};
			default {
				while {alive _projectile} do {
					_exPos = getPosATL _projectile;
					sleep 0.075;
					if (_early) then {
						if (diag_ticktime > _timeout) then {breakTo "main"};
					};
				};
			};
		};

		if (isNil "_exPos") exitWith {LOG("could not find explosive's position, exiting")};

		_veh = vehicle _shooter;
		if (GVAR(debug) == 1 && {isPlayer gunner _veh || isPlayer driver _veh}) then {
			hintSilent format["ASR DEBUG: explosion hearing aid: alerting units in range of %1 meters from explosion", _range];
		};

		{
			if (group _x != group _shooter && !isPlayer _x && !isPlayer (leader _x)) then {
				sleep (0.5 + random 1);
				if (behaviour _x == "SAFE") then {_x setBehaviour "AWARE"};
				if (random 3 > 1) then {_x lookAt _exPos; _x doWatch _exPos};
				_distance = _exPos distance _x;
				TRACE_3("Unit hears this explosion",_x,_ammo,_distance);
				if (_distance < 150 && !_early) then {
					if (_x == leader _x || random 5 > 1) then {[_x,objNull,diag_ticktime,100] call FUNC(moveToCover)};
					if (behaviour _x == "AWARE") then {
						waitUntil {unitReady _x};
						if (alive _x) then {_x setBehaviour "COMBAT"};
					};
				};
			};
		} forEach (_exPos nearEntities [["SoldierWB","SoldierEB","SoldierGB","StaticWeapon"],_range]);
	};
};
