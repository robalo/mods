// TMR: Save Monitor initialization and functions
// (C) 2013 Ryan Schultz. See LICENSE.

tmr_savemonitor = false;

// This array stores 2 element arrays with the name of uiNamespace variable to watch
// for a null condition, and a corresponding function to call should that variable be
// null (as it will be after a save load).
// Example: [ ["TMR_Optics_Scope", tmr_optics_fnc_initScope] ]
tmr_savemonitor_watched = [];

// -------------------------------------------------------------------------------
// Periodically checks if UI elements are null due to savegame load and reinits them.
// -------------------------------------------------------------------------------
tmr_savemonitor_fnc_watchdog = {
	sleep 5;

	{
		_var = _x select 0;
		_reinit = _x select 1;

		if (isNull _var) then {
			[] spawn _reinit;
		};

		sleep 1;
	} foreach tmr_savemonitor_watched;
};

/////////////////////////////////////////////////////////

// Disabled for now until a module actually needs it. 
// tmr_savemonitor_watchdog = [] spawn tmr_savemonitor_watchdog;

tmr_savemonitor = true;