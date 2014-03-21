/*
	Author: CarlGustaffa

	Description:
	Returns the suns altitude for current day and hour of the year on any island (whos latitude may differ).

	Parameters:
	None needed.

	Returns:
	Suns altitude in degrees, positive values after sunrise, negative values before sunrise.
*/
private ["_lat", "_day", "_hour", "_angle"];
_lat = -1 * getNumber(configFile >> "CfgWorlds" >> worldName >> "latitude");
_day = 360 * (dateToNumber date);
_hour = (daytime / 24) * 360;
_angle = ((12 * cos(_day) - 78) * cos(_lat) * cos(_hour)) - (24 * sin(_lat) * cos(_day));
_angle
