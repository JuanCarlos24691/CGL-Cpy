YCMD:crearclan(playerid, params[], help) {
    if (accountInformation[playerid][assignedClan] != NO_TEAM)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes crear un clan sí, ya perteneces a uno.");

    if (accountInformation[playerid][level] < 2000)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No tienes score suficiente. Requieres de 2000 de score como mínimo.");

    if (accountInformation[playerid][cashInHand] < 5000000)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Necesitas almenos $5.000.000 para poder crear un clan.");

    new nameOfTheNewClan[128];

    if (sscanf(params, "z[128]", nameOfTheNewClan))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Usa: /crearclan [Nombre]");

    CreateNewClan(playerid, nameOfTheNewClan);
    return 1;
}