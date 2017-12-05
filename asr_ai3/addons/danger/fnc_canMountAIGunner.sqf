//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (locked _this == 2) exitWith {false};
if (allTurrets [_this, false] isEqualTo []) exitWith {false};
if (_this emptypositions "Gunner" > 0) exitWith {true};
{!alive (_x select 0)} count fullCrew [_this, "gunner"] > 0;
