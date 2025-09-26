forward Violate(const playerid, const targetPlayerId);
public Violate(const playerid, const targetPlayerId) { 
    if (violationInformation[playerid][playerPreviouslyViolated] == targetPlayerId)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No Puedes Violar Dos Veces Seguidas Al Mismo Jugador.");

    if (accountInformation[targetPlayerId][condoms] > 0) {
        accountInformation[targetPlayerId][condoms]--;

        va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Tu Intento De Violar A %s (%d) Ha Fallado.", accountInformation[targetPlayerId][name], targetPlayerId);
        va_SendClientMessage(targetPlayerId, -1, ""COLOR_AQUAMARINE"%s (%d) Ha Intentado Violarte.", accountInformation[playerid][name], playerid);
        return 1;
    }

    if (accountInformation[playerid][chlamydia] || accountInformation[playerid][gonorrhea] || accountInformation[playerid][syphilis]) {
        new stringOne[124], stringTwo[124];

        if (!accountInformation[targetPlayerId][chlamydia] && accountInformation[playerid][chlamydia]) {
            accountInformation[targetPlayerId][chlamydia] = true;
            strcat(stringOne, "'Clamidia' ");
        }

        if (!accountInformation[targetPlayerId][gonorrhea] && accountInformation[playerid][gonorrhea]) {
            accountInformation[targetPlayerId][gonorrhea] = true;
            strcat(stringOne, "'Gonorrea' ");
        }

        if (!accountInformation[targetPlayerId][syphilis] && accountInformation[playerid][syphilis]) {
            accountInformation[targetPlayerId][syphilis] = true;
            strcat(stringOne, "'Sífilis'");
        }

        violationInformation[playerid][playerPreviouslyViolated] = targetPlayerId;

        if (violationInformation[targetPlayerId][lifeDecrementTimer] == INVALID_TIMER)
            violationInformation[targetPlayerId][lifeDecrementTimer] = SetTimerEx("ProgressivelyDecrementTheLife", 1000, true, "i", targetPlayerId);

        if (!violationInformation[targetPlayerId][inOperation])
            violationInformation[targetPlayerId][inOperation] = true;

        new Float:x, Float:y, Float:z;
        GetPlayerPos(targetPlayerId, x, y, z);
        SetPlayerPos(targetPlayerId, x, y, z + 1.5);

        va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Has Violado A %s (%d)", accountInformation[targetPlayerId][name], targetPlayerId);

        if (!isempty(stringOne)) {
            format(stringTwo, sizeof(stringTwo), "~r~Ha sido Infectado Con~n~%s", stringTwo);
            va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE"%s (%d) Ha sido Infectado Con %s", accountInformation[targetPlayerId][name], targetPlayerId, stringOne);
        } else {
            format(stringTwo, sizeof(stringTwo), "~r~%s~n~Te ha violado.", stringTwo);
            va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE"%s (%d) Ha sido Violado.", accountInformation[targetPlayerId][name], targetPlayerId);
        }

        RepairTextdrawString(stringTwo);
        GameTextForPlayer(targetPlayerId, stringTwo, 1500, 4);
    } else {
        switch (random(100)) {
            case 0..4: {
                if (violationInformation[targetPlayerId][lifeDecrementTimer] == INVALID_TIMER)
                    violationInformation[targetPlayerId][lifeDecrementTimer] = SetTimerEx("ProgressivelyDecrementTheLife", 1000, true, "i", targetPlayerId);

                if (!violationInformation[targetPlayerId][inOperation])
                    violationInformation[targetPlayerId][inOperation] = true;

                new Float:x, Float:y, Float:z;
                GetPlayerPos(targetPlayerId, x, y, z);
                SetPlayerPos(targetPlayerId, x, y, z + 1.5);

                va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Has Violado A %s (%d)", accountInformation[targetPlayerId][name], targetPlayerId);
                va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE"%s (%d) Ha sido Violado.", accountInformation[targetPlayerId][name], targetPlayerId);
                GameTextForPlayer(targetPlayerId, "~r~%s~n~Te ha violado", 1500, 4, accountInformation[playerid][name]);
            }
            default: {
                va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Tu Intento De Violar A %s (%d) Ha Fallado.", accountInformation[targetPlayerId][name], targetPlayerId);
                va_SendClientMessage(targetPlayerId, -1, ""COLOR_AQUAMARINE"%s (%d) Ha Intentado Violarte.", accountInformation[playerid][name], playerid);
            }
        }
    }
    return 1;
}