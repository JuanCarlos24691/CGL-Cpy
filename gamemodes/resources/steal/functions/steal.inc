forward Steal(const playerid, const targetPlayerId);
public Steal(const playerid, const targetPlayerId) {
    if (stealInformation[playerid][sTTWaitingTime] != INVALID_TIMER)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Por Favor, Espere Antes De Robar A Alguien De Nuevo.");

    if (!IsPlayerConnected(targetPlayerId))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El jugador especificado no está conectado.");

    new Float:playerXCoordinate, Float:playerYCoordinate, Float:playerZCoordinate;
    GetPlayerPos(targetPlayerId, playerXCoordinate, playerYCoordinate, playerZCoordinate);

    if (!IsPlayerInRangeOfPoint(playerid, 1.3, playerXCoordinate, playerYCoordinate, playerZCoordinate))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No Hay Nadie Lo Suficiente Cerca Para Poder Robarle.");

    if (stealInformation[playerid][sTPreviouslyStolenPlayer] == targetPlayerId)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No Puedes Robar Dos Veces Seguidas Al Mismo Jugador.");

    CreateSTPreviouslyStolenPlayer(playerid, targetPlayerId);
    CreateSTTWaitingTime(playerid);

    if (accountInformation[targetPlayerId][cashInHand] == 0)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"%s (%d) No Tiene Dinero Para Robarle.", accountInformation[targetPlayerId][name], targetPlayerId);

    if (accountInformation[playerid][pet] != 0 && accountInformation[targetPlayerId][pet] != 0) {
        if (random(100) < 49) {
            va_SendClientMessage(playerid, -1, "Tu Mascota Luchó Con %s De %s (%d) Y Resulto Un Empate.", accountInformation[targetPlayerId][petName], accountInformation[targetPlayerId][name], targetPlayerId);
            va_SendClientMessage(targetPlayerId, -1, "Tu Mascota Luchó Con %s De %s (%d) Y Resulto Un Empate.", accountInformation[playerid][petName], accountInformation[playerid][name], playerid);
            return 1;
        }

        va_SendClientMessageToAll(-1, "%s, El %s De %s (%d) Salio Huyendo Cuando Vio A %s %s De %s (%d)", accountInformation[targetPlayerId][petName], typeOfPetsNames[accountInformation[targetPlayerId][pet]], accountInformation[targetPlayerId][name], targetPlayerId, typeOfPetsNames[accountInformation[playerid][pet]], accountInformation[playerid][petName], accountInformation[playerid][name], playerid);
        va_SendClientMessage(targetPlayerId, -1, ""COLOR_RED"Tu Mascota Salio Huyendo.");

        if (accountInformation[targetPlayerId][pet] != 0)
            accountInformation[targetPlayerId][pet] = 0;

        if (!isequal(accountInformation[targetPlayerId][petName], "Unnamed", true))
            strcpy(accountInformation[targetPlayerId][petName], "Unnamed");
        return 1;
    } else if (accountInformation[playerid][pet] == 0 && accountInformation[targetPlayerId][pet] != 0) {
        va_SendClientMessage(targetPlayerId, -1, ""COLOR_AQUAMARINE_GREEN"Tu Mascota %s El %s Te Ha Te Ha Defendido De %s (%d)", accountInformation[targetPlayerId][petName], typeOfPetsNames[accountInformation[targetPlayerId][pet]], accountInformation[playerid][name], playerid);
        va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE_GREEN"%s El %s Ha Defendido A %s (%d)", accountInformation[targetPlayerId][petName], typeOfPetsNames[accountInformation[targetPlayerId][pet]], accountInformation[targetPlayerId][name], targetPlayerId);

        if (random(100) < 29)
            SetPlayerHealth(playerid, 0);
        return 1;
    }

    if (random(100) < 49) {
        va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE2"%s (%d) Se Ha Dado Cuenta De Que Trataste De Robarle. Intento fallido!", accountInformation[targetPlayerId][name], targetPlayerId);
        GameTextForPlayer(playerid, "~w~%s_fue_notificado_que_intentaste~n~robarle_intento_fallido!.", 4500, 5, accountInformation[targetPlayerId][name]);

        va_SendClientMessage(targetPlayerId, -1, ""COLOR_AQUAMARINE2"Se Te Notifica Que %s (%d) Intento Robarte. Su Intento fue Fallido!", accountInformation[playerid][name], playerid);
        GameTextForPlayer(targetPlayerId, "~w~Se_te_notifica_que_%s_intento_robarte.~n~su_intento_fue_fallido!", 4500, 5, accountInformation[playerid][name]);
        return 1;
    }

    new stolenMoney = accountInformation[targetPlayerId][cashInHand] - (accountInformation[targetPlayerId][cashInHand] * 1 / 100);

    accountInformation[playerid][cashInHand] += stolenMoney;
    accountInformation[targetPlayerId][cashInHand] -= stolenMoney;

    va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE2"Robaste $%d de %s (%d).", accountInformation[targetPlayerId][cashInHand], accountInformation[targetPlayerId][name], targetPlayerId);
    GameTextForPlayer(playerid, "~w~Robaste_$%d_de_%s", 4500, 5, accountInformation[targetPlayerId][cashInHand], accountInformation[targetPlayerId][name]);

    va_SendClientMessage(targetPlayerId, -1, ""COLOR_AQUAMARINE2"%s (%d) te ha robado $%d.", accountInformation[playerid][name], playerid, accountInformation[targetPlayerId][cashInHand]);
    GameTextForPlayer(targetPlayerId, "~w~%s_te_ha_robado_$%d.", 4500, 5, accountInformation[playerid][name], accountInformation[targetPlayerId][cashInHand]);
    return 1;
}