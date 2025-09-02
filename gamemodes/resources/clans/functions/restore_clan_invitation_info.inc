forward RestoreClanInvitationInfo(const playerid);
public RestoreClanInvitationInfo(const playerid) {
    if (clanInvitationInformation[playerid][clanIdentifier] != NO_TEAM)
        clanInvitationInformation[playerid][clanIdentifier] = NO_TEAM;

    if (clanInvitationInformation[playerid][invitationExpirationTimer] != INVALID_TIMER) {
        KillTimer(clanInvitationInformation[playerid][invitationExpirationTimer]);
        clanInvitationInformation[playerid][invitationExpirationTimer] = INVALID_TIMER;
    }
    return 1;
}