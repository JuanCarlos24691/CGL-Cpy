forward CreatePS3DLabel(const playerid);
public CreatePS3DLabel(const playerid) {
    if (!IsValidDynamic3DTextLabel(playerPausedInformation[playerid][pS3DLabel]))
        playerPausedInformation[playerid][pS3DLabel] = CreateDynamic3DTextLabel("Pausado 0:00", -1, 0.0, 0.0, 0.3, 40.0, playerid, .testlos = 1, .streamdistance = 40.0);
    return 1;
}