forward RestoreClanInvitationInfo(const playerid);
public RestoreClanInvitationInfo(const playerid) {
    RestoreCIClanIdentifier(playerid);
    RestoreCITInvitationExpiration(playerid);
    return 1;
}