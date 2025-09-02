forward UpdatePlayerJailTime(const playerid);
public UpdatePlayerJailTime(const playerid) {
    if (accountInformation[playerid][inGame] && accountInformation[playerid][loggedIn] && playerJailTimer[playerid] != INVALID_TIMER) {
        accountInformation[playerid][jailTime]--;

        GameTextForPlayer(playerid, "Saldras del jail en %i segundos", 1000, 1, accountInformation[playerid][jailTime]);

        if (accountInformation[playerid][jailTime] == 0) {
            KillTimer(playerJailTimer[playerid]);
            playerJailTimer[playerid] = INVALID_TIMER;

            new string[124];
            format(string, sizeof(string), ""COLOR_ROSA"**JAIL: %s (%i) (ADMIN JAIL) El jugador ha cumplido el tiempo del jail.", accountInformation[playerid][name], playerid);
            va_SendClientMessageToAll(-1, string);

            SetPlayerSpawn(playerid, 0.0, 0.0, 0.0, 0.0, true);
        }
    }
    return 1;
}