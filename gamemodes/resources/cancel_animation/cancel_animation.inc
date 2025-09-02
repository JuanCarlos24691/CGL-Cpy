#include <YSI_Coding\y_hooks>

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    new animLib[32], animName[32];
    GetAnimationName(GetPlayerAnimationIndex(playerid), animLib, sizeof animLib, animName, sizeof animName);

    if (newkeys & KEY_FIRE && !(oldkeys & KEY_FIRE) && GetPlayerState(playerid) == PLAYER_STATE_ONFOOT) {
        for (new i = 0; i < sizeof(animationLibrary); i++) {
            if (isequal(animLib, animationLibrary[i], true)) {
                for (new b = 0; b < sizeof(animationName); b++) {
                    if (isequal(animName, animationName[b], true)) {
                        ApplyAnimation(playerid, animationLibrary[i], "null", 4.0, false, false, false, false, 0, SYNC_NONE);
                        return -1;
                    }
                }
            }
        }
    }
    return 1;
}