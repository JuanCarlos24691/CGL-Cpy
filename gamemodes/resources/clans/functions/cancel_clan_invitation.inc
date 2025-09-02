forward CancelClanInvitation(const playerid);
public CancelClanInvitation(const playerid) {
    RestoreClanInvitationInfo(playerid);
    va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"El Tiempo De La Invitacion Al Clan Se Agoto.");
    return 1;
}