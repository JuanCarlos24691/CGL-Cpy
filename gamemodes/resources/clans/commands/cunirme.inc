YCMD:cunirme(playerid, params[], help) {
    JoinAPlayerToAClan(playerid, clanInvitationInformation[playerid][cIClanIdentifier]);
    RestoreClanInvitationInfo(playerid);
    return 1;
} 