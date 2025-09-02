forward UpdateSpeedometerTextDrawing(const playerid);
public UpdateSpeedometerTextDrawing(const playerid) {
    if (!accountInformation[playerid][inGame])
        return RestoreSpeedometerInformation(playerid);

    if (GetPlayerState(playerid) != PLAYER_STATE_DRIVER)
        return RestoreSpeedometerInformation(playerid);

    new vehicleId = GetPlayerVehicleID(playerid);

    new Float:vx, Float:vy, Float:vz;
    GetVehicleVelocity(vehicleId, vx, vy, vz);

    new string[124];
    format(string, sizeof(string), "%d_KM/H", floatround(floatsqroot(vx * vx + vy * vy + vz * vz) * 180.0, floatround_round));
    CreateSpeedometerTextDrawing(playerid, string);
    return 1;
}