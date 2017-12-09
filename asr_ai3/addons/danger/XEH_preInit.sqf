//#define DEBUG_MODE_FULL
#include "script_component.hpp"
LOG(MSG_INIT);

#include "initSettings.sqf"

PREP(stopToShoot);
PREP(getNearest);
PREP(hasRadio);
PREP(canMountAIGunner);
PREP(getInWeaponsEH);
PREP(canCover);
PREP(findCover);
PREP(moveToCover);
PREP(sendInfo);
PREP(broadcastInfo);
PREP(reactDanger);
PREP(mount_weapon);
PREP(counterAttack);
PREP(counterAttackHelper);
PREP(search_building);
PREP(unitMoveToCover);

GVAR(DC_NEED_COVER) = [2,4,9];
GVAR(DC_ATTACK) =[2,3,4,6,9];


PREP(pt_checkVis);
PREP(pt_findPossibleCenter);
PREP(pt_getCoverPos);
PREP(pt_getCoverPosUnknownEnemy);
PREP(pt_getClosestBuildingPos);
PREP(pt_getUnitsThatNeedCover);
PREP(pt_isCoverValid);
PREP(pt_moveToPoint);
PREP(pt_advancedCover);
PREP(pt_reset_pos);
PREP(pt_setStatusText);
