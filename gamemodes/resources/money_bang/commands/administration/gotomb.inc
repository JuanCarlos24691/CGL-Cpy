YCMD:gotomb(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 5  para poder usar este comando.");

    if (moneyBangInformation[mBIndex] == -1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Actualmente, no hay una bolsa de dinero desaparecida.");

    SetPlayerPos(playerid, moneyBangInformation[mBXCoordinate][moneyBangInformation[mBIndex]], moneyBangInformation[mBYCoordinate][moneyBangInformation[mBIndex]] - 3, moneyBangInformation[mBZCoordinate][moneyBangInformation[mBIndex]]);
    va_SendClientMessage(playerid, -1, ""COLOR_ROSA"**GOTOMB: %s (%i) (ADMIN GOTOMB) Te has teletransportado a la bolsa de dinero.", accountInformation[playerid][name], playerid);
    return 1;
}