//#define DEBUG_MODE_FULL
#include "\a3\editor_f\Data\Scripts\dikCodes.h"
#include "script_component.hpp"
LOG(MSG_INIT);

#include "initSettings.sqf"

GVAR(copymystance) = 0;
GVAR(fireonme) = 0;

PREP(copyMyStance);
PREP(fireOnMyShot);
PREP(onTeamSwitch);

["ASR AI3", "asr_ai3_copymystance", ["Toggle Copy My Stance", "AI subordinates follow player stance"], {player call FUNC(copyMyStance)}, {}, [DIK_BACKSLASH, [true, true, false]]] call cba_fnc_addKeybind;
["ASR AI3", "asr_ai3_fireonmyshot", ["Toggle Fire On My Shot", "AI hold fire until player shoots"], {player call FUNC(fireOnMyShot)}, {}, [DIK_RBRACKET, [true, true, false]]] call cba_fnc_addKeybind;
