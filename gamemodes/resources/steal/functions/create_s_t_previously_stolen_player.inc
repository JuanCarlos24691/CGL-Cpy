forward CreateSTPreviouslyStolenPlayer(const playerid, const targetPlayerId);
public CreateSTPreviouslyStolenPlayer(const playerid, const targetPlayerId) {
    if (stealInformation[playerid][sTPreviouslyStolenPlayer] != targetPlayerId)
        stealInformation[playerid][sTPreviouslyStolenPlayer] = targetPlayerId;
    return 1;
}