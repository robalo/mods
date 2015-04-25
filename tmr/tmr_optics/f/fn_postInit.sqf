// TMR: Optics initialization and functions
// (C) 2013 Ryan Schultz. See LICENSE.
if !(hasInterface) exitWith {};

tmr_optics = false;

#define TMR_SCOPECTRL (uiNameSpace getVariable "TMR_Optics_Scope") displayCtrl

// Request a resource layer from the game engine.
tmr_optics_scopeRsc = ["TMR_Optics_Scope"] call BIS_fnc_rscLayer;

// Display the resource layers 
[] call tmr_optics_fnc_initScope;

// This loop monitors the RscInGameUI tied to TMR-enhanced optics and
// displays the overlays when needed.

[] spawn tmr_optics_fnc_scopeLoop;

// Initialization complete.

tmr_optics = true;
