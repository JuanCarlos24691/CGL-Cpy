forward PlayerView(const playerid);
public PlayerView(const playerid) {
    SetPlayerInterior(playerid, 3);
    SetPlayerPos(playerid, 513.084167, -15.365875, 1001.565307);
    SetPlayerFacingAngle(playerid, 1.101273);

    SetPlayerCameraPos(playerid, 513.026000, -10.525109, 1001.542053);
    SetPlayerCameraLookAt(playerid, 512.945373, -15.524431, 1001.525207);
    return 1;
}