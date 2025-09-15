forward HospitalCheckPointOutput(const playerid);
public HospitalCheckPointOutput(const playerid) {
    if (hospitalInformation[playerid][inOperation] && !hospitalInformation[playerid][inSkinSelection] && !IsPlayerInCheckpoint(playerid))
        RestoreHospitalInformation(playerid, true);
    return 1;
}