forward AssignPlayerColor(const playerid);
public AssignPlayerColor(const playerid) {
    new color = 0xFFFFFFFF;
    SetPlayerColor(playerid, color);

    if (accountInformation[playerid][assignedClan] == NO_TEAM)
        return 1;

    color = clanInformation[SearchClanIndex(accountInformation[playerid][assignedClan])][argb];
    SetPlayerColor(playerid, color);
    return 1;
}