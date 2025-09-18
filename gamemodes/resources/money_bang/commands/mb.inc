YCMD:mb(playerid, params[], help) {
    if (moneyBangInformation[mBIndex] == -1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Actualmente, no hay una bolsa de dinero desaparecida.");

    new string[124];
    strcat(string, "~b~");
    strcat(string, moneyBangLocations[moneyBangInformation[mBIndex]]);

    CreateMBTextDrawings(playerid, string);
    return 1;
}