//#define DEBUG_MODE_FULL
#include "script_component.hpp"
if (GVAR(run) == 0) exitWith {false};                           // suspended globally
if (_this getVariable [QGVAR(pause), 0] == 1) exitWith {false}; // individually suspended
if (vehicle _this != _this) exitWith {false};                   // in a vehicle
if (captive _this) exitWith {false};                            // captive
if (_this call FNCMAIN(isUnc)) exitWith {false};                // dead or unconscious
if (behaviour _this == "STEALTH") exitWith {false};             // hiding
if (currentCommand _this != "") exitWith {false};               // doing something

if (_this getVariable [QGVAR(urgent),false]) exitWith {true};   // urgent, need primary weapon/mags!

private ["_grp","_cwp"];
_grp = group _this;
_cwp = currentWaypoint _grp;
if (_cwp > 0 && _cwp < count waypoints _grp) exitWith {false};  // has waypoint set, hmm
if (behaviour _this == "COMBAT") exitWith {false};              // fighting

true
