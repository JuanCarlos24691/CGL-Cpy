YCMD:gotomb(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 5  para poder usar este comando.");

    if (moneyBangInformation[moneyBangIndex] == -1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Actualmente, no hay una bolsa de dinero desaparecida.");

    SetPlayerPos(playerid, moneyBangInformation[moneyBangXCoordinate][moneyBangInformation[moneyBangIndex]], moneyBangInformation[moneyBangYCoordinate][moneyBangInformation[moneyBangIndex]] - 3, moneyBangInformation[moneyBangZCoordinate][moneyBangInformation[moneyBangIndex]]);
    va_SendClientMessage(playerid, -1, ""COLOR_ROSA"**GOTOMB: %s (%i) (ADMIN GOTOMB) Te has teletransportado a la bolsa de dinero.", accountInformation[playerid][name], playerid);
    return 1;
}