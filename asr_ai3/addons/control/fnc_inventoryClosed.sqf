//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit"];
if (local _unit) then {
    private _gbal = _unit getVariable [QGVAR(getBackAfterLoot), 0];
    if (_gbal > 0) then {
        if (_gbal > 1) then {
            _unit lookAt objNull;
            _unit doFollow leader _unit;
        };
        _unit setVariable [QGVAR(getBackAfterLoot), nil];
    };
};
