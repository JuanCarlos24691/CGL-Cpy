YCMD:setlotto(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Tu nievel administrativo no es suficiente para ejecutar este comando.");

    new selectedNumber;

    if (sscanf(params, "i", selectedNumber))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Usa: /setlotto (Número 1 - 50)");

    if (selectedNumber < 1 || selectedNumber > 50)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El número de lotería que elegiste está fuera de rango, este debe estar entre 1 y 50, por favor, vuelve a intentarlo.");

    lottoInformation[setWinningNumber] = selectedNumber - 1;

    va_SendClientMessage(playerid, -1, ""COLOR_ROSA"**SETLOTTO: %s (%i) (ADMIN SETLOTTO) Has establecido el número %d como ganador de la próxima lotería.", accountInformation[playerid][name], playerid, selectedNumber);
    return 1;
}