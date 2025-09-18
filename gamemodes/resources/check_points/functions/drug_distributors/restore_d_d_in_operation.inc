forward RestoreDDInOperation(const playerid);
public RestoreDDInOperation(const playerid) {
    if (drugDistributorsInformation[playerid][dDInOperation] != false)
        drugDistributorsInformation[playerid][dDInOperation] = false;
    return 1;
}