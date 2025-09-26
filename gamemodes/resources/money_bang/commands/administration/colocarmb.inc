YCMD:colocarmb(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 5)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Tu nievel administrativo no es suficiente para ejecutar este comando.");

    RestoreMoneyBangInformation();
    CreateMoneyBang();

    va_SendClientMessage(playerid, -1, ""COLOR_ROSA"**GOTOMB: %s (%i) (ADMIN GOTOMB) Has restablecido la bolsa de dinero.", accountInformation[playerid][name], playerid);
    return 1;
}