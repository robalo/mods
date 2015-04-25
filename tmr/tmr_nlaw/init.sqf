// TMR: NLAW Attack & Guidance initialization and functions
// (C) 2013 Ryan Schultz. See LICENSE.

tmr_nlaw = false;

// Set global variables
tmr_nlaw_trackingMode = 0; // 0 = direct attack, 1 = PLOS tracking
tmr_nlaw_deltaXOverTAverage = 0;
tmr_nlaw_deltaYOverTAverage = 0;
tmr_nlaw_deltaZOverTAverage = 0;
tmr_nlaw_trackingWarheads = ["NLAW_F", "TMR_NLAW_MPV_F"];

tmr_nlaw_deltaXOverTSum = 0;
tmr_nlaw_deltaYOverTSum = 0;
tmr_nlaw_deltaZOverTSum = 0;
tmr_nlaw_trackCount = 0;

// Include modified BIS functions
#include "bis_functions.sqf"

// -------------------------------------------------------------------------------
// KeyDown event handler: Begin tracking when plunger is held down.
// -------------------------------------------------------------------------------
tmr_nlaw_fnc_trackingKeyDownEH = {
	// _displayCtrl = _this select 0;
	_dikCode = _this select 1;
	_shift = _this select 2;
	_ctrl = _this select 3;
	_alt = _this select 4;

	_return = false;

	// NLAWs only.
	_weaponType = currentWeapon player;
	if !(_weaponType == "launch_NLAW_F" || _weaponType == "tmr_launch_NLAW_MPV_F") exitWith {false};

	if (_dikCode in actionKeys "LockTargets" && tmr_nlaw_trackingMode != 1 && currentMagazine player in tmr_nlaw_trackingWarheads) then {
		_return = true;
		// Switch mode to PLOS
		tmr_nlaw_trackingMode = 1;

		playSound "tmr_nlaw_plungerPress";

		[] spawn tmr_nlaw_fnc_track;
	};

	_return;
};

// -------------------------------------------------------------------------------
// KeyUp event handler: End tracking when plunger is released.
// -------------------------------------------------------------------------------
tmr_nlaw_fnc_trackingKeyUpEH = {
	// _displayCtrl = _this select 0;
	_dikCode = _this select 1;
	_shift = _this select 2;
	_ctrl = _this select 3;
	_alt = _this select 4;

	// PCMLs only.
	_weaponType = currentWeapon player;
	if !(_weaponType == "launch_NLAW_F" || _weaponType == "tmr_launch_NLAW_MPV_F") exitWith {false};

	_return = false;

	if (_dikCode in actionKeys "LockTargets" && tmr_nlaw_trackingMode != 0) then {
		_return = true;
		// Switch mode to direct attack
		tmr_nlaw_trackingMode = 0;

		// Clear tracking values.
		tmr_nlaw_deltaXOverTAverage = 0;
		tmr_nlaw_deltaYOverTAverage = 0;
		tmr_nlaw_deltaZOverTAverage = 0;
		tmr_nlaw_deltaXOverTSum = 0;
		tmr_nlaw_deltaYOverTSum = 0;
		tmr_nlaw_deltaZOverTSum = 0;
		tmr_nlaw_trackCount = 0;

		playSound "tmr_nlaw_plungerRelease";
	};

	_return;
};


