forward RestoreSTPreviouslyStolenPlayer(const playerid);
public RestoreSTPreviouslyStolenPlayer(const playerid) {
    if (stealInformation[playerid][sTPreviouslyStolenPlayer] != INVALID_PLAYER_ID)
        stealInformation[playerid][sTPreviouslyStolenPlayer] = INVALID_PLAYER_ID;
    return 1;
}