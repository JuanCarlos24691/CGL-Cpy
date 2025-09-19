forward SendClanInvitation(const playerid, const targetPlayerId);
public SendClanInvitation(const playerid, const targetPlayerId) {
    if (accountInformation[playerid][assignedClan] == NO_TEAM)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes unir a un jugador a tu clan sí, no perteneces a uno.");

    new clanIdentifierSearched = SearchClanIndex(accountInformation[playerid][assignedClan]);

    if (!isequal(clanInformation[clanIdentifierSearched][leader], accountInformation[playerid][name], true) && !isequal(clanInformation[clanIdentifierSearched][subLeader], accountInformation[playerid][name], true))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No puedes unir a un jugador a tu clan sí, no eres el lider o el sublíder.");

    if (clanInformation[clanIdentifierSearched][members] == 30)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El clan ha alcanzado el límite de miembros, por favor expulsa a un miembro para poder unir a otro.");

    CreateCIClanIdentifier(targetPlayerId, clanIdentifierSearched);
    CreateCITInvitationExpiration(targetPlayerId);

    va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"* Has Invitado A %s (%d) Para Unirse A Tu Clan.", accountInformation[targetPlayerId][name], targetPlayerId);

    va_SendClientMessage(targetPlayerId, -1, ""COLOR_AQUAMARINE"* %s (%d) Te Ha Invitado Al Clan '%s'", accountInformation[playerid][name], playerid, clanInformation[clanIdentifierSearched][name]);
    va_SendClientMessage(targetPlayerId, -1, ""COLOR_BRIGHT_ORANGE"Tienes 20 Segundos Para Aceptar o Rechazar La Invitación.");
    va_SendClientMessage(targetPlayerId, -1, ""COLOR_BRIGHT_ORANGE"Usa /cunirme Para Aceptar La Invitación.");
    return 1;
}