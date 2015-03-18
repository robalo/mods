/*
	Author: Karel Moricky
	Fixed by Robalo (get items compatible by class; prevent returning duplicates)

	Description:
	Return all compatible weapon attachments
	
	Parameter(s):
		0: STRING - weapon class
	
	Returns:
	ARRAY of STRINGs
*/

private ["_weapon","_cfgWeapon"];
_weapon = [_this,0,"",[""]] call bis_fnc_param;
_cfgWeapon = configfile >> "cfgweapons" >> _weapon;
if (isClass _cfgWeapon) then {
	private ["_compatibleItems"];
	_compatibleItems = [];
	{
		private ["_cfgCompatibleItems"];
		_cfgCompatibleItems = _x >> "compatibleItems";
		if (isarray _cfgCompatibleItems) then {
			{
				if !(_x in _compatibleItems) then {_compatibleItems pushBack _x;};
			} forEach getArray _cfgCompatibleItems;
		} else {
			if (isclass _cfgCompatibleItems) then {
				{
					if (getnumber _x > 0 && {!((configname _x) in _compatibleItems)}) then {_compatibleItems pushback configname _x;};
				} foreach configproperties [_cfgCompatibleItems, "isNumber _x"];
			};
		};
	} foreach configproperties [_cfgWeapon >> "WeaponSlotsInfo","isclass _x"];
	_compatibleItems
} else {
	if (_weapon != "") then {["'%1' not found in CfgWeapons",_weapon] call bis_fnc_error;};
	[]
};
