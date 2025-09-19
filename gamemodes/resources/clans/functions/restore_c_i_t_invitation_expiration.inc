forward RestoreCITInvitationExpiration(const playerid);
public RestoreCITInvitationExpiration(const playerid) {
    if (clanInvitationInformation[playerid][cITInvitationExpiration] != INVALID_TIMER) {
        KillTimer(clanInvitationInformation[playerid][cITInvitationExpiration]);
        clanInvitationInformation[playerid][cITInvitationExpiration] = INVALID_TIMER;
    }
    return 1;
}