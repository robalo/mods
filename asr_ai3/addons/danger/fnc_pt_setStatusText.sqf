
#include "script_component.hpp"

private _unit = _this select 0;
private _text = _this select 1;

if(GVAR(debug_findcover)) then {
    _this spawn {
        _unit = _this select 0;
        _text = _this select 1;
        if(isNil "statusWords") then {
            statusUnits = [];
            statusWords = [];
                
            // Display values
            F_SIZE_NAMETAGS = 0.03; // The size the names are displayed in
            F_SHADOW_NAMETAGS = 2; // The shadow for the name tags (0 - 2)
            f_color_Nametags =  [1,1,1,0.9]; // The color for infantry and units in vehicle cargo (in [red,green, blue, opacity])
            F_FONT_NAMETAGS = "EtelkaMonospaceProBold"; // Font for the names
                
            addMissionEventHandler ["Draw3D", {
            {
                drawIcon3D ["", f_color_Nametags, (getPosATL _x) vectorAdd [0,0, 2], 0, 0, 0, (statusWords select _forEachIndex),F_SHADOW_NAMETAGS,F_SIZE_NAMETAGS,F_FONT_NAMETAGS];
            } forEach statusUnits;

            }];
        };
        private _foundUnit = -1;
        {
            if(_x == _unit) then {
                _foundUnit = _forEachIndex;
            }
        } forEach statusUnits;

        if(_foundUnit == -1) then {
            statusUnits pushBack _unit;
            statusWords pushBack _text;
        }else {
            statusWords set [_foundUnit, _text];
        };
    };
};


