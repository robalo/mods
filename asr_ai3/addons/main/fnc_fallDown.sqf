// --------------------------------------------------------------------------------------------------
// Knock unit down. Modified tmr_hiteffects which is based on the implementation in tpw_fall, by tpw.
// --------------------------------------------------------------------------------------------------
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];
//diag_log format ["ASR AI3: fnc_fallDown: %1",_unit];

if (vehicle _unit != _unit || {_unit getVariable ["tmr_falling", false]}) exitWith {};

// Don't fall when tpw_fall is enabled.
if (!isNil "tpw_fall_active" && {tpw_fall_active}) exitWith {};

// Get index for currently selected weapon type
private _cw = currentWeapon _unit;
private _hw = handgunWeapon _unit;
private _pw = primaryWeapon _unit;
private _sw = secondaryweapon _unit;

private _wepType = 0;
switch _cw do {
	case "": {
		_wepType = 0;
	};
	case _hw: {
		_wepType = 1;
	};
	case _pw: {
		_wepType = 2;
	};
	case _sw: {
		_wepType = 3;
	};
	default {
		_wepType = 0;
	};	
};

// Arrays of possible animations for each weapon type.
// Rifle
private _pw_fallarray = ["AmovPercMstpSrasWrflDnon_AadjPpneMstpSrasWrflDright","AmovPercMstpSrasWrflDnon_AadjPpneMstpSrasWrflDleft"];
// Rifle, kneeling
private _knl_pw_fallarray = ["AadjPknlMstpSrasWrflDdown_AadjPpneMstpSrasWrflDup"];
// Launcher
private _sw_fallarray = ["AmovPercMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon"];
// Handgun
private _hw_fallarray = ["AmovPercMstpSrasWpstDnon_AadjPpneMstpSrasWpstDleft","AmovPercMstpSrasWpstDnon_AadjPpneMstpSrasWpstDright"];
// Handgun, kneeling
private _knl_hw_fallarray = ["AadjPknlMstpSrasWpstDdown_AadjPpneMstpSrasWpstDup"];
// No weapon
private _nw_fallarray = ["aparpercmstpsnonwnondnon_amovppnemstpsnonwnondnon"];

// Possible animations indexed by weapon type.
private _fallAnims = [_nw_fallarray, _hw_fallarray, _pw_fallarray, _sw_fallarray];
private _knl_fallAnims = [[], _knl_hw_fallarray, _knl_pw_fallarray, []];

// Clear falling after 2 seconds and ensure that AI gets back to prone.
private _backToProne = {
	sleep 2;
	_this setVariable ["tmr_falling", false];

	if (alive _this && !isPlayer _this) then {
		// Back to prone.
		_this playMoveNow "amovppnemstpsraswrfldnon";
	};
};

// Mark that unit is falling
_unit setVariable ["tmr_falling", true];

switch (stance _unit) do {
	case ("STAND") : {
		// Play fall to ground animation
		_possibleAnims = _fallAnims select _wepType;
		_anim = selectRandom _possibleAnims;
		_unit switchMove _anim;
        _unit spawn _backToProne;
	};
	case ("CROUCH") : {
		// Fall back to sitting position (pistol/rifle only)
		_possibleAnims = _knl_fallAnims select _wepType;
		if (count _possibleAnims > 0) then {
			_anim = selectRandom _possibleAnims;
			_unit switchMove _anim;
            _unit spawn _backToProne;
		};
	};
};
