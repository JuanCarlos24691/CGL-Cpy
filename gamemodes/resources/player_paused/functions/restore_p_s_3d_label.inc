forward RestorePS3DLabel(const playerid);
public RestorePS3DLabel(const playerid) {
    if (playerPausedInformation[playerid][pS3DLabel] != Text3D:INVALID_3DTEXT_ID) {
        DestroyDynamic3DTextLabel(playerPausedInformation[playerid][pS3DLabel]);
        playerPausedInformation[playerid][pS3DLabel] = Text3D:INVALID_3DTEXT_ID;
    }
    return 1;
}