YCMD:registrar(playerid, params[], help) {
    if (accountInformation[playerid][loggedIn])
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Tu cuenta ya se encuentra registrada.");

    Register(playerid);
    return 1;
}