// TMR: Core Module initialization.
// (C) 2013 Ryan Schultz. See LICENSE.

tmr_core = false;

// Initialize Fragmentation module
call compile preProcessFileLineNumbers '\tmr_core\frag.sqf';

// Initialize Save Monitor module
call compile preProcessFileLineNumbers '\tmr_core\saveMonitor.sqf';


tmr_core = true;