forward RestoreStealInformation(const playerid);
public RestoreStealInformation(const playerid) {
    RestoreSTPreviouslyStolenPlayer(playerid);
    RestoreSTTWaitingTime(playerid);
    return 1;
}