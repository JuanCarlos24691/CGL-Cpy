YCMD:crear(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 5  para poder usar este comando.");

    if (numberOfCheckPointsCreated > MAX_CHECK_POINTS)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Has llegado a los limites de entradas disponibles para crear.");

    if (!accountInformation[playerid][inGame])
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar dentro del juego para poder crear una entrada.");

    if (IsPlayerInAnyVehicle(playerid))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar fuera de un vehículo para crear una entrada.");

    new typeCheckPoint[128];

    if (sscanf(params, "z[128]", typeCheckPoint))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Usa: /crear <Banco, Armeria, Casa, droga, hospital>");

    new Float:playerPositionX, Float:playerPositionY, Float:playerPositionZ, Float:playerAngle;
    GetPlayerPos(playerid, playerPositionX, playerPositionY, playerPositionZ);
    GetPlayerFacingAngle(playerid, playerAngle);

    if (isequal(typeCheckPoint, "banco", true))
        CreateCheckPoint(0, playerPositionX, playerPositionY, playerPositionZ, playerAngle);
    else if (isequal(typeCheckPoint, "armeria", true))
        CreateCheckPoint(1, playerPositionX, playerPositionY, playerPositionZ, playerAngle);
    else if (isequal(typeCheckPoint, "casa", true))
        CreateCheckPoint(2, playerPositionX, playerPositionY, playerPositionZ, playerAngle);
    else if (isequal(typeCheckPoint, "droga", true))
        CreateCheckPoint(3, playerPositionX, playerPositionY, playerPositionZ, playerAngle);
    else if (isequal(typeCheckPoint, "hospital", true))
        CreateCheckPoint(4, playerPositionX, playerPositionY, playerPositionZ, playerAngle);
    else
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"El tipo de entrada que ingresaste no existe, por favor, vuelve a intentarlo. ");
    return 1;
}