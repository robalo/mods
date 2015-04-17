// -------------------------------------------------------------------------------
// Knock unit down. Based on the implementation in tpw_fall, by tpw.
// -------------------------------------------------------------------------------

_unit = _this select 0;

// Must be alive and local.
if (!alive _unit || !local _unit) exitWith {};

// Trucks don't fall.
if (vehicle _unit != _unit) exitWith {};

// Don't fall when tpw_fall is enabled.
if (!isNil "tpw_fall_active" && {tpw_fall_active}) exitWith {};

// Get index for currently selected weapon type
_cw = currentWeapon _unit;
_hw = handgunWeapon _unit;
_pw = primaryWeapon _unit;
_sw = secondaryweapon _unit;

_wepType = 0;
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
_pw_fallarray = ["AmovPercMstpSrasWrflDnon_AadjPpneMstpSrasWrflDright","AmovPercMstpSrasWrflDnon_AadjPpneMstpSrasWrflDleft"];
// Rifle, kneeling
_knl_pw_fallarray = ["AadjPknlMstpSrasWrflDdown_AadjPpneMstpSrasWrflDup"];
// Launcher
_sw_fallarray = ["AmovPercMstpSrasWlnrDnon_AmovPpneMstpSnonWnonDnon"];
// Handgun
_hw_fallarray = ["AmovPercMstpSrasWpstDnon_AadjPpneMstpSrasWpstDleft","AmovPercMstpSrasWpstDnon_AadjPpneMstpSrasWpstDright"];
// Handgun, kneeling
_knl_hw_fallarray = ["AadjPknlMstpSrasWpstDdown_AadjPpneMstpSrasWpstDup"];
// No weapon
_nw_fallarray = ["aparpercmstpsnonwnondnon_amovppnemstpsnonwnondnon"];

// Possible animations indexed by weapon type.
_fallAnims = [_nw_fallarray, _hw_fallarray, _pw_fallarray, _sw_fallarray];
_knl_fallAnims = [[], _knl_hw_fallarray, _knl_pw_fallarray, []];

// Check if unit is falling already (so multiple falls aren't called)
_isFalling = _unit getVariable ["tmr_falling", false];

if (!_isFalling) then {
	// Mark that unit is falling
	_unit setVariable ["tmr_falling", true];

	// Get best animation for current stance.
	_detectStance = (_unit selectionPosition "Neck" select 2);

	// Must be kneeling or higher.
	if (_detectStance > 0.65) then {

		if (_detectStance > 1.1) then {
			// Standing:
			// Play fall to ground animation
			_possibleAnims = _fallAnims select _wepType;
			_anim = _possibleAnims call BIS_fnc_selectRandom;

			_unit switchMove _anim;	
		} else {
			// Crouching:
			// Fall back to sitting position (pistol/rifle only)

			_possibleAnims = _knl_fallAnims select _wepType;
			_anim = _possibleAnims call BIS_fnc_selectRandom;

			_unit switchMove _anim;	
		};

		// Clear falling after 2 seconds and ensure that AI gets back to prone.
		_unit spawn {
			sleep 2;

			_this setVariable ["tmr_falling", false];

			if (alive _this && !isPlayer _this) then {
				// Back to prone.
				_this playMoveNow "amovppnemstpsraswrfldnon";
			};
		};
	};
};
