forward RestoreDrugUseInformation(const playerid, const bool:cleaningDrugsUsed);
public RestoreDrugUseInformation(const playerid, const bool:cleaningDrugsUsed) {
    if (drugUseInformation[playerid][inOperation])
        drugUseInformation[playerid][inOperation] = false;

    if (drugUseInformation[playerid][lifePending] != 0.0)
        drugUseInformation[playerid][lifePending] = 0.0;

    if (drugUseInformation[playerid][gramsOfDrugsConsumed] != 0)
        drugUseInformation[playerid][gramsOfDrugsConsumed] = 0;

    if (cleaningDrugsUsed && drugUseInformation[playerid][lifeRegenTimer] != INVALID_TIMER) {
        KillTimer(drugUseInformation[playerid][lifeRegenTimer]);
        drugUseInformation[playerid][lifeRegenTimer] = INVALID_TIMER;
    }
    return 1;
}