//#define DEBUG_MODE_FULL
#include "\a3\editor_f\Data\Scripts\dikCodes.h"
#include "script_component.hpp"
LOG(MSG_INIT);

#include "initSettings.sqf"

GVAR(copymystance) = 0;
GVAR(fireonme) = 0;

#include "XEH_PREP.hpp"

["ASR AI3", "asr_ai3_copymystance", ["Copy My Stance", "AI subordinates follow player stance"], {[player, 1] call FUNC(copyMyStance)}, {}, [DIK_BACKSLASH, [true, true, false]]] call cba_fnc_addKeybind;
["ASR AI3", "asr_ai3_copymystancestop", ["Do Not Copy My Stance", "AI subordinates stop following player stance"], {[player, 0] call FUNC(copyMyStance)}, {}, [DIK_SLASH, [true, true, false]]] call cba_fnc_addKeybind;
["ASR AI3", "asr_ai3_fireonmyshot", ["Toggle Fire On My Shot", "AI hold fire until player shoots"], {player call FUNC(fireOnMyShot)}, {}, [DIK_RBRACKET, [true, true, false]]] call cba_fnc_addKeybind;
//["ASR AI3", "asr_ai3_getgearat", ["Open Inventory At Container", "Order selected unit(s) to get gear at aimed/closest container"], {player call FUNC(getGearAt)}, {}, [DIK_G, [true, true, false]]] call cba_fnc_addKeybind;
["ASR AI3", "asr_ai3_flashlightson", ["Turn on flashlights"], {[player, true, true] call FUNC(flipGunLights)}, {}, [DIK_F, [true, true, false]]] call cba_fnc_addKeybind;
["ASR AI3", "asr_ai3_flashlightsoff", ["Turn off flashlights"], {[player, true, false] call FUNC(flipGunLights)}, {}, [DIK_F, [true, true, true]]] call cba_fnc_addKeybind;
["ASR AI3", "asr_ai3_laserson", ["Turn on IR pointers"], {[player, false, true] call FUNC(flipGunLights)}, {}, [DIK_L, [true, true, false]]] call cba_fnc_addKeybind;
["ASR AI3", "asr_ai3_lasersoff", ["Turn off IR pointers"], {[player, false, false] call FUNC(flipGunLights)}, {}, [DIK_L, [true, true, true]]] call cba_fnc_addKeybind;
["ASR AI3", "asr_ai3_unfreeze", ["Reset selected units"], {player call FUNC(unFreeze)}, {}, [DIK_U, [true, true, false]]] call cba_fnc_addKeybind;
