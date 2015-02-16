//#define DEBUG_MODE_FULL
#include "script_component.hpp"
LOG(MSG_INIT);

GVAR(radius) = 40;

GVAR(needmax) = [ // The level of supplies the unit will try to maintain
	3, // mags for primary weapon
	1  // fak
];

PREP(isReady);
PREP(getCompatMags);
PREP(countItems);
PREP(inventoryCheck);
PREP(rearm);
