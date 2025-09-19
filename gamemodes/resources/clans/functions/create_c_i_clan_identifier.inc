forward CreateCIClanIdentifier(const playerid, const clanIdentifier);
public CreateCIClanIdentifier(const playerid, const clanIdentifier) {
    if (clanInvitationInformation[playerid][cIClanIdentifier] != clanIdentifier)
        clanInvitationInformation[playerid][cIClanIdentifier] = clanIdentifier;
    return 1;
}