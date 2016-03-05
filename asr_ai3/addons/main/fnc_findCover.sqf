// returns array with 1 cover position near unit
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
params ["_unit", "_dangerobj", ["_maxdisttocover", 100]];

scopeName "main";
private ["_cover","_enemydist","_dangerpos","_coverpos","_debug","_fnc_debug","_bposa","_bbdim","_maxWidth","_maxLength","_maxHeight","_min","_max","_objpos","_nBuilding","_isHouse"];

_debug = (GVAR(debug) > 0);

_fnc_debug = {
	private ["_unit","_object","_marker","_markercolor"];
	_unit = _this select 0;
	_object = _this select 1;
	_markercolor = _this select 2;
	_marker =_object call bis_fnc_boundingboxmarker;
	_marker setmarkercolor _markercolor;
	diag_log format ["Good cover for unit %1 near %2, type: %3",_unit,_object,(typeOf _object)];
};

_cover = [];
_isHouse = false;

{
	if (_x call FUNC(canCover)) then {
		_bbdim = _x call bis_fnc_boundingBoxDimensions;
		_maxWidth = _bbdim select 0;
		_maxLength = _bbdim select 1;
		_maxHeight = _bbdim select 2;
		TRACE_4("EVAL COVER OBJ SIZE",_x,_maxWidth,_maxLength,_maxHeight);

		if (_maxHeight > 1) then {
			_min = _maxWidth min _maxLength;
			_max = _maxWidth max _maxLength;
			if (_min > 0.5 && _max > 1) then {
				_objpos = getPosATL _x;
				if (isNull _dangerobj) then {_dangerobj = _unit findNearestEnemy _unit};
				if (isNull _dangerobj) then { // danger source unknown, just get to some cover
					_coverpos = _objpos findEmptyPosition [1,10];
					if (count _coverpos > 0) then {
						_cover pushBack _coverpos;
						if (_debug) then {[_unit,_x,"colorred"] call _fnc_debug};
					}
				} else { // danger source known, hide behind cover
					_dangerpos = _unit getHideFrom _dangerobj;
					_enemydist = _dangerpos distance _objpos;
					_coverpos = [_dangerpos, (_enemydist + _max + 2), ([_dangerpos, _objpos] call BIS_fnc_dirTo)] call BIS_fnc_relPos;
					_cover pushBack _coverpos;
					if (_debug) then {[_unit,_x,"colorgreen"] call _fnc_debug};
				};
				if (count _cover > 0) then {
					if (_x isKindOf "HouseBase") then {_isHouse = true; _nBuilding = _x};
					breakTo "main";
				};
			};
		};
	};
} forEach (nearestObjects [_unit, [], _maxdisttocover]);

if (_isHouse && {random 1 < GVAR(usebuildings)}) then {
	_bposa = ([_nBuilding] call BIS_fnc_buildingPositions) call BIS_fnc_arrayShuffle;
	if (count _bposa > 0) then {
		// pick some building positions and add them to the returned cover array
		{if (_x select 2 > 1.5 || {random 1 > 0.2}) then {_cover pushBack _x}} forEach _bposa;
	};
};

TRACE_1("findCover returns",_cover);
_cover
