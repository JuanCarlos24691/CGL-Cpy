forward Steal(const playerid, const targetPlayerId);
public Steal(const playerid, const targetPlayerId) {
    if (stealInformation[playerid][sTTWaitingTime] != INVALID_TIMER)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes esperar para poder atacar de nuevo.");

    CreateSTTWaitingTime(playerid);

    if (!IsPlayerConnected(targetPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    new Float:playerXCoordinate, Float:playerYCoordinate, Float:playerZCoordinate;
    GetPlayerPos(targetPlayerId, playerXCoordinate, playerYCoordinate, playerZCoordinate);

    if (!IsPlayerInRangeOfPoint(playerid, 1.3, playerXCoordinate, playerYCoordinate, playerZCoordinate))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar cerca del jugador para robarlo.");

    if (stealInformation[playerid][sTPreviouslyStolenPlayer] == targetPlayerId)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No Puedes Robar Dos Veces Seguidas Al Mismo Jugador.");

    if (accountInformation[targetPlayerId][cashInHand] == 0)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El jugador no tiene dinero que puedas robarlo.");

    if (accountInformation[playerid][pet] != 0 && accountInformation[targetPlayerId][pet] != 0) {
        va_SendClientMessageToAll(-1, "%s, El %s De %s (%d) Salio Huyendo Cuando Vio A %s %s De %s (%d)", accountInformation[targetPlayerId][petName], typeOfPetsNames[accountInformation[targetPlayerId][pet]], accountInformation[targetPlayerId][name], targetPlayerId, typeOfPetsNames[accountInformation[playerid][pet]], accountInformation[playerid][petName], accountInformation[playerid][petName], playerid);

        if (accountInformation[targetPlayerId][pet] != 0)
            accountInformation[targetPlayerId][pet] = 0;

        va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE2"%s (%d) Se Ha Dado Cuenta De Que Trataste De Robarle. Intento fallido!", accountInformation[targetPlayerId][name], targetPlayerId);

        va_SendClientMessage(targetPlayerId, -1, ""COLOR_RED"Tu Mascota Salio Huyendo.");
        va_SendClientMessage(targetPlayerId, -1, ""COLOR_AQUAMARINE2"Se Te Notifica Que %s (%d) Intento Robarte. Su Intento fue Fallido!", accountInformation[playerid][name], playerid);
        return 1;
    }

    accountInformation[playerid][cashInHand] += accountInformation[targetPlayerId][cashInHand];
    accountInformation[targetPlayerId][cashInHand] = 0;

    va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE2"Robaste $%d de %s (%d).", accountInformation[targetPlayerId][cashInHand], accountInformation[targetPlayerId][name], targetPlayerId);
    GameTextForPlayer(playerid, "~w~Robaste_$%d_de_%s.", 4500, 4, accountInformation[targetPlayerId][cashInHand], accountInformation[targetPlayerId][name]);

    va_SendClientMessage(targetPlayerId, -1, ""COLOR_AQUAMARINE2"%s (%d) te ha robado $%d", accountInformation[playerid][name], playerid, accountInformation[targetPlayerId][cashInHand]);
    GameTextForPlayer(targetPlayerId, "~w~%s_te_ha_robado_$%d", 4500, 4, accountInformation[playerid][name], accountInformation[targetPlayerId][cashInHand]);
    return 1;
}