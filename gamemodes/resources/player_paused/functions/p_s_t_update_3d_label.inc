forward PSTUpdate3DLabel(const playerid);
public PSTUpdate3DLabel(const playerid) {
    // Aumentar segundos
    playerPausedInformation[playerid][pSSeconds]++;

    // Controlar cuando llegue a 60
    if (playerPausedInformation[playerid][pSSeconds] >= 60) {
        playerPausedInformation[playerid][pSSeconds] = 0;
        playerPausedInformation[playerid][pSMinutes]++;
    }

    // Crear cadena con formato MM:SS
    new minutesAndSeconds[6]; // "00:00" + terminador
    format(minutesAndSeconds, sizeof(minutesAndSeconds), "Pausado %02d:%02d", playerPausedInformation[playerid][pSMinutes], playerPausedInformation[playerid][pSSeconds]);

    UpdatePS3DLabel(playerid, minutesAndSeconds);
    return 1;
}