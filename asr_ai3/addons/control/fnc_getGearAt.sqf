//send selected units to get gear at aimed container
//#define DEBUG_MODE_FULL
#include "script_component.hpp"

[groupSelectedUnits player, cursorTarget] spawn {
    params ["_units", "_loot"];
    {
        if (isNull _loot) then {
            // get nearest supply; if nothing else unit will open it's own gear where it stands
            private _supplies = nearestObjects [_x, ["ReammoBox","ReammoBox_F","WeaponHolderSimulated","LandVehicle","CAManbase"], 50];
            if (count _supplies > 1) then {_loot = _supplies select 1};
        };
        if (isNull _loot) then {
            _x setVariable [QGVAR(getBackAfterLoot), 1];
            _x action ["GearOpen", objNull];
        } else {
            _x setVariable [QGVAR(getBackAfterLoot), 2];
            _x reveal _loot;
            _x lookAt _loot;
            [_x, getPosWorld _loot, true] call FNCMAIN(moveTo);
            sleep 1;
            waitUntil {unitReady _x};
            _x action ["Gear", _loot];
            sleep 1;
        };
        waitUntil {isNil {_x getVariable QGVAR(getBackAfterLoot)}};
        player groupSelectUnit [_x, false];
    } forEach _units;
};

true
