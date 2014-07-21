#define DEBUG_MODE_FULL
#include "script_component.hpp"

#define __w_primary 0
#define __w_secondary 1
#define __w_sidearm 2
#define __w_binocular 3
#define __w_nvg 4
#define __m_primary_1 5
#define __m_primary_2 6
#define __m_secondary_1 7
#define __m_secondary_2 8
#define __m_sidearm 9
#define __m_grenades 10
#define __m_smoke 11
#define __m_fakit 12
#define __m_medkit 13
#define __m_toolkit 14
#define __i_vest 15
#define __i_ruck 16

PARAMS_1(_unit);
private["_to","_need","_nc","_nt","_needsomething","_leaderpos","_search","_loot","_goodies","_item","_needit"];
if (isNull _unit || !alive _unit) exitWith {};
if (_unit getVariable[QGVAR(inprogress),false]) exitWith {};
diag_log format ["%1 | %2 | Rearming starts for this unit.",time,_unit];
_unit setVariable[QGVAR(inprogress),true];

// So what do I need ?
_need = [_unit] call FUNC(inventoryCheck);
diag_log format ["%1 | %2 | Inventory check done for this unit.",time,_unit];
TRACE_2("NEED",_unit,_need);

_nt = _need select 0; // [types]
_nc = _need select 1; // [counts]

_needsomething = false;
{ if (_x > 0) exitWith {_needsomething = true}} forEach _nc;
if (!_needsomething) exitWith {
	diag_log format ["%1 | %2 | Rearming ends for this unit. Nothing needed.",time,_unit];
	_unit setVariable[QGVAR(inprogress),false];
};

if (_nc select 0 == 1 && _nc select 2 == 1) then { // need primary weapon/mags pronto
	_unit setVariable [QGVAR(urgent),true];
	_unit lockWP true;
} else {
	_unit setVariable [QGVAR(urgent),nil];
	_unit lockWP false;
};

if !(_unit call FUNC(isReady)) exitWith {_unit setVariable[QGVAR(inprogress),false]};

_leaderpos = getposATL _unit;

// Look for places
diag_log format ["%1 | %2 | Searching for places to loot.",time,_unit];
_search = nearestObjects [_unit, ["ReammoBox","ReammoBox_F","AllVehicles","WeaponHolderSimulated"], GVAR(radius)];

//dead or unconscious soldiers
//_search = [(nearestObjects [_unit, ["CAManBase"], GVAR(radius)]), {!isPlayer _x || _x call FNCMAIN(isUnc)}] call BIS_fnc_conditionalSelect;

diag_log format ["%1 | %2 | Found places to loot: %3",time,_unit,_search];

