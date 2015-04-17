if !(hasInterface) exitWith {};
// Set global variables

tmr_optics_inScope = false; // Is the scope up?
tmr_optics_currentOptic = ""; // What optic is attached right now?

#define TMR_SCOPECTRL (uiNameSpace getVariable "TMR_Optics_Scope") displayCtrl

// -------------------------------------------------------------------------------
// Init the scope resources if they are not already available.
// -------------------------------------------------------------------------------
tmr_optics_fnc_initScope = {
	_initNeeded = false;
	_return = false;

	// Make sure we only cutRsc when the resource isn't already available
	if (isNil {uiNameSpace getVariable "TMR_Optics_Scope"}) then {
		_initNeeded = true;
	};
	if (isNull (uiNameSpace getVariable "TMR_Optics_Scope")) then {
		_initNeeded = true;
	};

	if (_initNeeded) then {
		tmr_optics_scopeRsc cutRsc ["TMR_Optics_Scope","PLAIN",0];
		(TMR_SCOPECTRL 1) ctrlSetTextColor [1,1,1,0]; 
		(TMR_SCOPECTRL 2) ctrlSetTextColor [1,1,1,0]; 
		(TMR_SCOPECTRL 5) ctrlSetTextColor [1,1,1,0]; 
		(TMR_SCOPECTRL 6) ctrlSetTextColor [1,1,1,0]; 

		(TMR_SCOPECTRL 1) ctrlCommit 0; 
		(TMR_SCOPECTRL 2) ctrlCommit 0; 
		(TMR_SCOPECTRL 5) ctrlCommit 0; 
		(TMR_SCOPECTRL 6) ctrlCommit 0; 
		_return = true;
	};
	_return;
};

// -------------------------------------------------------------------------------
// Instantly hide all scope elements.
// -------------------------------------------------------------------------------
tmr_optics_fnc_hideScope = {
	(TMR_SCOPECTRL 1) ctrlSetTextColor [1,1,1,0]; 
	(TMR_SCOPECTRL 2) ctrlSetTextColor [1,1,1,0]; 
	(TMR_SCOPECTRL 5) ctrlSetTextColor [1,1,1,0]; 
	(TMR_SCOPECTRL 6) ctrlSetTextColor [1,1,1,0]; 

	(TMR_SCOPECTRL 1) ctrlCommit 0; 
	(TMR_SCOPECTRL 2) ctrlCommit 0; 
	(TMR_SCOPECTRL 5) ctrlCommit 0; 
	(TMR_SCOPECTRL 6) ctrlCommit 0; 

	//"Radialblur" ppeffectenable false;
	//"Radialblur" ppEffectAdjust [0, 0, 0.24, 0.24];
	//"Radialblur" ppEffectCommit 0;
};

