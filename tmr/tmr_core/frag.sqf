// TMR: Blast Fragmentation initialization and functions
// (C) 2013 Ryan Schultz. See LICENSE.

tmr_blastfrag = false;

tmr_blastfrag_createFrags = {
	_position = _this select 0;
	_fragV = _this select 1;
	_fragCount = _this select 2;
	_fragMaxSize = _this select 3;
	_fragPattern = "sphere";
	if (count _this > 4) then {
		_fragPattern = _this select 4;
	};
	_fragConeDir = [];
	_fragConeElevAngle = 30;
	_fragConeDirAngle = 30;
	if (_fragPattern == "cone") then {
		_fragConeDir = _this select 5;
		_fragConeDirAngle = _this select 6;
		_fragConeElevAngle = _this select 7;
	};

	// Vary frag count by 10%
	_fragCount = round (_fragCount + (random _fragCount / 5 - (random _fragCount / 10)));

	// Don't create shrapnel that will just go right into the ground
	if (_fragPattern == "sphere" && (_position select 2) < 0.2) then {
		_position = [_position select 0, _position select 1, 0.2];
	};

	for "_i" from 1 to _fragCount do {
		_possibleFrags = ["TMR_TinyFrag", "TMR_LightFrag"];
		if (_fragMaxSize == "med") then {
			_possibleFrags = ["TMR_TinyFrag", "TMR_LightFrag", "TMR_MedFrag", "TMR_MedFrag"];
		} else {
			if (_fragMaxSize == "big") then {
				_possibleFrags = ["TMR_LightFrag", "TMR_MedFrag", "TMR_MedFrag", "TMR_BigFrag"];
			};
		};

		// Create the fragment
		_frag = (_possibleFrags call BIS_fnc_selectRandom) createVehicle _position;

		if (_fragPattern == "sphere") then {
			// Give velocity in a random angle
			_dir = [];
			if (_position select 2 < 1) then {
				_dir = [(random 2) - 1, (random 2) - 1, (random 0.85) + 0.15];
			} else {
				_dir = [(random 2) - 1, (random 2) - 1, (random 2) - 1];
			};

			// Vary frag velocity by 10%
			_frag setVelocity ([_dir, (random _fragV) / 5 - (random _fragV / 10)] call BIS_fnc_vectorMultiply);
			//_frag setVelocity [_dir, _fragV] call BIS_fnc_vectorMultiply;
		};

		if (_fragPattern == "cone") then {
			// Convert degrees to Cartesian offsets
			_xd = _fragConeDir select 0;
			_yd = _fragConeDir select 1;
			_zd = _fragConeDir select 2;

			_a = _fragConeDirAngle / 180;
			_e = _fragConeElevAngle / 180;

			// Add random angle to base angle
			_xd = _xd + (random _a * 2 - _a);
			_yd = _yd + (random _a * 2 - _a);
			_zd = _zd + (random _e * 2 - _e);

			_dir = [_xd, _yd, _zd];

			// Vary frag velocity by 10%
			_frag setVelocity ([_dir, (random _fragV) / 5 - (random _fragV / 10)] call BIS_fnc_vectorMultiply);
		};
	};
};

tmr_blastfrag = true;