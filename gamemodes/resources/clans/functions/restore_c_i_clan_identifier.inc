forward RestoreCIClanIdentifier(const playerid);
public RestoreCIClanIdentifier(const playerid) {
    if (clanInvitationInformation[playerid][cIClanIdentifier] != NO_TEAM)
        clanInvitationInformation[playerid][cIClanIdentifier] = NO_TEAM;
    return 1;
}