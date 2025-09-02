forward AssignClanSubLeader(const playerid, const destinationPlayerId);
public AssignClanSubLeader(const playerid, const destinationPlayerId) {
    if (destinationPlayerId == playerid)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes darte sublíder a ti mismo.");

    if (accountInformation[playerid][assignedClan] == NO_TEAM)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes dar sublíder a un jugador sí, no perteneces a un clan.");

    new clanIdentifierSearched = SearchClanIndex(accountInformation[playerid][assignedClan]);

    if (!isequal(clanInformation[clanIdentifierSearched][leader], accountInformation[playerid][name], true))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes dar sublíder a un jugador sí, no eres el lider de un clan.");

    if (clanInformation[clanIdentifierSearched][uniqueClanIdentifier] != accountInformation[destinationPlayerId][assignedClan])
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El jugador al que intentas dar sublíder no pertenece a tu clan.");

    strcpy(clanInformation[clanIdentifierSearched][subLeader], accountInformation[destinationPlayerId][name]);

    va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"* Has Asignado A %s (%d) Como Sublider *", accountInformation[destinationPlayerId][name], destinationPlayerId);

    foreach (new i : Player)
        if (accountInformation[i][assignedClan] == clanInformation[clanIdentifierSearched][uniqueClanIdentifier])
            va_SendClientMessageToAll(-1, ""COLOR_DARK_RED"* %s (%d) Ha Sido Asignado Como Sublider Del Clan *", accountInformation[destinationPlayerId][name], destinationPlayerId);
    return 1;
}