{ scopename "searchingBodies";
	_loot = _x;
	if (!isNull _loot) then {

		// allow checking a few times per interval
		_lootcheckcnt = _loot getVariable [QGVAR(lootcnt),0];
		_lootchecktime = _loot getVariable [QGVAR(loottime),0];
		TRACE_3("",_unit,_lootcheckcnt,_lootchecktime);
		_checkit = true;
		if (_lootcheckcnt < 30) then {
			INC(_lootcheckcnt);
			_loot setVariable [QGVAR(lootcnt),_lootcheckcnt];
		} else {
			if (time < _lootchecktime + 60) then {
				_checkit = false;
			} else {
				_loot setVariable [QGVAR(loottime),time];
				_loot setVariable [QGVAR(lootcnt),1];
			};
		};
		
		if (_checkit) then {
			_foundstuff = false;
    	_to = 60; // timeout
    	_unit setUnitPosWeak "Middle";
    	_unit doMove (getposATL _loot);
    	for "_i" from _to to 0 step -1 do {
    		if (unitready _unit || moveToCompleted _unit || moveToFailed _unit) exitWith {_unit doWatch _loot};
    		DEC(_to); sleep 1;
    	};
    
    	if (_to > 0) then {
  			if (_unit distance _loot < 5) then {
  				_unit doWatch _loot;
  				//vest
  				/* nah, cheating since we don't keep bullet count; need some takeVest command
  				_item = vest _loot;
  				if (_nc select __i_vest > 0 && _item != "") then {
  					TRACE_3("VEST FOUND ON BODY",_unit,_loot,_item);
  					_unit action ["takeBag",vestContainer _loot];
  					waitUntil {vest _unit != ""};
  					removeVest _loot;
  					_goodies = vestItems _loot;
  					removeVest _loot;
  					if (vest _loot == "") then {
  						_unit addVest _item;
  						{
  							if (isClass (configFile / "CfgMagazines" / _x)) then {
  								_unit addMagazine _x;
  							} else {
  								if (isClass (configFile / "CfgWeapons" / _x)) then {
  									_unit addWeapon _x;
  								};
  							};
  						} forEach _goodies;
  					};
  					sleep 1;
  					breakOut "searchingBodies";
  				};
  				*/
  				//backpack
  				_item = backpack _loot;
  				if (_nc select __i_ruck > 0 && _item != "") then {
  					TRACE_3("RUCK FOUND ON BODY",_unit,_loot,_item);
  					_unit action ["takeBag",unitBackpack _loot];
  					waitUntil {backpack _unit != ""};
  					removeBackpack _loot;
  					breakOut "searchingBodies";
  				};
  				//binoculars
  				_goodies = _loot call FUNC(getBinoculars);
  				if (_nc select __w_binocular > 0 && count _goodies > 0) then {
  					_item = _goodies select 0;
  					TRACE_3("BINOCS FOUND ON BODY",_unit,_loot,_item);
  					_loot removeWeapon _item;
  					if !(_loot hasWeapon _item) then {
  						_unit addWeapon _item;
  					};
  					sleep 1;
  				};
  				//nvg
  				_item = _loot call FUNC(getNVG);
  				if (_nc select __w_nvg > 0 && _item != "") then {
  					TRACE_3("NVG FOUND ON BODY",_unit,_loot,_item);
  					_loot unlinkItem _item;
  					if !(_loot call FNCMAIN(hasNVG)) then {//if the unlink above succeeded
  						_unit linkItem _item;
  					};
  					sleep 1;
  				};
    			//items
    			_goodies = items _loot;
    			TRACE_3("ITEMS FOUND ON BODY",_unit,_loot,_goodies);
    			_goodies = [_goodies,_nc,_nt] call FUNC(foundMag);
    			if (count _goodies > 0) then {
    				TRACE_3("ITEMS FOUND ON BODY WHICH I NEED",_unit,_loot,_goodies);
    				{ //take them all
    					if (_unit canAdd _x) then {
    						sleep 1;
    						_loot removeItem _x;
    						_unit addItem _x;
    					};
    				} forEach _goodies;
    			};
    			
    			//mags
    			_goodies = magazines _loot;
    			TRACE_3("MAGS FOUND ON BODY",_unit,_loot,_goodies);
    			_goodies = [_goodies,_nc,_nt] call FUNC(foundMag);
    			if (count _goodies > 0) then {
    				TRACE_3("MAGS FOUND ON BODY WHICH I NEED",_unit,_loot,_goodies);
    				_foundstuff = true;
    				
    				{ //take them all
    					if (_unit canAdd _x) then {
    						_unit action ["TAKEMAGAZINE",_loot,_x]; sleep 1;
    					};
    				} forEach _goodies;
    				//skip taking weapons this time ?
    				breakOut "searchingBodies";
    			};
    			//weapons
    			//primary
    			_item = primaryWeapon _loot;
    			if (_item != "") then {
					TRACE_3("PRIMARY FOUND ON BODY",_unit,_loot,_item);
					_needit = _nc select __w_primary > 0; //do I need it ?
					if (!_needit) then { //if I already have one, perhaps it's still better to grab this weapon
						if (_nc select 5 == GVAR(needmax) select 5) then { //last mag for current weapon
							if ({_x in (_nt select 5)} count (magazines _x) > 2) then { //found weapon with at least 2 extra mags //todo: check other possible reasons for switching
								_needit = true;
							};
						};
					};
					if (_needit) then {
						_foundstuff = true;
      				
						if ((_item call FNCMAIN(getWeaponType)) in ["RIFLE","SNIPER","MG","AR"]) then {
							if (_loot ammo _item > 0) then {
								//take it
								_unit action ["TAKEWEAPON",_loot,_item];
								//_unit action ["TakeWeaponFromBody",_loot,_item];
								sleep 1;
								if (_item call FNCMAIN(getWeaponType) != "RIFLE") then {_nc set [1,0]}; //specialized primary, not taking secondary (launcher)
							};
						};
					};
    			};
    			//tube
  				_item = secondaryWeapon _loot;
  				if (_nc select __w_secondary > 0 && _item != "") then {
  					TRACE_3("SECONDARY FOUND ON BODY",_unit,_loot,_item);
  					if (_item call FNCMAIN(getWeaponType) == "LAUNCHER") then {
  						if ([_item,(_unit getVariable[QGVAR(allowedsec),[]])] call FUNC(found)) then { // have ammo for it OR it's a disposable launcher, loaded (ACE)
  							if (_loot ammo _item > 0 || [configFile >> "CfgWeapons" >> _item >> "ace_disposable", "number", 0] call CBA_fnc_getConfigEntry == 1) then {
  								_foundstuff = true;
    							//take it
    							_unit action ["TAKEWEAPON",_loot,_item];
    							//_unit action ["TakeWeaponFromBody",_loot,_item];
    							sleep 1;
  							};
  						};
  					};
  				};
  				//sidearm
  				_item = handgunWeapon _loot;
  				if (_nc select __w_sidearm > 0 && _item != "") then {
  					TRACE_3("SIDEARM FOUND ON BODY",_unit,_loot,_item);
  					_foundstuff = true;
  					//take it
  					_unit action ["TAKEWEAPON",_loot,_item];
  					//_unit action ["TakeWeaponFromBody",_loot,_item];
  					sleep 1;
  				};
  				//then the other stuff that I can't get other ways
  				if (_foundstuff) then {_unit action ["REARM",_loot]};
  			};//got near
    	} else {
    		TRACE_2("TIMED OUT",_unit,_loot);
    	};
 		};//check it
	};
	if !(_unit call FUNC(isReady)) exitWith {};
} forEach _search;

_unit setUnitPosWeak "Auto";
[_unit,_leaderpos] spawn FUNC(returnToFormation);

_unit setVariable[QGVAR(inprogress),false];
diag_log format ["%1 | %2 | Rearming ends for this unit.",time,_unit];
