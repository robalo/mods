// returns array with 1 cover position near unit
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_dangerobj", ["_maxdisttocover", 100]];

scopeName "main";
private ["_coverpos","_fnc_debug","_nBuilding"];

_fnc_debug = {
	private ["_unit","_object","_marker","_markercolor"];
	_unit = _this select 0;
	_object = _this select 1;
	_markercolor = _this select 2;
	_marker =_object call bis_fnc_boundingboxmarker;
	_marker setmarkercolor _markercolor;
	diag_log format ["ASR AI3: Good cover for unit %1 near %2, type: %3",_unit,_object,(typeOf _object)];
};

private _cover = [];
private _isHouse = false;
private _nearThingies = nearestObjects [_unit, ["Car","Motorcycle","Tank","HouseBase","Wall","Wreck"], _maxdisttocover];
_nearThingies append (nearestTerrainObjects [_unit, [], _maxdisttocover]);
//TRACE_1("",_nearThingies);

{
	if (_x call FUNC(canCover)) then {
		(_x call bis_fnc_boundingBoxDimensions) params ["_maxWidth", "_maxLength", "_maxHeight"];
		TRACE_4("EVAL COVER OBJ SIZE",_x,_maxWidth,_maxLength,_maxHeight);

		if (_maxHeight > 1) then {
			private _min = _maxWidth min _maxLength;
			private _max = _maxWidth max _maxLength;
			if (_min > 0.5 && _max > 1) then {
				private _objpos = getPosATL _x;
				if (isNull _dangerobj) then {_dangerobj = _unit findNearestEnemy _unit};
				if (isNull _dangerobj) then { // danger source unknown, just get to some cover
					_coverpos = _objpos findEmptyPosition [0,1];
					if (count _coverpos > 0) then {
						_cover pushBack _coverpos;
						if (GVAR(debug)) then {[_unit,_x,"colorred"] call _fnc_debug};
					}
				} else { // danger source known, hide behind cover
					private _dangerpos = _unit getHideFrom _dangerobj;
                    _coverpos = _x getPos [_max + 1.5, _dangerpos getDir _objpos];
					_cover pushBack _coverpos;
					if (GVAR(debug)) then {[_unit,_x,"colorgreen"] call _fnc_debug};
				};
				if (count _cover > 0) then {
					if (_x isKindOf "HouseBase") then {_isHouse = true; _nBuilding = _x};
					breakTo "main";
				};
			};
		};
	};
} forEach _nearThingies;

if (_isHouse && {random 1 < GVAR(usebuildings)}) then {
	private _bposa = ([_nBuilding] call BIS_fnc_buildingPositions) call BIS_fnc_arrayShuffle;
	if (count _bposa > 0) then {
		// pick some building positions and add them to the returned cover array
		{if (_x select 2 > 1.5 || {random 1 > 0.2}) then {_cover pushBack _x}} forEach _bposa;
	};
};

TRACE_1("findCover returns",_cover);
_cover
