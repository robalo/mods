// TMR: Hit Effects initialization and functions
// (C) 2014 Ryan Schultz. See LICENSE.

tmr_hiteffects = false;

/////////////////////////////////////////////////////////////////////////////////

tmr_hiteffects_fnc_fallDown = compile preprocessFileLineNumbers "\tmr_hiteffects\fnc_fallDown.sqf";

// -------------------------------------------------------------------------------
// Play visual/audio effects when hit.
// -------------------------------------------------------------------------------
tmr_hiteffects_fnc_hit = {
	_unit = _this select 0;
	_damage = _this select 2;

	// Players and AI both run this, local only
	if (!alive _unit || !local _unit) exitWith {};

	// Randomly fall down if damage was considerable
	if (_damage > 0.1) then {
		if (random 1 > 0.41) then {
			[_unit] spawn tmr_hiteffects_fnc_fallDown;
		};
	};

	// Below only occurs for local player
	if (player != _unit || isBurning _unit) exitWith {};

	_gasps = ["p1_moan_01","p1_moan_02","p1_moan_03","p1_moan_04","p1_moan_05","p1_moan_06","p1_moan_07","p1_moan_08"];
	_gasp = _gasps select (floor (random (count _gasps)));
	_gaspSound = format ["a3\sounds_f\characters\human-sfx\person1\%1.wss",_gasp];
	playSound3D [_gaspSound, _unit, false, getPosASL _unit, 1, 0.85, 25]; 

	(["TMR_BloodPain"] call bis_fnc_rscLayer) cutRsc ["TMR_BloodPain","PLAIN",1];

	addCamShake [13, 0.8, 26];

	sleep 0.1;

	addCamShake [2.5, 3, 1.8];
	sleep 1;
	(["TMR_BloodPain"] call bis_fnc_rscLayer) cutFadeOut 5;
};

// -------------------------------------------------------------------------------
// Knockdown and ear ringing for near damaging explosions. (Explosion EH)
// -------------------------------------------------------------------------------
tmr_hiteffects_fnc_onExplosion = {
	_unit = _this select 0;
	_damage = _this select 1;
	if (_damage > 0.11) then {
		[_unit] spawn tmr_hiteffects_fnc_fallDown;
		if (_unit == player) then {
			playsound "tmr_hiteffects_ringing";
			addCamShake [19, 30, 0.4];
		};
	};
	if (_damage > 0.01) then {
		if (_unit == player) then {
			playsound "tmr_hiteffects_ringingSlight";
			addCamShake [8, 30, 0.7];
		};
	};
};

// -------------------------------------------------------------------------------
// Handle engine "Hit" events
// -------------------------------------------------------------------------------
tmr_hiteffects_fnc_onHit = {
	_unit = _this select 0;
	_source = _this select 1;
	_damage = _this select 2;

	if (!alive _unit || !local _unit) exitWith {};

	if (_damage > 0.07 && {!isNull _source || isBurning _unit}) then {
		if (alive _unit) then {
			_this spawn tmr_hiteffects_fnc_hit;
		};
	};
};


/////////////////////////////////////////////////////////////////////////////////
// Initialization complete.

tmr_hiteffects = true;