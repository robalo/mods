//#define DEBUG_MODE_FULL
#include "script_component.hpp"
LOG(MSG_INIT);

#include "initSettings.sqf"

GVAR(needmax) = [ // The level of supplies the unit will try to maintain
	GVAR(rearm_mags), // mags for primary weapon
	GVAR(rearm_fak)  // fak
];

PREP(allowRearm);
PREP(getCompatMags);
PREP(countItems);
PREP(inventoryCheck);
PREP(pistolToPrimary);
PREP(rearm);
PREP(rearmAll);
PREP(inventoryClosed);
