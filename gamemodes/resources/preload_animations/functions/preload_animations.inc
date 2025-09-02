forward PreloadAnimations(const playerid);
public PreloadAnimations(const playerid) {
    for (new i = 0; i < sizeof(animationLibrary); i++)
        ApplyAnimation(playerid, animationLibrary[i], "null", 4.0, false, false, false, false, 0, SYNC_NONE);
    return 1;
}