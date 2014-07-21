//#define DEBUG_MODE_FULL
#include "script_component.hpp"

PARAMS_1(_unit);

private["_nt","_nc","_locksecondary","_w","_t","_i","_p","_s","_wait","_sniper","_pwpn","_mags","_load"];

#define __w_primary 0
#define __w_secondary 1
#define __w_sidearm 2
#define __w_binocular 3
#define __w_nvg 4
#define __m_primary_1 5
#define __m_primary_2 6
#define __m_secondary_1 7
#define __m_secondary_2 8
#define __m_sidearm 9
#define __m_grenades 10
#define __m_smoke 11
#define __m_fakit 12
#define __m_medkit 13
#define __m_toolkit 14
#define __i_vest 15
#define __i_ruck 16

_nt = [
	"",
	"",
	"",
	[],
	[],
	[],
	[],
	[],
	[],
	[],
	GVAR(grenades),
	GVAR(smokes),
	["FirstAidKit"],
	["Medikit"],
	["ToolKit"],
	[],
	[]
];

// How many of each item I need to grab
_nc = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];

_locksecondary = false;
_w = "";
_t = "";
_sniper = false;
//_load = load _unit; //TODO: check mass of items


//-- Inventory check: weapon types, compatible mags - fill in the _nt array

_w = primaryWeapon _unit;
if (_w != "") then {
	_t = _w call FNCMAIN(getWeaponType);
	if (_t in ["RIFLE","SNIPER","MG","AR"]) then {
		_nt set [__w_primary,_w];
		_mags = [_w] call FUNC(getCompatMags);
		_nt set [__m_primary_1,_mags select 0];
		_nt set [__m_primary_2,_mags select 1];
		if (_t != "RIFLE") then { //specialist primary weapon
			_locksecondary = true; // don't take a launcher
			GVAR(needmax) set [__m_primary_1,5]; // take 2 more mags
			if (_t == "SNIPER") then {_sniper = true};
		};
	};
};

//TRACE_2("LOCK SECONDARY",_unit,_locksecondary);

_w = secondaryWeapon _unit;
if (_w != "") then {
	_t = _w call FNCMAIN(getWeaponType);
	if (_t == "LAUNCHER") then {
		if ([configFile >> "CfgWeapons" >> _w >> "ace_disposable", "number", 0] call CBA_fnc_getConfigEntry == 0) then {
			// if launcher, reloadable, check for mags
			_nt set [__w_secondary,_w];
			_mags = [_w] call FUNC(getCompatMags);
			_nt set [__m_secondary_1,_mags select 0];
			_nt set [__m_secondary_2,_mags select 1];
		};
	};
};

// if a handgun is found
_w = handgunWeapon _unit;
if (_w != "") then {
	_nt set [__w_sidearm,_w];
	_mags = [_w] call FUNC(getCompatMags);
	_nt set [__m_sidearm,(_mags select 0)+(_mags select 1)];
};

//-- Determine what this unit needs - based on needmax, fill the _nc array
_pwpn = _nt select __w_primary;
if (_pwpn == "") then { // don't have a primary
	_nc set [__w_primary, 1];
} else { // have primary, count mags
	_p = [_unit,_nt select __m_primary_1] call FUNC(countMags);
	_s = [_unit,_nt select __m_primary_2] call FUNC(countMags);
	if (_p < GVAR(needmax) select __m_primary_1) then {_nc set [__m_primary_1,(GVAR(needmax) select __m_primary_1) - _p]};
	if (_s < GVAR(needmax) select __m_primary_2) then {_nc set [__m_primary_2,(GVAR(needmax) select __m_primary_2) - _s]};
	if (_p == 0 /*&& _s == 0*/) then {_nc set [__w_primary, 1]}; // no mags ? look for another weapon or rearm ASAP !
};

if (_nt select __w_secondary == "") then { // don't have a launcher
	if (!_locksecondary) then {_nc set [__w_secondary, 1]}; //take one if slot not full or locked by primary weapon conditions
} else { // it's a launcher
	_p = [_unit,_nt select __m_secondary_1] call FUNC(countMags);
	_s = [_unit,_nt select __m_secondary_2] call FUNC(countMags);
	if (_p < GVAR(needmax) select __m_secondary_1) then {_nc set [__m_secondary_1,(GVAR(needmax) select __m_secondary_1) - _p]};
	if (_s < GVAR(needmax) select __m_secondary_2) then {_nc set [__m_secondary_2,(GVAR(needmax) select __m_secondary_2) - _s]};
	if (_p == 0 && !_locksecondary) then {_nc set [__w_secondary, 1]}; // no primary rounds, look for another one
};

if (_unit call FNCMAIN(isMedic)) then {
	GVAR(needmax) set [__m_fakit, 2];
	GVAR(needmax) set [__m_medkit, 1];
};

if (_unit call FNCMAIN(isEngineer)) then {
	GVAR(needmax) set [__m_toolkit, 1];
};

if (_sniper || _nc select __w_primary == 1) then {
	// care about sidearms ? (check config if not a sniper; or if no primary w, take pistols too, better than nothing)
	if (_nt select __w_sidearm == "") then { // don't have a sidearm
		_nc set [__w_sidearm, 1];
	} else {
		_p = [_unit,_nt select __m_sidearm] call FUNC(countMags);
		if (_p < GVAR(needmax) select __m_sidearm) then {_nc set [__m_sidearm,(GVAR(needmax) select __m_sidearm) - _p]};
		if (_p == 0) then {_nc set [__w_sidearm, 1]}; // have one but empty, look for another
	};
};

{// Check for Handgrenades, Smokeshells
	_p = [_unit,_nt select _x] call FUNC(countMags);
	if (_p < GVAR(needmax) select _x) then {_nc set [_x,(GVAR(needmax) select _x) - _p]};
} forEach [__m_grenades,__m_smoke];

{// Check for Kits
	_p = [_unit,_nt select _x] call FUNC(countItems);
	if (_p < GVAR(needmax) select _x) then {_nc set [_x,(GVAR(needmax) select _x) - _p]};
} forEach [__m_medkit,__m_fakit,__m_toolkit];

// Check for nvg
if (sunormoon == 0 && !(_unit call FNCMAIN(hasNVG))) then { // need nvg at night
	_nc set [__w_nvg, 1];
};

// Check for binocs
if (GVAR(binocs) == 1 && count(_unit call FUNC(getBinoculars)) == 0) then {
	_nc set [__w_binocular, 1];
};

// Check for vest
if (vest _unit == "") then {
	_nc set [__i_vest, 1];
};
// Check for ruck
if (backpack _unit == "") then {
	_nc set [__i_ruck, 1];
};

TRACE_2("INVCHECK",_unit,_nt);
TRACE_2("INVCHECK",_unit,_nc);
[_nt,_nc]
