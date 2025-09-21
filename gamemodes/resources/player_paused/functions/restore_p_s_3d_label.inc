forward RestorePS3DLabel(const playerid);
public RestorePS3DLabel(const playerid) {
    if (IsValidDynamic3DTextLabel(playerPausedInformation[playerid][pS3DLabel])) {
        DestroyDynamic3DTextLabel(playerPausedInformation[playerid][pS3DLabel]);
        playerPausedInformation[playerid][pS3DLabel] = Text3D:INVALID_3DTEXT_ID;
    }
    return 1;
}