// -------------------------------------------------------------------------------
// Fired EH: Animate the scope and reticle on firing.
// -------------------------------------------------------------------------------
tmr_optics_fnc_scopeRecoil_firedEH = {
	// [unit, weapon, muzzle, mode, ammo, magazine, projectile]
	if (_this select 0 != player || {!tmr_optics_inScope} || {!((_this select 4) isKindOf "BulletCore")}) exitwith {}; // Sanity check

	_weaponType = _this select 1;

	_config = configFile >> "CfgWeapons" >> _weaponType;
	_recoilMulti = getNumber (_config >> "tmr_smallarms_recoil_shakeMultiplier"); // Will be 0 if undefined

	if (_recoilMulti == 0) then {
		_recoilMulti = 1;
	};
	if (_recoilMulti > 2.6) then {
		_recoilMulti = 2.6; // Don't get too high
	};

	// Reduce the reticle movement as the player drops into lower, supported stances.
	_detectStance = (player selectionPosition "Neck" select 2);
	if (_detectStance < 1.3) then {
		_recoilMulti = _recoilMulti - 0.10;
	};
	if (_detectStance < 0.7) then {
		_recoilMulti = _recoilMulti - 0.20;
	};

	// Reduce reticle movement if the player is rested (tmr_autorest).
	if (player getVariable ["tmr_autorest_rested", false]) then {
		_recoilMulti = _recoilMulti - 0.20;
	};

	// Reduce reticle movement if the player is deployed (tmr_autorest).
	if (player getVariable ["tmr_autorest_deployed", false]) then {
		_recoilMulti = _recoilMulti - 0.30;
	};	

	// Constants which determine how the scope recoils
	_recoilScope = 0.03 * _recoilMulti + random 0.0015;
	_recoilRing = 0.03 * _recoilMulti + random 0.0015;

	_randomScopeShiftX = 0.005 * _recoilMulti - random 0.011;

	_randomReticleShiftX = 0.0036 * _recoilMulti + random 0.0045; // Always tend up and right;
	_randomReticleShiftY = -0.0046 * _recoilMulti - random 0.0055;

	/////////
	// Center everything

	// getResolution select 4 should return the aspect ratio, but it's totally wrong
	// for triple head displays. We'll compute it manually.
	_aspectRatio = (getResolution select 0) / (getResolution select 1);

	_reticleX = (SafeZoneXAbs + SafeZoneWAbs/2 - (SafeZoneWAbs / _aspectRatio)/2);
	_reticleY = SafeZoneY;
	_reticleW = SafeZoneWAbs / _aspectRatio;
	_reticleH = SafeZoneH;

	// Reticle
	(TMR_SCOPECTRL 1) ctrlSetPosition [_reticleX, _reticleY, _reticleW, _reticleH];
	// Reticle night (illum)
	(TMR_SCOPECTRL 2) ctrlSetPosition [_reticleX, _reticleY, _reticleW, _reticleH];

	_bodyX = (SafeZoneXAbs + SafeZoneWAbs/2 - (SafeZoneWAbs / _aspectRatio));
	_bodyY = SafeZoneY - (SafeZoneH/2);
	_bodyW = SafeZoneWAbs / _aspectRatio * 2;
	_bodyH = SafeZoneH * 2; 

	// Body night
	(TMR_SCOPECTRL 5) ctrlSetPosition [_bodyX, _bodyY, _bodyW, _bodyH];
	// Body
	(TMR_SCOPECTRL 6) ctrlSetPosition [_bodyX, _bodyY, _bodyW, _bodyH];

	_centerDelay = 0.01;
	(TMR_SCOPECTRL 1) ctrlCommit _centerDelay; 
	(TMR_SCOPECTRL 2) ctrlCommit _centerDelay; 
	(TMR_SCOPECTRL 5) ctrlCommit _centerDelay; 
	(TMR_SCOPECTRL 6) ctrlCommit _centerDelay; 

	/////////
	// Create and commit recoil effect

	// Move reticle

	(TMR_SCOPECTRL 1) ctrlSetPosition [_reticleX - (_recoilScope/2) + _randomReticleShiftX, _reticleY - (_recoilScope/2) + _randomReticleShiftY, _reticleW + _recoilScope, _reticleH + _recoilScope]; 
	(TMR_SCOPECTRL 2) ctrlSetPosition [_reticleX - (_recoilScope/2) + _randomReticleShiftX, _reticleY - (_recoilScope/2) + _randomReticleShiftY, _reticleW + _recoilScope, _reticleH + _recoilScope]; 

	// Move body

	(TMR_SCOPECTRL 5) ctrlSetPosition [_bodyX - (_recoilScope/2) + _randomScopeShiftX, _bodyY - (_recoilScope/2), _bodyW + _recoilScope, _bodyH + _recoilScope]; 
	(TMR_SCOPECTRL 6) ctrlSetPosition [_bodyX - (_recoilScope/2) + _randomScopeShiftX, _bodyY - (_recoilScope/2), _bodyW + _recoilScope, _bodyH + _recoilScope]; 

	_recoilDelay = 0.036;
	_fa = false;
	_cwm = currentWeaponMode player;
	if (_cwm == "FullAuto" || _cwm == "manual" || _cwm == "Burst") then {
		_recoilDelay =  getNumber (_config >> _cwm >> "reloadTime")/2.2;
		_fa = true;
	};
	(TMR_SCOPECTRL 1) ctrlCommit _recoilDelay; 
	(TMR_SCOPECTRL 2) ctrlCommit _recoilDelay; 
	(TMR_SCOPECTRL 5) ctrlCommit _recoilDelay; 
	(TMR_SCOPECTRL 6) ctrlCommit _recoilDelay; 

	//////////////

	waituntil {sleep 0.01; ctrlCommitted (TMR_SCOPECTRL 6)};

	//////////////

	//////
	// Bring them all back
	(TMR_SCOPECTRL 1) ctrlSetPosition [_reticleX, _reticleY, _reticleW, _reticleH];
	(TMR_SCOPECTRL 2) ctrlSetPosition [_reticleX, _reticleY, _reticleW, _reticleH];
	(TMR_SCOPECTRL 5) ctrlSetPosition [_bodyX, _bodyY, _bodyW, _bodyH];
	(TMR_SCOPECTRL 6) ctrlSetPosition [_bodyX, _bodyY, _bodyW, _bodyH];	

	_recenterDelay = 0.09;
	if (_fa) then {
		_recenterDelay =  getNumber (_config >> _cwm >> "reloadTime")/2.2;
	};
	(TMR_SCOPECTRL 1) ctrlCommit _recenterDelay; 
	(TMR_SCOPECTRL 2) ctrlCommit _recenterDelay;
	(TMR_SCOPECTRL 5) ctrlCommit _recenterDelay;
	(TMR_SCOPECTRL 6) ctrlCommit _recenterDelay;
};

