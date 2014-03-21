class Extended_PreInit_EventHandlers {
	class ADDON {
		init = QUOTE(call COMPILE_FILE(XEH_preInit));
	};
};

class Extended_PostInit_EventHandlers {
	class ADDON {
		serverInit = QUOTE(call COMPILE_FILE(XEH_postServerInit));
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
	class CAManBase {
		class ADDON {
			serverHit = QUOTE(if (GVAR(enabled) == 1) then {if(_this call FUNC(isValidUnit)) then {_this call FUNC(handleHit)}});
		};
	};
};

class Extended_Killed_EventHandlers {
	class CAManBase {
		class ADDON {
			serverKilled = QUOTE(if (GVAR(enabled) == 1) then {_this spawn FUNC(killedEH)});
		};
	};
};
