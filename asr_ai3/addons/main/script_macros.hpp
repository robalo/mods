#include "\x\cba\addons\main\script_macros_common.hpp"

#define FNCMAIN(var1) TRIPLES(PREFIX,main_fnc,var1)

#define ASR_AI_SETDEFAULT(var,def) if (isNil QGVAR(var)) then {GVAR(var) = def}; TRACE_1("",GVAR(var))
#define __ISMEDIC(unit) unit getUnitTrait "Medic"

#include "script_weapons.hpp"
#include "script_units.hpp"
#include "script_camo.hpp"