// This loop monitors the RscInGameUI tied to TMR-enhanced optics and
// displays the overlays when needed.
tmr_optics_fnc_scopeLoop = {
	private ["_curWeapon","_wi","_optic","_doUpdateAllLayers","_lighting","_nightOpacity","_dayOpacity","_vrole","_ffv"];
	_wi = [];
	while {true} do {
		sleep 0.03; waituntil {player == player};

		// Get the name of the attached optic
		_curWeapon = currentWeapon player;
		switch (true) do {
			case (_curWeapon == primaryWeapon player): {_wi = primaryWeaponItems player};
			case (_curWeapon == secondaryWeapon player): {_wi = secondaryWeaponItems player};
			case (_curWeapon == handgunWeapon player): {_wi = handgunItems player};
		};
		_optic = if (count _wi > 2) then {_wi select 2} else {""};
		_ffv = false;
		if (vehicle player != player) then {
			_vrole = assignedVehicleRole player;
			if (count _vrole > 1) then {
				if (_vrole select 0 == "cargo") then { _ffv = true };
			};
		};

		if ((cameraon == player || _ffv) && {alive player} && {ctrlShown ((uinamespace getVariable "TMR_OpticsIGUI") displayCtrl 154)} && {!visibleMap} && {_optic != ""}) then {

			// Check if the optic has changed since we last drew it
			_doUpdateAllLayers = false;
			if (tmr_optics_currentOptic != _optic) then {
				tmr_optics_currentOptic = _optic;
				// Graphics layers will need updated for the new scope
				_doUpdateAllLayers = true;
			};

			// Check if Splendid Camera, unit switch, etc. has blanked out our displays for no good reason (grrr)
			if (ctrlText (TMR_SCOPECTRL 1) == "" || {isNull (uiNameSpace getVariable "TMR_Optics_Scope")}) then {
				_doUpdateAllLayers = true;
			};

			// Init the scope (if needed)
			[] call tmr_optics_fnc_initScope;

			// Draw the correct layers (don't show them)
			if (_doUpdateAllLayers) then {
				(TMR_SCOPECTRL 1) ctrlSetText getText (configFile >> "CfgWeapons" >> _optic >> "tmr_optics_reticle");
				(TMR_SCOPECTRL 2) ctrlSetText getText (configFile >> "CfgWeapons" >> _optic >> "tmr_optics_reticleIllum");
				(TMR_SCOPECTRL 5) ctrlSetText getText (configFile >> "CfgWeapons" >> _optic >> "tmr_optics_bodyNight");
				(TMR_SCOPECTRL 6) ctrlSetText getText (configFile >> "CfgWeapons" >> _optic >> "tmr_optics_body");
			};

			// Show the optic layers
			//////////////////////////////////////

			// Stop processing if already in the scope view and FOV hasn't changed
			if (tmr_optics_inScope || {getNumber (configFile >> "CfgWeapons" >> _optic >> "tmr_optics_enhanced") == 0}) exitwith {};

			// Mark that we're in enhanced scope view
			tmr_optics_inScope = true;

			// Calculate lighting
			_lighting = sunOrMoon; // 1 is day, 0 is night

			_nightOpacity = 1;
			_dayOpacity = (0 max moonIntensity * (1 - (0 max overcast)))/5;

			if (_lighting == 1) then {
				_nightOpacity = 0;
				_dayOpacity = 1;
			};

			// Apply lighting and make layers visible
			(TMR_SCOPECTRL 1) ctrlSetTextColor [1,1,1,1]; 
			(TMR_SCOPECTRL 2) ctrlSetTextColor [1,1,1,_nightOpacity]; 
			(TMR_SCOPECTRL 5) ctrlSetTextColor [1,1,1,_nightOpacity]; 
			(TMR_SCOPECTRL 6) ctrlSetTextColor [1,1,1,_dayOpacity]; 

			(TMR_SCOPECTRL 1) ctrlCommit 0;
			(TMR_SCOPECTRL 2) ctrlCommit 0; 
			(TMR_SCOPECTRL 5) ctrlCommit 0; 
			(TMR_SCOPECTRL 6) ctrlCommit 0; 

		} else {
			// Failed the state check, hide the scope if it's up
			if (tmr_optics_inScope) then {
				// Hide the scope
				tmr_optics_inScope = false;
				tmr_optics_inScope_FOV = ([] call cba_fnc_getFOV) select 0;

				[] call tmr_optics_fnc_hideScope;
			};
		};
	};
};
