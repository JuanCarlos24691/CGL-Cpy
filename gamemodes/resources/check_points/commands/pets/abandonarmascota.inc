YCMD:abandonarmascota(playerid, params[], help) {
    if (accountInformation[playerid][pet] == 0)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"¡Ups! Actualmente no tienes una mascota que puedas abandonar.");
    
    accountInformation[playerid][pet] = 0;

    if (!isequal(accountInformation[playerid][petName], "Unnamed", true))
        strcpy(accountInformation[playerid][petName], "Unnamed");

    va_SendClientMessage(playerid, -1, ""COLOR_DARK_GREEN"Has abandonado a tu mascota.");
    return 1;
}