YCMD:lotto(playerid, params[], help) {
    new selectedNumber;

    if (sscanf(params, "i", selectedNumber)) {
        va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Loteria diaria de "SERVER_NAME"  Premio Mayor Actual: $%d  Sorteo Diario a las 18:00", lottoInformation[accumulatedWell]);
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"USA: /lotto (numero) Para Seleccionar Un Numero Por $1500");
    }

    if (selectedNumber < 1 || selectedNumber > 50)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El número de lotería que elegiste está fuera de rango, este debe estar entre 1 y 50, por favor, vuelve a intentarlo.");

    if (accountInformation[playerid][cashInHand] < 1500)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas almenos $1500 para poder comprar un numero de loteria.");

    for (new i = 0; i < MAX_LOTTO; i++)
        if (isequal(accountInformation[playerid][name], lottoPlayerInformation[i][name], true) && lottoPlayerInformation[i][reserved])
            return va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Ya Estas Jugando A La Loteria Con El Numero %d.", i + 1);

    selectedNumber--;

    if (!isempty(lottoPlayerInformation[selectedNumber][name]) && lottoPlayerInformation[selectedNumber][reserved])
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El numero de lotería que elegiste no está disponible, por favor, vuelve a intentarlo.");

    if (lottoPlayerInformation[selectedNumber][name] != accountInformation[playerid][name])
        strcpy(lottoPlayerInformation[selectedNumber][name], accountInformation[playerid][name]);

    if (!lottoPlayerInformation[selectedNumber][reserved])
        lottoPlayerInformation[selectedNumber][reserved] = true;

    accountInformation[playerid][cashInHand] -= 1500;

    GameTextForPlayer(playerid, "~w~Numero de loteria: ~b~~h~%d~w~~n~Premio mayor: ~g~$%d", 4500, 4, selectedNumber + 1, lottoInformation[accumulatedWell]);
    va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Tu Numero De Loteria: %d   Primio Mayor: $%d", selectedNumber + 1, lottoInformation[accumulatedWell]);
    return 1;
}