YCMD:ad(playerid, params[], help) {
    if (gettime() - aspirinUseInformation[playerid][waitingTime] < 60)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas Esperar Para Consumir Una Aspírina.");

    aspirinUseInformation[playerid][waitingTime] = gettime();

    if (accountInformation[playerid][aspirin] == 0)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No Tienes Suficiente Aspírina.");

    SetPlayerHealth(playerid, 100.0);
    accountInformation[playerid][aspirin]--;

    va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Te Echaste Una Aspirina.");
    ApplyAnimation(playerid, "FOOD", "EAT_Pizza", 4.1, false, false, false, false, SYNC_NONE);
    return 1;
}