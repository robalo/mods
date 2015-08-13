
if (_this getVariable ["BIS_revive_incapacitated", false]) exitWith {true}; //for BIS Revive
if (_this getVariable ["tcb_ais_agony", false]) exitWith {true}; //for psycho AIS
if (_this getVariable ["INS_REV_PVAR_is_unconscious", false]) exitWith {true}; //for INS Revive
private "_unc";
_unc = switch (lifeState _this) do
{
	case "DEAD": {true};
	case "UNCONSCIOUS": {true};
	case "INCAPACITATED": {true};
	default {false};
};
_unc
