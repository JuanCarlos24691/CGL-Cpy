forward AssignPlayerName(const playerid);
public AssignPlayerName(const playerid) {
    new string[MAX_PLAYER_NAME];
    strcpy(string, accountInformation[playerid][name]);
    SetPlayerName(playerid, string);

    if (accountInformation[playerid][assignedClan] == NO_TEAM)
        return 1;

    new clanIdentifierSearched = SearchClanIndex(accountInformation[playerid][assignedClan]);

    if (isequal(clanInformation[clanIdentifierSearched][tag], "No tag", true))
        return 1;

    format(string, sizeof(string), "[%s]%s", clanInformation[clanIdentifierSearched][tag], accountInformation[playerid][name]);

    if (strlen(accountInformation[playerid][name]) > 11)
        format(string, sizeof(string), "[%s]%s..", clanInformation[clanIdentifierSearched][tag], ret_strmid(accountInformation[playerid][name], 0, 11));

    SetPlayerName(playerid, string);
    return 1;
}