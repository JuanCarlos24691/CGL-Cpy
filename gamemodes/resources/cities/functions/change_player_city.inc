forward ChangePlayerCity(const playerid, const city);
public ChangePlayerCity(const playerid, const city) {
    va_SendClientMessage(playerid, -1, "La Semana Ha terminado - Cambiando Mapa A: "COLOR_DARK_GREEN"%s", cityNames[city]);

    if (GetPlayerInterior(playerid) != 0)
        SetPlayerInterior(playerid, 0);

    if (GetPlayerVirtualWorld(playerid) != 0)
        SetPlayerVirtualWorld(playerid, 0);

    if (IsPlayerPaused(playerid, 1500))
        return SetPlayerSpawn(playerid, 0.0, 0.0, 0.0, 0.0, true);

    new string[124];
    format(string, sizeof(string), "Cambiando~b~~h~ mapa~w~ hacia~p~~h~ %s~n~espere porfavor...", cityNames[city]);

    RepairTextdrawString(string);
    CreateCityChangeTextDrawing(playerid, string);

    if (GetPlayerState(playerid) != PLAYER_STATE_SPECTATING)
        TogglePlayerSpectating(playerid, true);

    new Float:xCoordinateOfThePlayer, Float:yCoordinateOfThePlayer, Float:zCoordinateOfThePlayer;
    GetPlayerPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer);

    switch (city) {
        case 0: { // Bayside
            InterpolateCameraPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, -2258.803222, 2184.239501, 52.771038, 10000);
            InterpolateCameraLookAt(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, -2262.493164, 2187.572021, 52.243118, 10000);
        }
        case 1: { // El Quebrados
            InterpolateCameraPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, -1595.401000, 2552.392822, 120.108360, 10000);
            InterpolateCameraLookAt(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, -1591.617919, 2555.284912, 118.584022, 10000);
        }
        case 2: { // Las Payasadas
            InterpolateCameraPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, -324.6516, 2773.1953, 107.0145, 10000);
            InterpolateCameraLookAt(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, 322.6516, 2773.1948, 106.5004, 10000);
        }
        case 3: { // Las Barrancas
            InterpolateCameraPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, -742.3995, 1607.9034, 65.6430, 10000);
            InterpolateCameraLookAt(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, -747.3995, 1603.9034, 65.2043, 10000);
        }
        case 4: { // Fort Carson
            InterpolateCameraPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, -359.027770, 1240.122192, 50.927696, 10000);
            InterpolateCameraLookAt(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, -354.898376, 1237.358886, 50.368968, 10000);
        }
        case 5: { // Blueberry
            InterpolateCameraPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, 290.655975, -17.310148, 42.173847, 10000);
            InterpolateCameraLookAt(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, 286.746978, -20.257480, 41.157543, 10000);
        }
        case 6: { // Montgomery
            InterpolateCameraPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, 1157.498535, 170.589553, 42.920368, 10000);
            InterpolateCameraLookAt(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, 1161.770629, 173.187072, 42.969268, 10000);
        }
        case 7: { // Palomino Creek
            InterpolateCameraPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, 2625.981201, 38.175888, 50.672615, 10000);
            InterpolateCameraLookAt(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, 2620.990234, 38.408515, 50.484638, 10000);
        }
        case 8: { // Dillimore
            InterpolateCameraPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, 654.325378, -671.391113, 39.494197, 10000);
            InterpolateCameraLookAt(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, 655.787841, -666.699035, 38.574645, 10000);
        }
        case 9: { // Angel Pine
            InterpolateCameraPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, -1989.268920, -2661.448730, 107.828201, 10000);
            InterpolateCameraLookAt(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, -1991.533935, -2657.271728, 106.271942, 10000);
        }
        case 10: { // San Fierro
            InterpolateCameraPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, -1549.668579, 803.056945, 104.227027, 10000);
            InterpolateCameraLookAt(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, -1554.581176, 803.801635, 103.668304, 10000);
        }
        case 11: { // Los Santos
            InterpolateCameraPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, 1633.207397, -1820.490600, 82.177078, 10000);
            InterpolateCameraLookAt(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, 1632.210693, -1815.595825, 81.958137, 10000);
        }
        case 12: { // Las Venturas
            InterpolateCameraPos(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, 2184.132324, 839.486450, 48.957382, 10000);
            InterpolateCameraLookAt(playerid, xCoordinateOfThePlayer, yCoordinateOfThePlayer, zCoordinateOfThePlayer, 2181.486572, 843.726989, 48.823612, 10000);
        }
    }

    SetTimerEx("FinalizeChangeOfPlayerCity", 14500, false, "i", playerid);
    return 1;
}

forward FinalizeChangeOfPlayerCity(const playerid);
public FinalizeChangeOfPlayerCity(const playerid) {
    if (GetPlayerState(playerid) == PLAYER_STATE_SPECTATING)
        TogglePlayerSpectating(playerid, false);

    if (messagesWhenSpawningInfo[playerid][seen])
        messagesWhenSpawningInfo[playerid][seen] = false;

    SetPlayerSpawn(playerid, 0.0, 0.0, 0.0, 0.0, true);
    DestroyCityChangeTextDrawing(playerid);
    return 1;
}