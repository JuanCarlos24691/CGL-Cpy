#include <YSI_Coding\y_hooks>

hook OnPlayerDisconnect(playerid, text[]) {
    if (IsValidDynamic3DTextLabel(textOnDuty[playerid])) {
        DestroyDynamic3DTextLabel(textOnDuty[playerid]);
        textOnDuty[playerid] = Text3D:INVALID_3DTEXT_ID;
    }
    return 1;
}

YCMD:onduty(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    if (accountInformation[playerid][onDuty])
        return SendClientMessage(playerid, -1, ""COLOR_RED"Actualmente ya te encuentras en servicio.");

    if (GetPlayerState(playerid) == PLAYER_STATE_SPECTATING)
        return 1;

    if (accountInformation[playerid][administrativeLevel] == 4 || accountInformation[playerid][administrativeLevel] == 5 )
        SetPlayerSkin(playerid, 294);
    else if (accountInformation[playerid][administrativeLevel] >= 1 && accountInformation[playerid][administrativeLevel] <= 3)
        SetPlayerSkin(playerid, 217);

    ResetPlayerWeapons(playerid);
    GivePlayerWeapon(playerid, WEAPON_MINIGUN, 999999);

    SetPlayerHealth(playerid, FLOAT_INFINITY);

    if (IsPlayerInAnyVehicle(playerid))
        SetVehicleHealth(GetPlayerVehicleID(playerid), FLOAT_INFINITY);

    textOnDuty[playerid] = CreateDynamic3DTextLabel("Modo God", 0xde0909FF, 0.0, 0.0, 0.3, 40.0, playerid, .testlos = 1, .streamdistance = 40.0);

    accountInformation[playerid][onDuty] = true;

    SendClientMessage(playerid, -1, ""COLOR_ROSA"**ONDUTY: (ADMIN ONDUTY) Para salir de servicio utiliza el comando /offduty.");
    return 1;
}

YCMD:offduty(playerid, params[], help) {
    if (accountInformation[playerid][administrativeLevel] < 1)
        return SendClientMessage(playerid, -1, ""COLOR_RED"Debes tener al menos un nivel administrativo de nivel 1 para poder usar este comando.");

    if (!accountInformation[playerid][onDuty])
        return SendClientMessage(playerid, -1, ""COLOR_RED"Actualmente ya te encuentras fuera de servicio.");

    if (GetPlayerState(playerid) == PLAYER_STATE_SPECTATING)
        return 1;

    SetPlayerSkin(playerid, accountInformation[playerid][skin]);
    ResetPlayerWeapons(playerid);

    SetPlayerHealth(playerid, 100.0);

    if (IsPlayerInAnyVehicle(playerid))
        SetVehicleHealth(GetPlayerVehicleID(playerid), 1000.0);

    if (IsValidDynamic3DTextLabel(textOnDuty[playerid])) {
        DestroyDynamic3DTextLabel(textOnDuty[playerid]);
        textOnDuty[playerid] = Text3D:INVALID_3DTEXT_ID;
    }

    accountInformation[playerid][onDuty] = false;

    SendClientMessage(playerid, -1, ""COLOR_ROSA"**OFFDUTY: (ADMIN OFFDUTY) Te puciste fuera de servicio.");
    return 1;
}