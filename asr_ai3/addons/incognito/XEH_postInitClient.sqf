//#define DEBUG_MODE_FULL
#include "script_component.hpp"
//if (!hasInterface) exitWith {}; //exit if HC
if (isMultiplayer) exitWith {}; //exit if MP - not ready yet, would mess with revive systems and need to take care of code locality

/*
// NOTES/TODO

MP: run code on group leader unit only; must reset on leadership change

*/

[] spawn {
    _wasIncognito = false;
    RYD_INC_Fired = -10;
    _lastTxt = "Incognito status at risk";
    _lastIncognito = 0;
    _txt = "";

    while {true} do {
        waituntil {sleep 3; !(isNull player)};

        if (GVAR(incodiff) > 0) then {

            _units = units player;

            {
                _vh = vehicle _x;
                if not (_x == _vh) then {
                    _fEHadded = _vh getVariable "RYD_INC_FEH";
                    if (isNil "_fEHadded") then {
                        _ix = _vh addEventHandler ["Fired",{if (({(_x in (_this select 0))} count (units (group player))) > 0) then {RYD_INC_Fired = time} else {(vehicle (_this select 0)) removeEventHandler ["Fired", (vehicle (_this select 0)) getVariable "RYD_INC_FEH"]}}];
                        _vh setVariable ["RYD_INC_FEH", _ix];
                    };
                } else {
                    _fEHadded = _vh getVariable "RYD_INC_FEH";
                    if (isNil "_fEHadded") then {
                        _ix = _vh addEventHandler ["Fired",{RYD_INC_Fired = time}];
                        _vh setVariable ["RYD_INC_FEH", _ix];
                    };
                }
            } foreach _units;

            _sideP = [configFile>>"CfgVehicles">>(typeOf player), "Side", -1] call BIS_fnc_returnConfigEntry;

            switch (_sideP) do {
                case (0) : {_sideP = east};
                case (1) : {_sideP = west};
                case (2) : {_sideP = resistance};
                case (3) : {_sideP = civilian};
                default {_sideP = sideFriendly}
            };

            _knownForAll = 0;

            _vehs = [];
            _allEnemyG = [];

            {
                _knowAboutMe = [];
                _knowAboutMeG = [];
                _vh = vehicle _x;
                _asVh = assignedVehicle _x;

                if (isNull _asVh) then {_asVh = _vh};

                {
                    if ((side _x) getFriend _sideP < 0.6) then {
                        if ((leader _x) distance _vh < (getObjectViewDistance select 0) && {(_x knowsAbout _vh) max (_x knowsAbout _asVh) > 1}) then {
                            _knowAboutMeG pushBack _x;
                            { if not (captive _x) then {_knowAboutMe pushBack _x} } foreach (units _x);
                        };
                        _allEnemyG pushBack _x;
                    };
                } foreach allGroups;

                _vehs pushBack [_x,_vh,_asVh,_knowAboutMe,_knowAboutMeG];

            } foreach _units;

            {
                _x params ["_unit", "_vh", "_asVh", "_enemies", "_enemiesG"];

                _onFoot = (_unit == _vh);

                _armed = false;
                _wrongVeh = false;
                _firing = false;
                _recognized = false;

                if ((_onFoot) and {(({not ((toLower _x) in ["","throw"])} count [(currentWeapon _unit),(primaryWeapon _unit),(secondaryWeapon _unit)]) > 0)}) then {_armed = true};

                if not (_armed) then {
                    if not (_onFoot) then {
                        _side = [configFile>>"CfgVehicles">>(typeOf _vh), "Side", -1] call BIS_fnc_returnConfigEntry;

                        switch (_side) do {
                            case (0) : {_side = east};
                            case (1) : {_side = west};
                            case (2) : {_side = resistance};
                            case (3) : {_side = civilian};
                            default {_side = sideFriendly}
                        };

                        { if (((side _x) getFriend _side) < 0.6) exitWith {_wrongVeh = true} } foreach _allEnemyG;
                    };

                    if not (_wrongVeh) then {
                        if ((time - RYD_INC_Fired) < 10) then {_firing = true};

                        if not (_firing) then {
                            _div = 3 + sunOrMoon;
                            _safeDst = 40 * GVAR(incodiff);

                            if (_onFoot) then {
                                _speed = [0,0,0] distance (velocity _vh);

                                switch (stance _unit) do {
                                    case ("CROUCH") : {
                                        _div = _div/1.5;
                                        _safeDst = _safeDst * (1.25/(1.5 - (sunOrMoon/2)));
                                    };
                                    case ("PRONE") : {
                                        _div = _div/2;
                                        _safeDst = _safeDst * (1.5/(2 - sunOrMoon));
                                    };
                                };

                                if (_speed > 2.5) then {_safeDst = _safeDst * ((_speed - 1.5)^0.45)};
                            } else {
                                _safeDst = 25 * GVAR(incodiff);
                            };

                            _safeDst = _safeDst - ((_safeDst * (1 - sunOrMoon))/2);

                            {
                                if ((_x distance _vh) < _safeDst) then {
                                    _safeDistPerDiv = _safeDst/_div; //divide once
                                    if (_x distance _vh < (random _safeDistPerDiv) + (random _safeDistPerDiv) + (random _safeDistPerDiv) + (random _safeDistPerDiv)) then {
                                        if (!([_vh,_x] call FUNC(isFlanking)) && {[objNull, "VIEW"] checkVisibility [eyePos _x, eyePos _unit] > 0.7}) then {_recognized = true};
                                    };
                                };
                                if (_recognized) exitWith {};
                            } foreach _enemies;
                        };
                    };
                };

                RYD_INC_Fired = -10;

                _unit setVariable ["RYD_INC_Compromised", (_unit getVariable ["RYD_INC_Exposed",false] || _armed || _wrongVeh || _firing || _recognized)];

                _knownFor = count _enemiesG;

                _unit setVariable ["RYD_INC_Exposed", false];

                if (_unit getVariable ["RYD_INC_Compromised",false]) then {
                    if (_knownFor > 0) then {_unit setVariable ["RYD_INC_Exposed", true]};
                };

                if (_knownFor > 0) then	{_knownForAll = _knownFor};

                if not (_unit getVariable ["RYD_INC_Exposed",false]) then {
                    _unit setVariable ["RYD_INC_Undercover", true];
                    _wasIncognito = true;
                } else {
                    _unit setVariable ["RYD_INC_Undercover", false];
                };
                
                if (GVAR(incodbg) && {_unit getVariable ["RYD_INC_Exposed",false] || {_armed || {_wrongVeh || {_firing || {_recognized}}}}}) then {
                    diag_log format ["unit %7 : %1 reason - exposed: %2 armed: %3 wrongVeh: %4 firing: %5 recognized: %6 weaponry: %8 vh: %9 unit: %10",time,_unit getVariable ["RYD_INC_Exposed",false],_armed,_wrongVeh,_firing,_recognized,name _unit,[currentWeapon _unit,primaryWeapon _unit,secondaryWeapon _unit],_vh,_unit];
                };
            } foreach _vehs;

            _exposed = {(_x getVariable ["RYD_INC_Exposed",false])} count _units;
            _compromised = {((_x getVariable ["RYD_INC_Compromised",false]) and {(_x getVariable ["RYD_INC_Undercover",false])})} count _units;
            _incognito = {(_x getVariable ["RYD_INC_Undercover",false]) and {not (_x getVariable ["RYD_INC_Compromised",false])}} count _units;

            if (_exposed == 0) then {
                { _x setCaptive true } foreach _units;
            } else {
                { _x setCaptive false } foreach _units;
            };

            if (GVAR(incodiff) < 3) then {
                if (_wasIncognito) then	{
                    _txt = "";
                    switch (true) do {
                        case (_exposed > 0) : {
                            _txt = "I've been exposed!"
                        };

                        case (_incognito > _lastIncognito) : {
                            if ((count _units) == 1) then {
                                _txt = "I'm now incognito";
                            } else {
                                if (_incognito == 1) then {
                                    _txt = "One of us is now incognito";
                                } else {
                                    _txt = format ["The %1 of us are now incognito",_incognito];
                                };
                            };
                        };

                        default	{
                            if ((count _units) > 1) then {
                                if (_compromised > 0) then {
                                    if (_lastIncognito > 0) then {
                                        _txt = format ["Incognito status at risk for %1 of us",_compromised];
                                    };
                                };

                                if (GVAR(incodiff) < 2) then {
                                    if (_knownForAll > 0) then {
                                        if (_knownForAll == 1) then {
                                            _txt = _txt + (format ["\nOne of us is being observed",_knownForAll]);
                                        } else {
                                            _txt = _txt + (format ["\nThe %1 of us are being observed",_knownForAll]);
                                        };
                                    };
                                };
                            } else {
                                switch (true) do {
                                    case (_compromised > 0) : {
                                        if (_lastIncognito > 0) then {_txt = "Incognito status at risk"};
                                    };
                                    case (_knownForAll > 0) : {
                                        if (GVAR(incodiff) < 2) then {_txt = "I'm being observed"};
                                    };
                                };
                            };
                        };
                    };
                };

                if (GVAR(incohint) && {_txt != ""} && {_lastTxt != _txt}) then {
                    hintSilent _txt;
                    _lastTxt = _txt;
                };
            };

            _lastIncognito = _incognito;

        };
    };
};
