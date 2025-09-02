forward ProgressivelyIncreaseTheLife(const playerid);
public ProgressivelyIncreaseTheLife(const playerid) {
    new Float:health, Float:increase = 2.0;
    GetPlayerHealth(playerid, health);

    if (drugUseInformation[playerid][lifePending] <= increase) {
        if (health + drugUseInformation[playerid][lifePending] > 100.0)
            drugUseInformation[playerid][lifePending] = 100.0 - health;

        SetPlayerHealth(playerid, health + drugUseInformation[playerid][lifePending]);
        RestoreDrugUseInformation(playerid, true);

        va_SendClientMessage(playerid, -1, ""COLOR_RED"Drogas Off");
        GameTextForPlayer(playerid, "~r~Drogas Off", 3000, 4);
        return 1;
    }

    if (health + increase > 100.0)
        increase = 100.0 - health;

    SetPlayerHealth(playerid, health + increase);
    drugUseInformation[playerid][lifePending] -= 2.0;
    return 1;
}