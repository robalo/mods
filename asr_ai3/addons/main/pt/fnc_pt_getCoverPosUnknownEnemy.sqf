
//find closest position to coverObj which does not touch cover obj, then back up 0.4m and return that position.

rp_fnc_findCenter = compile preprocessFile "fnc_pt_findPossibleCenter.sqf";
_unit = _this select 0;
_coverObj = _this select 1;

format ["getCoverPosforUnknown enemy: unit %1, coverObj %2", _unit, _coverObj] call BIS_fnc_log;
_boundingCenter = (boundingCenter _coverObj);

            
            
_coverPos = [_coverObj, _unit] call rp_fnc_findCenter;
coverPos = _coverPos;
eye = ASLToATL eyePos Ai1;
if(count _coverPos == 0) exitWith {
    //unable to find obj model starting point, give up.
    [];
};
_height = _coverPos select 2;
         addMissionEventHandler ["Draw3D", {
        drawLine3D [eye, (ASLToATL coverPos),[1,0,0,1]]}];

_resolution = (_coverPos distance (getPosASL _unit)) / 2;

_dirFromUnitToCover = [_unit, _coverPos] call BIS_fnc_dirTo;
_color = 0;
_vectorAdd = 0;
//step 2, find the point closest to the unit which is outside the model (to within a precision of at least 0.25m)
while {_resolution > 0.25} do {
	_vectorAdd = _vectorAdd + 0.1;

	//if the cover is in the line, back the line up towards the unit
	if(_coverObj in lineIntersectsWith [ _coverPos, (getPosATL _unit vectorAdd [0,0, _height])]) then {
		_coverPos = [_coverPos,_resolution,  _dirFromUnitToCover+180] call BIS_fnc_relPos;
	} else {
        //else move the line towards the cover
		_coverPos = [_coverPos, _resolution, _dirFromUnitToCover] call BIS_fnc_relPos;
	};
	_resolution = _resolution / 2;
};

_coverPos = [_coverPos, -0.8, _dirFromUnitToCover] call BIS_fnc_relPos;
_coverPos;