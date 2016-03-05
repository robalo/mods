//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];
if (!(isPlayer _unit) && {local _unit} && {_unit call FUNC(isValidUnitC)}) then {_unit call FUNC(pistolToPrimary)};
