class Extended_PreInit_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_preInit));
};

class Extended_PostInit_EventHandlers {
	ADDON = QUOTE(call COMPILE_FILE(XEH_postInit));
};

class Extended_InitPost_EventHandlers {
	class SoldierWB {
		class ADDON {
            serverInit = QUOTE(_this call FUNC(addUnitToQueue));
		};
	};
	class SoldierEB {
		class ADDON {
            serverInit = QUOTE(_this call FUNC(addUnitToQueue));
		};
	};
	class SoldierGB {
		class ADDON {
            serverInit = QUOTE(_this call FUNC(addUnitToQueue));
		};
	};
};


class Extended_FiredBIS_EventHandlers {
	class AllVehicles {
		class ADDON {
			serverFiredBIS = QUOTE(if (GVAR(loudrange) > 0) then {_this call FUNC(firedEH)});
		};
	};
};


class Extended_Killed_EventHandlers {
	class SoldierWB {
		class ADDON {
			killed = QUOTE(_this spawn FUNC(killedEH));
		};
	};
	class SoldierEB {
		class ADDON {
			killed = QUOTE(_this spawn FUNC(killedEH));
		};
	};
	class SoldierGB {
		class ADDON {
			killed = QUOTE(_this spawn FUNC(killedEH));
		};
	};
};

class Extended_Hit_EventHandlers {
	class SoldierWB {
		class ADDON {
			hit = QUOTE(_this call FUNC(handleHit));
		};
	};
	class SoldierEB {
		class ADDON {
			hit = QUOTE(_this call FUNC(handleHit));
		};
	};
	class SoldierGB {
		class ADDON {
			hit = QUOTE(_this call FUNC(handleHit));
		};
	};
    class StaticWeapon {
		class ADDON {
			hit = QUOTE(_this call FUNC(handleHit));
		};
	};
};

class Extended_Explosion_EventHandlers {
	class SoldierWB {
		class ADDON {
			explosion = QUOTE(_this call FUNC(handleExplosion));
		};
	};
	class SoldierEB {
		class ADDON {
			explosion = QUOTE(_this call FUNC(handleExplosion));
		};
	};
	class SoldierGB {
		class ADDON {
			explosion = QUOTE(_this call FUNC(handleExplosion));
		};
	};
	class StaticWeapon {
		class ADDON {
			explosion = QUOTE(_this call FUNC(handleExplosion));
		};
	};
};

class Extended_InventoryClosed_EventHandlers {
	class SoldierWB {
		ADDON = QUOTE(_this call FUNC(inventoryClosed));
	};
	class SoldierEB {
		ADDON = QUOTE(_this call FUNC(inventoryClosed));
	};
	class SoldierGB {
		ADDON = QUOTE(_this call FUNC(inventoryClosed));
	};
};
