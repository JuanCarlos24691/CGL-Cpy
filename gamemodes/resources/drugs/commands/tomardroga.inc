YCMD:td(playerid, params[], help) = tomardroga;
YCMD:tomardroga(playerid, params[], help) {
    new quantity;

    if (sscanf(params, "i", quantity))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Usa: /tomardroga (Cantidad)");

    if (quantity <= 0)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes consumir al menos 1g de droga.");

    if (accountInformation[playerid][drugs] < quantity)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No Tienes Suficiente Droga.");

    if (quantity > 70)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Solo Te Puedes Hechar Maximo 70 Gramos");

    if (drugUseInformation[playerid][gramsOfDrugsConsumed] == 70) {
        RestoreDrugUseInformation(playerid, true);
        SetPlayerHealth(playerid, 0);

        va_SendClientMessage(playerid, -1, ""COLOR_RED"Sobredosis, Mamaste!!");
        return va_SendClientMessageToAll(-1, ""COLOR_DARK_RED"%s (%d) Ha Muerto De Sobredosis.", accountInformation[playerid][name], playerid);
    }

    RestoreDrugUseInformation(playerid, false);

    if (drugUseInformation[playerid][lifeRegenTimer] == INVALID_TIMER)
        drugUseInformation[playerid][lifeRegenTimer] = SetTimerEx("ProgressivelyIncreaseTheLife", 600, true, "i", playerid);

    if (!drugUseInformation[playerid][inOperation])
        drugUseInformation[playerid][inOperation] = true;

    // Establecer la cantidad total de vida por subir
    drugUseInformation[playerid][lifePending] = float(quantity * 15); // 15 de vída por cada gramo

    drugUseInformation[playerid][gramsOfDrugsConsumed]++;
    accountInformation[playerid][drugs] -= quantity;

    va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Te Echaste %d Gramos De Droga.", quantity);
    GameTextForPlayer(playerid, "~w~Drogas On", 3000, 4);
    ApplyAnimation(playerid, "FOOD", "EAT_Pizza", 4.1, false, false, false, false, SYNC_NONE);
    return 1;
}