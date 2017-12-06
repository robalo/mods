//#define DEBUG_MODE_FULL
#include "script_component.hpp"
LOG(MSG_INIT);

private _otseh1 = addMissionEventHandler ["TeamSwitch", {_this call FUNC(onTeamSwitch)}];
