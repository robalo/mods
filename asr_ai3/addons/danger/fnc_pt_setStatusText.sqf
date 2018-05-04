#include "script_component.hpp"
params ["_unit", "_text"];

if (GVAR(debug_findcover)) then {
    if (isNil QGVAR(statusWords)) then {
        GVAR(statusUnits) = [];
        GVAR(statusWords) = [];
            
        // Display values
        #define F_SIZE_NAMETAGS 0.03                        // The size the names are displayed in
        #define F_SHADOW_NAMETAGS 2                         // The shadow for the name tags (0 - 2)
        #define F_COLOR_NAMETAGS [1,1,1,0.9]                // The color for infantry and units in vehicle cargo (in [red,green, blue, opacity])
        #define F_FONT_NAMETAGS "EtelkaMonospaceProBold"    // Font for the names

        addMissionEventHandler ["Draw3D", {
          {
            drawIcon3D ["", F_COLOR_NAMETAGS, (getPosATL _x) vectorAdd [0, 0, 2], 0, 0, 0, GVAR(statusWords) select _forEachIndex, F_SHADOW_NAMETAGS, F_SIZE_NAMETAGS, F_FONT_NAMETAGS];
          } forEach GVAR(statusUnits);
        }];
    };
    private _foundUnit = GVAR(statusUnits) find _unit;

    if (_foundUnit == -1) then {
        GVAR(statusUnits) pushBack _unit;
        GVAR(statusWords) pushBack _text;
    } else {
        GVAR(statusWords) set [_foundUnit, _text];
    };
};
