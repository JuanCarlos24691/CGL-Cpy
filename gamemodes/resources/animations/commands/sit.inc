YCMD:sit(playerid, params[], help) {
    if (GetPlayerState(playerid) != PLAYER_STATE_ONFOOT)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Debes estar de pie para poder crear usar esta animación.");

    new animationStyle;

    if (sscanf(params, "i", animationStyle))
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Usa: /sit [1-10]");

    if (animationStyle < 1 || animationStyle > 10)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"Estilo de sit inválido. Usa un número entre 1 y 10.");

    switch (animationStyle - 1) {
        case 0: ApplyAnimation(playerid, "PED", "SEAT_down", 3.0, false, false, false, true, 0, SYNC_NONE);
        case 1: ApplyAnimation(playerid, "SUNBATHE", "ParkSit_M_in", 3.0, false, false, false, true, 0, SYNC_NONE);
        case 2: ApplyAnimation(playerid, "SUNBATHE", "Lay_Bac_in", 3.0, false, false, false, true, 0, SYNC_NONE);
        case 3: ApplyAnimation(playerid, "SUNBATHE", "SitnWait_in_W", 3.0, false, false, false, true, 0, SYNC_NONE);
        case 4: ApplyAnimation(playerid, "Attractors", "Stepsit_in", 3.0, false, false, false, true, 0, SYNC_NONE);
        case 5: ApplyAnimation(playerid, "CRACK", "crckidle2", 3.0, false, true, true, true, 0, SYNC_NONE);
        case 6: ApplyAnimation(playerid, "PED", "BIKE_fall_off", 3.0, false, true, true, true, 0, SYNC_NONE);
        case 7: ApplyAnimation(playerid, "CRACK", "crckidle2", 3.0, false, true, true, true, 0, SYNC_NONE);
        case 8: ApplyAnimation(playerid, "DAM_JUMP", "DAM_Dive_Loop", 3.0, false, true, true, true, 0, SYNC_NONE);
        case 9: ApplyAnimation(playerid, "CRACK", "crckidle4", 3.0, false, true, true, true, 0, SYNC_NONE);
    }
    return 1;
}