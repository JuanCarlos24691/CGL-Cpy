forward ExpelAPlayerFromTheClan(const playerid, const destinationPlayerId);
public ExpelAPlayerFromTheClan(const playerid, const destinationPlayerId) {
    if (destinationPlayerId == playerid)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes expulsarte a ti mismo.");

    new clanIdentifierSearched = SearchClanIndex(accountInformation[playerid][assignedClan]);

    if (accountInformation[playerid][assignedClan] == NO_TEAM)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes expulsar a un jugador de un clan sí, no perteneces a uno.");

    if (!isequal(clanInformation[clanIdentifierSearched][leader], accountInformation[playerid][name], true))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes expulsar a un jugador de un clan sí, no eres el lider de uno.");

    if (clanInformation[clanIdentifierSearched][uniqueClanIdentifier] != accountInformation[destinationPlayerId][assignedClan])
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El jugador al que intentas expulsar del clan no pertenece a tu clan.");

    if (isequal(clanInformation[clanIdentifierSearched][subLeader], accountInformation[destinationPlayerId][name], true))
        strcpy(clanInformation[clanIdentifierSearched][subLeader], "No sub-leader");

    accountInformation[destinationPlayerId][assignedClan] = NO_TEAM;
    clanInformation[clanIdentifierSearched][members]--;

    AssignPlayerName(destinationPlayerId);
    AssignPlayerColor(destinationPlayerId);

    foreach (new i : Player)
        if (accountInformation[i][assignedClan] == clanInformation[clanIdentifierSearched][uniqueClanIdentifier])
            va_SendClientMessage(i, -1, ""COLOR_DARK_RED"(CLAN INFO) *** %s (%d) Ha Sido Expulsado Del Clan. ***", accountInformation[destinationPlayerId][name], destinationPlayerId);

    va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"* Has Expulsado A %s (%d) Del Clan *", accountInformation[destinationPlayerId][name], destinationPlayerId);
    va_SendClientMessage(destinationPlayerId, -1, ""COLOR_RED"Fuiste Expulsado Del Clan '%s'", clanInformation[clanIdentifierSearched][name]);
    return 1;
}