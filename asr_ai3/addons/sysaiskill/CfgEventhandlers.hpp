class Extended_PreInit_EventHandlers {
	class ADDON {
		init = QUOTE(call COMPILE_FILE(XEH_preInit));
	};
};

class Extended_PostInit_EventHandlers {
	class ADDON {
		serverInit = QUOTE(if (GVAR(enabled) == 1) then {call COMPILE_FILE(XEH_postServerInit)});
		init = QUOTE(if (GVAR(enabled) == 1) then {if (!hasInterface) then {[] spawn COMPILE_FILE(XEH_postDediServerInit)}});
	};
};

class Extended_InitPost_EventHandlers {
	class SoldierWB {
		class ADDON {
			serverInit = QUOTE(_this spawn FUNC(modUnitSkill));
		};
	};
	class SoldierEB {
		class ADDON {
			serverInit = QUOTE(_this spawn FUNC(modUnitSkill));
		};
	};
	class SoldierGB {
		class ADDON {
			serverInit = QUOTE(_this spawn FUNC(modUnitSkill));
		};
	};
};

class Extended_FiredBIS_EventHandlers {
	class AllVehicles {
		class ADDON {
			serverFiredBIS = QUOTE(if (GVAR(enabled) == 1) then {_this call FUNC(firedEH)});
		};
	};
};

class Extended_Hit_EventHandlers {
	class SoldierWB {
		class ADDON {
			serverHit = QUOTE(if (GVAR(enabled) == 1) then {if(_this call FUNC(isValidUnit)) then {if (GVAR(removegimps) > 0) then {_this spawn FUNC(removeGimp)}}});
		};
	};
	class SoldierEB {
		class ADDON {
			serverHit = QUOTE(if (GVAR(enabled) == 1) then {if(_this call FUNC(isValidUnit)) then {if (GVAR(removegimps) > 0) then {_this spawn FUNC(removeGimp)}}});
		};
	};
	class SoldierGB {
		class ADDON {
			serverHit = QUOTE(if (GVAR(enabled) == 1) then {if(_this call FUNC(isValidUnit)) then {if (GVAR(removegimps) > 0) then {_this spawn FUNC(removeGimp)}}});
		};
	};
};

class Extended_Killed_EventHandlers {
	class SoldierWB {
		class ADDON {
			serverKilled = QUOTE(if (GVAR(enabled) == 1) then {if (GVAR(joinlast) > 0) then {_this spawn FUNC(killedEH)}});
		};
	};
	class SoldierEB {
		class ADDON {
			serverKilled = QUOTE(if (GVAR(enabled) == 1) then {if (GVAR(joinlast) > 0) then {_this spawn FUNC(killedEH)}});
		};
	};
	class SoldierGB {
		class ADDON {
			serverKilled = QUOTE(if (GVAR(enabled) == 1) then {if (GVAR(joinlast) > 0) then {_this spawn FUNC(killedEH)}});
		};
	};
};
