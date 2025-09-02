forward SearchClanIndex(const playerClanIdentifier);
public SearchClanIndex(const playerClanIdentifier) {
    for (new i = 0; i < numberOfClansCreated; i++)
        if (clanInformation[i][uniqueClanIdentifier] == playerClanIdentifier)
            return i;
    return NO_TEAM;
}