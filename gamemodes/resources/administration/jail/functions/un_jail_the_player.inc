forward UnJailThePlayer(const playerid);
public UnJailThePlayer(const playerid) {
    if (accountInformation[playerid][loggedIn] && accountInformation[playerid][inGame] && accountInformation[playerid][jailTime] > 0 && playerJailTimer[playerid] != INVALID_TIMER) {
        accountInformation[playerid][jailTime] = 0;

        KillTimer(playerJailTimer[playerid]);
        playerJailTimer[playerid] = INVALID_TIMER;

        SetPlayerSpawn(playerid, 0.0, 0.0, 0.0, 0.0, true);
    }
    return 1;
}