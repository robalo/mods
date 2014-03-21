// returns array with 1 cover position near unit
//#define DEBUG_MODE_FULL
#include "script_component.hpp"
PARAMS_2(_unit,_dangerobj);
DEFAULT_PARAM(2,_maxdisttocover,100);

scopeName "main";
private ["_nearobj","_cover","_enemydist","_dangerpos","_coverpos","_debug","_fnc_debug","_fnc_filter"];

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

_fnc_filter = {
	private "_type";
	if (_this isKindOf "Man" || _this isKindOf "Bird") exitWith {false};
	if (_this isKindOf "BulletCore" || _this isKindOf "Grenade") exitWith {false};
	if (_this isKindOf "WeaponHolder" || _this isKindOf "WeaponHolderSimulated") exitWith {false};
	if (!isTouchingGround _this) exitWith {false};
	if (isBurning _this) exitWith {false};
	_type = typeOf _this;
	if (_type == "") then {
		if (damage _this == 1) exitWith {false};
	} else {
		if (_type in ["Land_Concrete_SmallWall_4m_F", "Land_Concrete_SmallWall_8m_F"]) exitWith {false};
		if (_type in ["#crater","#crateronvehicle","#soundonvehicle","#particlesource","#lightpoint","#slop","#mark"]) exitWith {false};
	};
	if ((boundingCenter _this) select 2 < 0.5) exitWith {false};
	true
};

_cover = [];
_nearobj = [(nearestObjects [_unit, [], _maxdisttocover]), {_x call _fnc_filter}] call BIS_fnc_conditionalSelect;

{
	private ["_bbdim","_maxWidth","_maxLength","_maxHeight","_min","_max","_objpos"];
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
					_cover set [count _cover, _coverpos];
					if (_debug) then {[_unit,_x,"colorred"] call _fnc_debug};
				}
			} else { // danger source known, hide behind cover
				_dangerpos = _unit getHideFrom _dangerobj;
				_enemydist = _dangerpos distance _objpos;
				_coverpos = [_dangerpos, (_enemydist + _max + 2), ([_dangerpos, _objpos] call BIS_fnc_dirTo)] call BIS_fnc_relPos;
				_cover set [count _cover, _coverpos];
				if (_debug) then {[_unit,_x,"colorgreen"] call _fnc_debug};
			};
			if (count _cover > 0) then {breakTo "main"};
		};
	};
} forEach _nearobj;

_cover
