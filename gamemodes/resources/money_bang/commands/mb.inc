#include <YSI_Coding\y_hooks>

hook OnPlayerKeyStateChange(playerid, KEY:newkeys, KEY:oldkeys) {
    if (newkeys & KEY_FIRE)
        DestroyMoneyBangTextDrawings(playerid);
    return 1;
}

YCMD:mb(playerid, params[], help) {
    if (moneyBangInformation[moneyBangIndex] == -1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Actualmente, no hay una bolsa de dinero desaparecida.");

    if (moneyBangInformation[moneyBangIndex] == -1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Actualmente, no hay una bolsa de dinero desaparecida.");

    DestroyMoneyBangTextDrawings(playerid);

    new string[124];
    strcat(string, "~b~");
    strcat(string, moneyBangLocations[moneyBangInformation[moneyBangIndex]]);

    CreateMoneyBangTextDrawings(playerid, string);
    return 1;
}