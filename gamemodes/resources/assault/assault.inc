#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    CreateTheftAndDeliveryChains();

    for (new i = 0; i < MAX_PLAYERS; i++)
        RestoreAssaultPlayerInformation(i);

    SetTimerEx("UpdateAssault", 1000, true, "i", false);
    UpdateAssault(true);
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreAssaultPlayerInformation(playerid);
    return 1;
}

hook OnPlayerEnterDynamicCP(playerid, checkpoint) {
    if (checkpoint == assaultInformation[aCheckPoint]) {
        if (assaultPlayerInformation[playerid][aAssaultCompleted])
            return CreateCompletedATextDrawings(playerid, nameOfAssaultLocations[citiesInformation[selectedCity]][1]);

        CreateATextDrawings(playerid);
        CreateAAtTheCheckPoint(playerid);
        CreateATExitFromTheCheckPoint(playerid);
    }
    return 1;
}

hook OnPlayerEnterDynRaceCP(playerid, checkpoint) {
    if (checkpoint == assaultPlayerInformation[playerid][aDCheckPoint] && assaultPlayerInformation[playerid][aAssaultCompleted]) {
        if (GetPlayerState(playerid) == PLAYER_STATE_ONFOOT)
            return va_SendClientMessage(playerid, -1, ""COLOR_RED"No Puedes Terminar El Robo A Pie.");

        RestoreAssaultPlayerInformation(playerid);
        accountInformation[playerid][cashInHand] += 17000;

        GameTextForPlayer(playerid, "~w~Robaste_~g~$17000", 4500, 3);
        va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE2"%s (%d) Ha Robado $17000 De %s", accountInformation[playerid][name], playerid, nameOfAssaultLocations[citiesInformation[selectedCity]][0]);
    }
    return 1;
}

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE && assaultPlayerInformation[playerid][aAssaultCompleted])
        RestoreCompletedATextDrawings(playerid);
    return 1;
}