//#define DEBUG_MODE_FULL
#include "script_component.hpp"
#include "\a3\editor_f\Data\Scripts\dikCodes.h"
if (isMultiplayer) exitWith {}; //exit if MP - not ready yet, would mess with revive systems and need to take care of code locality

LOG(MSG_INIT);

[
    QGVAR(incodiff),
    "LIST",
    "Incognito mode",
    "ASR AI3",
    [[0, 1, 2, 3], ["Disabled", "Easy", "Normal", "Hard"], 2],
    true,
    {if (GVAR(incodiff) == 0) then {{_x setCaptive false} forEach units player};}
] call CBA_Settings_fnc_init;

[ QGVAR(incohint), "CHECKBOX", "Incognito hints", "ASR AI3", false, true, {} ] call CBA_Settings_fnc_init;
[ QGVAR(incodbg), "CHECKBOX", "Incognito debug (RPT)", "ASR AI3", false, true, {} ] call CBA_Settings_fnc_init;

PREP(isFlanking);
PREP(angTowards);
