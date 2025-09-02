forward JoinAPlayerToAClan(const playerid, const clanIdentifierSearched);
public JoinAPlayerToAClan(const playerid, const clanIdentifierSearched) {
    if (accountInformation[playerid][assignedClan] != NO_TEAM)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes unirte a un clan sí, ya perteneces a uno.");

    if (clanInvitationInformation[playerid][clanIdentifier] == NO_TEAM)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Actualmente no tienes ninguna invitación para unirte a un clan.");

    accountInformation[playerid][assignedClan] = clanIdentifierSearched;
    clanInformation[clanIdentifierSearched][members]++;

    AssignPlayerName(playerid);
    AssignPlayerColor(playerid);

    foreach (new i : Player)
        if (accountInformation[i][assignedClan] == clanInformation[clanIdentifierSearched][uniqueClanIdentifier])
            va_SendClientMessage(i, -1, "{%s}(CLAN INFO) %s (%d) Ha Entrado Al Clan.", clanInformation[clanIdentifierSearched][hexadecimal], accountInformation[playerid][name], playerid);

    va_SendClientMessage(playerid, -1, "{%s}** Has Entrado Al Clan '%s' **", clanInformation[clanIdentifierSearched][hexadecimal], clanInformation[clanIdentifierSearched][name]);
    return 1;
}