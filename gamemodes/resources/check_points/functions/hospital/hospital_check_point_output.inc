forward HospitalCheckPointOutput(const playerid);
public HospitalCheckPointOutput(const playerid) {
    if (hospitalInformation[playerid][hOInOperation] && !hospitalInformation[playerid][hOInSkinSelection] && !IsPlayerInCheckpoint(playerid))
        RestoreHospitalInformation(playerid, true);
    return 1;
}