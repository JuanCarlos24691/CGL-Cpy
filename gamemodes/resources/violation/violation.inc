#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++) {
        violationInformation[i][lifeDecrementTimer] = INVALID_TIMER;
        violationInformation[i][playerPreviouslyViolated] = -1;
    }
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreViolationInformation(playerid);
    return 1;
}

hook OnPlayerSpawn(playerid) {
    if (accountInformation[playerid][chlamydia] || accountInformation[playerid][gonorrhea] || accountInformation[playerid][syphilis]) {
        if (violationInformation[playerid][lifeDecrementTimer] == INVALID_TIMER)
            violationInformation[playerid][lifeDecrementTimer] = SetTimerEx("ProgressivelyDecrementTheLife", 1000, true, "i", playerid);

        if (!violationInformation[playerid][inOperation])
            violationInformation[playerid][inOperation] = true;

        new string[124];
        strcat(string, "~r~Ha sido Infectado Con~n~");

        if (accountInformation[playerid][chlamydia])
            strcat(string, "'Clamidia' ");

        if (accountInformation[playerid][gonorrhea])
            strcat(string, "'Gonorrea' ");

        if (accountInformation[playerid][syphilis])
            strcat(string, "'Sífilis'");

        RepairTextdrawString(string);
        GameTextForPlayer(playerid, string, 1500, 4);
    }
    return 1;
}

hook OnPlayerDeath(playerid, killerid, WEAPON:weapon) {
    if (violationInformation[playerid][inOperation])
        va_SendClientMessageToAll(-1, ""COLOR_DARK_RED"%s (%d) Ha Muerto Por Multiples Enfermedades.", accountInformation[playerid][name], playerid);

    RestoreViolationInformation(playerid);

    if (accountInformation[playerid][chlamydia])
        accountInformation[playerid][chlamydia] = false;

    if (accountInformation[playerid][gonorrhea])
        accountInformation[playerid][gonorrhea] = false;

    if (accountInformation[playerid][syphilis])
        accountInformation[playerid][syphilis] = false;
    return 1;
}