// -------------------------------------------------------------------------------
// Fired EH for PCML. Calls guidance code and sets missile behavior characteristics.
// -------------------------------------------------------------------------------
tmr_nlaw_fnc_pcml_firedEH = {
	_unit = _this select 0;
	_weaponType = _this select 1;
	_missile = _this select 6;

	if (!local _unit) exitwith {};
	// if (!isPlayer _unit) exitwith {};

	tmr_nlaw_missile = _missile;

	// Case sensitive!
	_pcmlOTAMissiles = ["launch_NLAW_F"];
	_pcmlDirectAttackOnlyMissiles = ["TMR_launch_NLAW_MPV_F"];

	// PCML only.
	if !(_weaponType in _pcmlOTAMissiles || _weaponType in _pcmlDirectAttackOnlyMissiles) exitwith {};

	// Get the line of sight of the weapon.
	_lineOfSight = _unit weaponDirection _weaponType;
	// Starting position for flight range calculation.
	_launchPos = getPos _missile;
	_launchPosASL = getPosASL _missile;
	_launchTime = time;

	// Soft-launch missiles have two stages: a launch charge, and main rocket.
	// The launch charge is everything before the main rocket engages, so it only
	// has an acceleration value.

	// Stop missile.
	_missile setVelocity [0,0,0];

	// Launch rocket motor acceleration
	_launcherAcceleration = 3;
	// Main rocket motor performance
	_rocketInitTime = 0.24; // Time before rocket motor engages
	_rocketLife = 0.75; // Burn time
	_rocketInitV = 70; // Velocity reached by launch charge at rocket start
	_rocketMaxV = 255; // Velocity reached at burnout

	// In rocketLife seconds, missile accelerates from initV m/s to maxV
	_acceleration = (_rocketMaxV - _rocketInitV) / _rocketLife;
	_drag = -0.015;

	// EFP characteristics
	_hasEFP = false;
	if (_weaponType in _pcmlOTAMissiles) then {
		_hasEFP = true;
	};
	_efpType = "TMR_NLAW_EFP";
	_efpMissileExplodeType = "TMR_NLAW_MissileExplode";
	_efpSpeed = 600;

	// Fly-up for OTA
	// Distance in meters before rocket has fully popped-up. (Guessed, no data.)
	_flyUpDistance = 20; 
	_flyUpHeight = 0;
	if (_weaponType in _pcmlOTAMissiles) then {
		_flyUpHeight = 3.1; // Height in meters above LOS that missile will fly-up to.
	};
	// Because the optic on the PCML is boresighted rather than canted up slightly,
	// the fly-up height is lower than it would otherwise be, I think.

	// Call guidance code
	[_unit, _missile, _weaponType, _lineOfSight, _launcherAcceleration, _rocketInitTime, _rocketLife, _rocketInitV, _acceleration, _drag, _flyUpDistance, _flyUpHeight, _plosFlightTime, _launchPos, _launchPosASL, _launchTime, _efpSpeed, _efpType, _efpMissileExplodeType, _hasEFP, _missileType] call tmr_nlaw_fnc_plosMissile_guidance;
};

