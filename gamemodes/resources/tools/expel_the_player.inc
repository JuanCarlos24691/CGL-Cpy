forward DelayToEjectThePlayer(const playerid, const delay);
public DelayToEjectThePlayer(const playerid, const delay)  {
    SetTimerEx("ExpelThePlayer", delay, false, "i", playerid);
    return 1;
}

forward ExpelThePlayer(const playerid);
public ExpelThePlayer(const playerid)  {
    Kick(playerid);
    return 1;
}