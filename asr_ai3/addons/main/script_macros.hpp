#include "\x\cba\addons\main\script_macros_common.hpp"

#define FNCMAIN(var1) TRIPLES(PREFIX,main_fnc,var1)

#define ASR_AI_SETDEFAULT(var,def) if (isNil QGVAR(var)) then {GVAR(var) = def}; TRACE_1("",GVAR(var))
#define __ISMEDIC(unit) getNumber(configFile >>"CfgVehicles">>(typeOf ##unit)>>"attendant") == 1

#include "script_weapons.hpp"
#include "script_units.hpp"

#define ASR_AI_AMMO_AUDIBLE0 2
#define ASR_AI_AMMO_AUDIBLE1 100
#define ASR_AI_AMMO_RANGE_HIT_FAR 1200
#define ASR_AI_AMMO_RANGE_HIT_SMALL 5
#define ASR_AI_AMMO_RANGE_CRACKS 120
