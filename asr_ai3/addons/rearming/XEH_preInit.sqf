//#define DEBUG_MODE_FULL
#include "script_component.hpp"
LOG(MSG_INIT);

#include "initSettings.sqf"

GVAR(needmax) = [ // The level of supplies the unit will try to maintain
	GVAR(rearm_mags), // mags for primary weapon
	GVAR(rearm_fak)  // fak
];

#include "XEH_PREP.hpp"
