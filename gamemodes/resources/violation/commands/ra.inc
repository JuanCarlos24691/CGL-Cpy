YCMD:ra(playerid, params[], help) {
    if (gettime() - violationInformation[playerid][waitingTime] < 15)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Por Favor, Espere Antes De Violar A Alguien De Nuevo.");

    violationInformation[playerid][waitingTime] = gettime();

    foreach (new i : Player) {
        new Float:x, Float:y, Float:z;
        GetPlayerPos(i, x, y, z);

        if (IsPlayerInRangeOfPoint(playerid, 1.2, x, y, z) && i != playerid) {
            Violate(playerid, i);
            return 1;
        }
    }

    va_SendClientMessage(playerid, -1, ""COLOR_RED"No hay ningun jugador serca para violar.");
    return 1;
}