//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (_this getVariable ["BIS_revive_incapacitated", false]) exitWith {true}; //for BIS Revive
if (_this getVariable ["tcb_ais_agony", false]) exitWith {true}; //for psycho AIS
if (_this getVariable ["INS_REV_PVAR_is_unconscious", false]) exitWith {true}; //for INS Revive
private _lifestate = lifeState _this;
(_lifestate == "DEAD" || _lifestate == "UNCONSCIOUS" || _lifestate == "INCAPACITATED")
