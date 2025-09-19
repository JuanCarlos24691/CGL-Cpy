forward CreateCITInvitationExpiration(const playerid);
public CreateCITInvitationExpiration(const playerid) {
    if (clanInvitationInformation[playerid][cITInvitationExpiration] == INVALID_TIMER)
        clanInvitationInformation[playerid][cITInvitationExpiration] = SetTimerEx("CancelClanInvitation", 20000, false, "i", playerid);
    return 1;
}