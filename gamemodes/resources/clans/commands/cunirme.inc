YCMD:cunirme(playerid, params[], help) {
    JoinAPlayerToAClan(playerid, clanInvitationInformation[playerid][clanIdentifier]);
    RestoreClanInvitationInfo(playerid);
    return 1;
} 