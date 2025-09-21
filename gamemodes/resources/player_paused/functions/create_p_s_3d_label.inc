forward CreatePS3DLabel(const playerid);
public CreatePS3DLabel(const playerid) {
    if (playerPausedInformation[playerid][pS3DLabel] == Text3D:INVALID_3DTEXT_ID)
        playerPausedInformation[playerid][pS3DLabel] = CreateDynamic3DTextLabel("Pausado 0:00", 0xFFFFFFFF, 0.0, 0.0, 0.3, 40.0, playerid, .testlos = 1, .streamdistance = 40.0);
    return 1;
}