// -------------------------------------------------------------------------------
// Function to guide a missile with a PLOS guidance system.
// -------------------------------------------------------------------------------
tmr_nlaw_fnc_plosMissile_guidance = {
	_unit = _this select 0;
	_missile = _this select 1;
	_weaponType = _this select 2;
	_lineOfSight = _this select 3;
	_launcherAcceleration = _this select 4;
	_rocketInitTime = _this select 5;
	_rocketLife = _this select 6;
	_rocketInitV = _this select 7;
	_acceleration = _this select 8;
	_drag = _this select 9;
	_flyUpDistance = _this select 10;
	_flyUpHeight = _this select 11;
	_plosFlightTime = _this select 12;
	_launchPos = _this select 13;
	_launchPosASL = _this select 14;
	_launchTime = _this select 15;
	_efpSpeed = _this select 16;
	_efpType = _this select 17;
	_efpMissileExplodeType = _this select 18;
	_hasEFP = _this select 19;

	_targetVector = _lineOfSight; // Deprecated!

	// End the tracking system (prevent loop resource fight).
	tmr_nlaw_trackingMode = 0;

	if (isNull _missile) exitwith {}; // Make sure missile didn't already blow up!

	// Huge public event handler follows.
	_handle = [
	/* Code */
	{
		// Guidance System
		// -----------------------------------
		_flightTime = (time - _launchTime) + 1.0;

		_deltaX = _deltaXOverTAverage * _flightTime;
		_deltaY = _deltaYOverTAverage * _flightTime;
		//_deltaZ = _deltaZOverTAverage * _flightTime;
		_deltaZ = 0; // Only azimuth is considered in PLOS, not elevation.

		// These values will be 0 if PLOS is not being used, so you will get
		// a straight flight path.
		_deltaVector = [_deltaX, _deltaY, _deltaZ];

		// Add increase to initial flight vector
		_targetVector = [_initialVector, _deltaVector] call BIS_fnc_vectorAdd;
		_tvX = _targetVector select 0;
		_tvY = _targetVector select 1;
		_tvZ = _targetVector select 2;

		// Adjust the flight path slightly each tick until
		// perfectly aligned with target vector.
		// If vector is too far, do our best to get there 
		// at the max rate of adjustment.
		_cvX = _currentVector select 0;
		_cvY = _currentVector select 1;
		_cvZ = _currentVector select 2;

		// Maximum adjustment allowed per second (to unit vector)
		// Determined experimentally.
		_modY = 0.74; // Yaw
		_modP = 0.74; // Pitch

		// Script lag compensation
		// We permit an adjustment of _mod every 1 second.
		// Compensate for the script execution time.
		_execTime = time - _startExecTime;
		if (_execTime == 0) then { _execTime = 0.0000001; };
		_modY = _modY * _execTime;
		_modP = _modP * _execTime;

		_d = _cvX - _tvX;
		if (_d < 0) then {
			_cvX = _cvX + (_modY min abs _d);
		};
		if (_d > 0) then {
			_cvX = _cvX - (_modY min abs _d);
		};

		_d = _cvY - _tvY;
		if (_d < 0) then {
			_cvY = _cvY + (_modY min abs _d);
		};
		if (_d > 0) then {
			_cvY = _cvY - (_modY min abs _d);
		};

		_d = _cvZ - _tvZ;
		if (_d < 0) then {
			_cvYZ = _cvZ + (_modP min abs _d);
		};
		if (_d > 0) then {
			_cvZ = _cvZ - (_modP min abs _d);
		};

		_currentVector = [_cvX, _cvY, _cvZ];

		// If the missile has not reached the fly up distance yet, adjust up
		if (_launchPosASL distance getPosASL _missile < _flyUpDistance) then {
			_flyUpVector = [_currentVector, _flyUpDistance] call BIS_fnc_vectorMultiply;
			_flyUpVector = [_flyUpVector select 0, _flyUpVector select 1, (_flyUpVector select 2) + _flyUpHeight / 7.75];

			// Get the vector from current position to the fly-up height
			_flyUpTransformVector = [_currentVector, _flyUpVector] call BIS_fnc_vectorFromXToY;
			_currentVector = [_currentVector select 0, _currentVector select 1, _flyUpTransformVector select 2];
		};

		// Start main rocket if launch rocket has burned out
		if (!_rocketBurnout && !_rocketActive && time > _launchTime + _rocketInitTime) then {
			_rocketStartedAt = time;
			_rocketActive = true;
		};

		if (!_rocketBurnout && _rocketActive && time >= _rocketStartedAt + _rocketLife) then {
			// Burnout.
			_rocketActive = false;
			_rocketBurnout = true;
			_maxV = (velocity _missile) call BIS_fnc_magnitude;
		};

		_deltaV = 0;
		if (!_rocketActive && !_rocketBurnout) then {
			// Launch rocket acceleration
			_deltaV = _launcherAcceleration * (time - _launchTime);
			_mag = _rocketInitV + _deltaV;
		} else {
			if (!_rocketBurnout) then {
				// Main rocket acceleration
				_deltaV = _acceleration * (time - _rocketStartedAt);
				_mag = _rocketInitV + _deltaV;
			} else {
				// No thrust -- deceleration from drag.
				_deltaV = _drag * (time - (_rocketStartedAt + _rocketLife));
				_mag = _mag + _deltaV;
			};
		};

		// Drop from gravity
		_gravity = 0;
		// Slight, increasing drop even in 'flattened trajectory'
		if (_rocketBurnout) then {
			_gravity = 0.000018 * ((time - _launchTime) * 1.9);
		};
		_dropTime = (time - _launchTime);
		_modZ = _gravity * (time - _launchTime);
		_currentVector = [_currentVector select 0, _currentVector select 1, (_currentVector select 2) - _gravity];

		// Calculate the velocity vector for the missile
		if (_mag < 0) then {_mag = 0};
		_velocity = [_currentVector, _mag] call BIS_fnc_vectorMultiply;

		// Set velocity
		_missile setVelocity _velocity;

		// Set the missile's pitch and yaw (visual meaning only)
		// Get a vector to a position just ahead of the missile's flight path
		_pitchVector = [_currentVector, [_currentVector, 3] call BIS_fnc_vectorMultiply] call BIS_fnc_vectorFromXtoY;

		_currentYaw = getDir _missile;
		_adjustedYaw = _pitchVector call CBA_fnc_vectDir; // Direction to the future position
		_missile setDir _adjustedYaw;

		_vDir = [_pitchVector, _adjustedYaw] call BIS_fnc_rotateVector2D; // Rotate vector for north normalizing
		_pitch = atan ((_vDir select 2) / (_vDir select 1)); // Pitch to future position

		[_missile, _pitch,  0] call BIS_fnc_setPitchBank;

		// Netsync position
		if (alive _missile) then {
			_missile setPos getPos _missile;
			_missilePos = getPos _missile;
		};

		// Do downward-facing EFP sensor check (if equipped with one)
		if (_hasEFP) then {
			_canSense = ["Car", "Motorcycle", "Tank", "StaticCannon", "Helicopter", "Plane", "Ship"];
			_senseDistance = 11; // Downward look range
			_missilePosASL = getPosASL _missile;
			missile = _missile;

			// Look down and see if we intersect with anything that we can 'sense.'
			_intersects = lineIntersectsWith [_missilePosASL, [_missilePosASL select 0, _missilePosASL select 1, (_missilePosASL select 2) - 7], _missile];

			_targets = [];
			{
				_obj = _x;
				{
					if (_obj isKindOf _x) then {
						_canSenseTarget = (_missilePosASL select 2) - (getPosASL _obj select 2) < _senseDistance;
						if (_canSenseTarget) then {
							_targets set [(count _targets), _obj];
							//_targets = _targets + [_obj];
						};
					};
				} foreach _canSense;
			} foreach _intersects;

			// Also look behind us into the past.
			// Lag compensation theory. At a max v of 245 m/s with a lag between each check of 0.03 s (min),
			// the missile could possibly cover 7 meters or more without seeing. Practically it's less since max V is only 
			// attained momentarily, but we plan for the worse.
			// So, we check for targets at multiple points behind the missile based on current velocity.

			_missileVelocity = velocity _missile;
			//_missilePos = getPos _missile;
			_vX = _missileVelocity select 0;
			_vY = _missileVelocity select 1;
			_vZ = _missileVelocity select 2;

			// The longer it takes to execute, the further into the past we have to search.
			// These arrays are 'moments' that will be checked.
			_execTime = time - _startExecTime;
			_lagCompArray = [];
			if (_execTime < 0.1) then {
				_lagCompArray = [0.02, 0.04, 0.06, 0.08];
			} else {
				if (_execTime < 0.2) then {
					_lagCompArray = [0.02, 0.04, 0.06, 0.08, 0.1, 0.12, 0.14, 0.16, 0.18];
				} else {
					if (_execTime < 0.3) then {
						_lagCompArray = [0.02, 0.04, 0.06, 0.08, 0.1, 0.12, 0.14, 0.16, 0.18, 0.2, 0.22, 0.24, 0.26, 0.28];
					};
				};
			};

			_pastIntersects = [];
			{
				// For each time in the comp array, calculate the missile theoretical past position and do an intersection check.
				_pastPosASL = [(_missilePosASL select 0) - (_x * _vX), (_missilePosASL select 1) - (_x * _vY), (_missilePosASL select 2) - (_x * _vZ)];
				// Add the results of that check to the array.
				_pastIntersects = _pastIntersects + (lineIntersectsWith [_pastPosASL, [_pastPosASL select 0, _pastPosASL select 1, (_pastPosASL select 2) - 7], _missile]);
			} foreach _lagCompArray;

			// Get all targets from lag compensation check. Hooray for dreadful O(n^2) function!
			_pastTargets = [];
			{
				_obj = _x;
				{
					if (_obj isKindOf _x) then {
						_canSenseTarget = (_missilePosASL select 2) - (getPosASL _obj select 2) < _senseDistance + 1;
						if (_canSenseTarget) then {
							_pastTargets set [(count _pastTargets), _obj];
							//_pastTargets = _pastTargets + [_obj];
						};
					};
				} foreach _canSense;
			} foreach _pastIntersects;

			// True direct line-of-sight down to target (no lag compensation needed)
			_efpTarget = null;
			if (count _targets > 0) then {
				_fireEFP = true;
				_efpTarget = _targets select 0;
			} else {
				// Nothing was 'really' under us -- check the lag prediction targets
				if (count _pastTargets > 0) then {
					_fireEFP = true;
					_efpTarget = _pastTargets select 0;
				};
			};

			//player sidechat format ["Targets: %1 %2", _targets, _pastTargets];

			// if (count _intersects > 0) then {
				//player sidechat format ["Intersects: %1 %2", _intersects, time];
			// };
			//if (count _pastIntersects > 0) then {
				//player sidechat format ["Past Intersects: %1 %2 %3 %4 %5", _pastIntersects, time, _lagCompArray, _execTime, speed _missile];
			//};


			// We found a target close enough to us to trip the magnetic
			// proximity fuse. Blow up and send our directional EFP into the target.
			if (_fireEFP) then {
				_missilePos = getPos _missile;
				_targetPos = getPos _efpTarget;
				// Correct for height of vehicle.
				_boundingBoxZMax = ((boundingBoxReal _efpTarget) select 1) select 1;
				_targetPos = [_targetPos select 0, _targetPos select 1, (_targetPos select 2) + (_boundingBoxZMax * 0.3)]; 

				deleteVehicle _missile;
				_explosion = _efpMissileExplodeType createVehicle _missilePos;
				_explosion setPos _missilePos;

				_efp = _efpType createVehicle _missilePos;
				_efp setPos _missilePos;
				_efpVector = [_missilePos, _targetPos] call BIS_fnc_vectorFromXtoY;

				// Set the EFP's pitch and yaw (visual meaning only)
				_pitchVector = [vectorDir _efp, [vectorDir _efp, 3] call BIS_fnc_vectorMultiply] call BIS_fnc_vectorFromXtoY;

				_currentYaw = getDir _efp;
				_adjustedYaw = _pitchVector call CBA_fnc_vectDir; // Direction to the future position
				_efp setDir _adjustedYaw;

				_vDir = [_pitchVector, _adjustedYaw] call BIS_fnc_rotateVector2D; // Rotate vector for north normalizing
				_pitch = atan ((_vDir select 2) / (_vDir select 1)); // Pitch to future position

				[_efp, _pitch,  0] call BIS_fnc_setPitchBank;

				// Set velocity
				_efpVelocity = [_efpVector, _efpSpeed] call BIS_fnc_vectorMultiply;
				_efp setVelocity _efpVelocity;
			};
		};

		//player sideChat format ["Exec time: %1", time - _startExecTime];
		_startExecTime = time;
	}, 
	/* Parameters */
	[_missile, _lineOfSight, _lineOfSight, _launcherAcceleration, _rocketInitTime, _rocketLife, _rocketInitV, _acceleration, _drag, _flyUpDistance, _flyUpHeight, _launchPos, _launchPosASL, _launchTime, _efpSpeed, _efpType, _efpMissileExplodeType, _hasEFP, _weaponType],
	/* Delay */
	0,
	/* Initialization */
	{
		_missile = _this select 0;
		_currentVector = _this select 1; // Line of sight
		_targetVector = _this select 2; // Deprecated!
		_launcherAcceleration = _this select 3;
		_rocketInitTime = _this select 4;
		_rocketLife = _this select 5;
		_rocketInitV = _this select 6;
		_acceleration = _this select 7;
		_drag = _this select 8;
		_flyUpDistance = _this select 9;
		_flyUpHeight = _this select 10;
		_launchPos = _this select 11;
		_launchPosASL = _this select 12;
		_launchTime = _this select 13;
		_efpSpeed = _this select 14;
		_efpType = _this select 15;
		_efpMissileExplodeType = _this select 16;
		_hasEFP = _this select 17;
		_weaponType = _this select 18;

		//_deltaXOverTAverage = tmr_nlaw_deltaXOverTAverage;
		//_deltaYOverTAverage = tmr_nlaw_deltaYOverTAverage;
		//_deltaZOverTAverage = tmr_nlaw_deltaZOverTAverage;
		if (tmr_nlaw_trackCount > 0) then {
			_deltaXOverTAverage = tmr_nlaw_deltaXOverTSum / tmr_nlaw_trackCount;
			_deltaYOverTAverage = tmr_nlaw_deltaYOverTSum / tmr_nlaw_trackCount;
			_deltaZOverTAverage = tmr_nlaw_deltaZOverTSum / tmr_nlaw_trackCount;

			// Reset the values now that we have them.
			tmr_nlaw_deltaXOverTSum = 0;
			tmr_nlaw_deltaYOverTSum = 0;
			tmr_nlaw_deltaZOverTSum = 0;
			tmr_nlaw_trackCount = 0;
		};
		_initialVector = _this select 1; // Line of sight

		tmr_nlaw_deltaXOverTAverage = 0;
		tmr_nlaw_deltaYOverTAverage = 0;
		tmr_nlaw_deltaZOverTAverage = 0;

		// Tracked in this loop only
		_fireEFP = false;
		_rocketActive = false;
		_rocketBurnout = false;
		_rocketStartedAt = 0;
		_maxV = 0;
		_mag = 0;
		_missilePos = [];
		_dropVector = [];
		
		_startExecTime = time;
	}, 
	/* On exit, do...*/
	{;
		// Shrapnel
		if (!isNil "tmr_blastfrag") then {
			// TODO: Replace with config file values rather than hard-coding.
			if (_weaponType == "TMR_launch_NLAW_MPV_F") then {
				[_missilePos, 1500, 200, "big", "sphere"] spawn tmr_blastfrag_createFrags;
			} else {
				[_missilePos, 1000, 60, "med", "sphere"] spawn tmr_blastfrag_createFrags;
			};
		};
	}, 
	/* Run condition */
	{true},
	/* Exit condition */
	{!alive _missile || _fireEFP}, 
	/* Private variables */
	["_missile", "_currentVector", "_targetVector", "_launcherAcceleration", "_rocketInitTime", "_rocketLife",  "_rocketStartedAt", "_rocketInitV", "_acceleration", "_drag", "_flyUpDistance", "_flyUpHeight", "_launchPos", "_launchPosASL", "_launchTime", "_fireEFP", "_rocketActive", "_rocketBurnout", "_maxV", "_mag", "_dropVector",  "_startExecTime", "_efpSpeed", "_efpType", "_efpMissileExplodeType", "_hasEFP", "_missilePos", "_weaponType", "_deltaXOverTAverage", "_deltaYOverTAverage", "_deltaZOverTAverage", "_initialVector"]
	] call cba_common_fnc_addPerFrameHandlerLogic;

};
// -------------------------------------------------------------------------------
// Function to evaluate the average change in direction of the unit's weapon. Values are stored in global vars.
// -------------------------------------------------------------------------------
tmr_nlaw_fnc_track = {
	_unit = player;
	if (tmr_nlaw_trackingMode == 0) exitwith {}; // Sanity check

	// These variables are used by the fired EH to steer the missile
	player setVariable ["tmr_nlaw_deltaDirOverTAverage", 0];
	player setVariable ["tmr_nlaw_deltaElevOverTAverage", 0];

	// Let player 'settle' after pressing the track button
	sleep 0.2;

	// Huge public event handler follows.
	_handle = [
	/* Code */
	{
		// Get deltaT since last run. Make sure it's not 0 (somehow).
		_deltaT = (time - _oldTime);
		if (_deltaT == 0) then {
			_deltaT = 0.0000001;
		};

		// Where we start~
		// _oldVector
		//player sidechat format ["Old: %1", _oldVector];

		// Where we end up~
		_currentVector = _unit weaponDirection (currentWeapon _unit);


		_diff = [_oldVector, _currentVector] call BIS_fnc_vectorDiff;

		// Get the delta over time for each axis
		_deltaXOverT = (_diff select 0) / _deltaT;
		_deltaYOverT = (_diff select 1) / _deltaT;
		_deltaZOverT = (_diff select 2) / _deltaT;

		// Dampen jerky movements in later tracking.
		/*
		if (_runTime > 1) then {
			if ( abs (_deltaXOverT - tmr_nlaw_deltaXOverTAverage) > (tmr_nlaw_deltaXOverTAverage / 1.4)) then {
				_deltaXOverT = _deltaXOverT - (_deltaXOverT - tmr_nlaw_deltaXOverTAverage) / 1.4;
			};
			if ( abs (_deltaYOverT - tmr_nlaw_deltaYOverTAverage) > (tmr_nlaw_deltaYOverTAverage / 1.4)) then {
				_deltaYOverT = _deltaYOverT - (_deltaYOverT - tmr_nlaw_deltaYOverTAverage) / 1.4;
			};
			// Z-dampening is more aggressive
			if ( abs (_deltaZOverT - tmr_nlaw_deltaZOverTAverage) > (tmr_nlaw_deltaZOverTAverage / 1.1)) then {
				_deltaZOverT = _deltaZOverT - (_deltaZOverT - tmr_nlaw_deltaZOverTAverage) / 1.1;
			};
		};*/
		

		// Average into current data for whole tracking sequence
		tmr_nlaw_deltaXOverTAverage = (tmr_nlaw_deltaXOverTAverage + _deltaXOverT) / 2;
		tmr_nlaw_deltaYOverTAverage = (tmr_nlaw_deltaYOverTAverage + _deltaYOverT) / 2;
		tmr_nlaw_deltaZOverTAverage = (tmr_nlaw_deltaZOverTAverage + _deltaZOverT) / 2;

		tmr_nlaw_deltaXOverTSum = tmr_nlaw_deltaXOverTSum + _deltaXOverT;
		tmr_nlaw_deltaYOverTSum = tmr_nlaw_deltaYOverTSum + _deltaYOverT;
		tmr_nlaw_deltaZOverTSum = tmr_nlaw_deltaZOverTSum + _deltaZOverT;
		tmr_nlaw_trackCount = tmr_nlaw_trackCount + 1;


		// Store the old vector for next computation.
		_oldVector = _unit weaponDirection (currentWeapon _unit);
		_oldTime = time;

		// Update total tracking time
		_runTime = _runTime + _deltaT;
	}, 
	/* Parameters */
	[_unit],
	/* Delay */
	0,
	/* Initialization */
	{
		_unit = _this select 0;

		// Empty deltas.
		tmr_nlaw_deltaXOverTAverage = 0;
		tmr_nlaw_deltaYOverTAverage = 0;
		tmr_nlaw_deltaZOverTAverage = 0;

		tmr_nlaw_deltaXOverTSum = 0;
		tmr_nlaw_deltaYOverTSum = 0;
		tmr_nlaw_deltaZOverTSum = 0;
		tmr_nlaw_trackCount = 0;

		// Get first vector.
		_oldVector = _unit weaponDirection (currentWeapon _unit);
		_oldTime = time;

		_runTime = 0;
	}, 
	/* On exit, do...*/
	{
		// Empty deltas if we left tracking mode.
		//if (tmr_nlaw_trackingMode != 1) then {
		//	tmr_nlaw_deltaXOverTAverage = 0;
		//	tmr_nlaw_deltaYOverTAverage = 0;
		//	tmr_nlaw_deltaZOverTAverage = 0;
		//};
	}, 
	/* Run condition */
	{true},
	/* Exit condition */
	{tmr_nlaw_trackingMode != 1}, 
	/* Private variables */
	["_unit", "_oldVector", "_oldTime", "_runTime"]
	] call cba_common_fnc_addPerFrameHandlerLogic;


};

/////////////////////////////////////////////////////////////////////////////////
 
// Add key handler. 
[] spawn {
	waituntil {!isNull (findDisplay 46)};
	(findDisplay 46) displayAddEventHandler ["KeyDown", "_this call tmr_nlaw_fnc_trackingKeyDownEH"];
	(findDisplay 46) displayAddEventHandler ["KeyUp", "_this call tmr_nlaw_fnc_trackingKeyUpEH"];
};

/////////////////////////////////////////////////////////////////////////////////

// Initialization complete.

tmr_nlaw = true;