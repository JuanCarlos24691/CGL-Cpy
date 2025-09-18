forward Violate(const playerid, const destinationPlayerId);
public Violate(const playerid, const destinationPlayerId) { 
    if (violationInformation[playerid][playerPreviouslyViolated] == destinationPlayerId)
        return va_SendClientMessage(playerid, -1, ""COLOR_RED"No Puedes Violar Dos Veces Seguidas Al Mismo Jugador.");

    if (accountInformation[destinationPlayerId][condoms] > 0) {
        accountInformation[destinationPlayerId][condoms]--;

        va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Tu Intento De Violar A %s (%d) Ha Fallado.", accountInformation[destinationPlayerId][name], destinationPlayerId);
        va_SendClientMessage(destinationPlayerId, -1, ""COLOR_AQUAMARINE"%s (%d) Ha Intentado Violarte.", accountInformation[playerid][name], playerid);
        return 1;
    }

    if (accountInformation[playerid][chlamydia] || accountInformation[playerid][gonorrhea] || accountInformation[playerid][syphilis]) {
        new stringOne[124], stringTwo[124];

        if (!accountInformation[destinationPlayerId][chlamydia] && accountInformation[playerid][chlamydia]) {
            accountInformation[destinationPlayerId][chlamydia] = true;
            strcat(stringOne, "'Clamidia' ");
        }

        if (!accountInformation[destinationPlayerId][gonorrhea] && accountInformation[playerid][gonorrhea]) {
            accountInformation[destinationPlayerId][gonorrhea] = true;
            strcat(stringOne, "'Gonorrea' ");
        }

        if (!accountInformation[destinationPlayerId][syphilis] && accountInformation[playerid][syphilis]) {
            accountInformation[destinationPlayerId][syphilis] = true;
            strcat(stringOne, "'Sífilis'");
        }

        violationInformation[playerid][playerPreviouslyViolated] = destinationPlayerId;

        if (violationInformation[destinationPlayerId][lifeDecrementTimer] == INVALID_TIMER)
            violationInformation[destinationPlayerId][lifeDecrementTimer] = SetTimerEx("ProgressivelyDecrementTheLife", 1000, true, "i", destinationPlayerId);

        if (!violationInformation[destinationPlayerId][inOperation])
            violationInformation[destinationPlayerId][inOperation] = true;

        new Float:x, Float:y, Float:z;
        GetPlayerPos(destinationPlayerId, x, y, z);
        SetPlayerPos(destinationPlayerId, x, y, z + 1.5);

        va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Has Violado A %s (%d)", accountInformation[destinationPlayerId][name], destinationPlayerId);

        if (!isempty(stringOne)) {
            format(stringTwo, sizeof(stringTwo), "~r~Ha sido Infectado Con~n~%s", stringTwo);
            va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE"%s (%d) Ha sido Infectado Con %s", accountInformation[destinationPlayerId][name], destinationPlayerId, stringOne);
        } else {
            format(stringTwo, sizeof(stringTwo), "~r~%s~n~Te ha violado.", stringTwo);
            va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE"%s (%d) Ha sido Violado.", accountInformation[destinationPlayerId][name], destinationPlayerId);
        }

        RepairTextdrawString(stringTwo);
        GameTextForPlayer(destinationPlayerId, stringTwo, 1500, 4);
    } else {
        switch (random(100)) {
            case 0..4: {
                if (violationInformation[destinationPlayerId][lifeDecrementTimer] == INVALID_TIMER)
                    violationInformation[destinationPlayerId][lifeDecrementTimer] = SetTimerEx("ProgressivelyDecrementTheLife", 1000, true, "i", destinationPlayerId);

                if (!violationInformation[destinationPlayerId][inOperation])
                    violationInformation[destinationPlayerId][inOperation] = true;

                new Float:x, Float:y, Float:z;
                GetPlayerPos(destinationPlayerId, x, y, z);
                SetPlayerPos(destinationPlayerId, x, y, z + 1.5);

                va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Has Violado A %s (%d)", accountInformation[destinationPlayerId][name], destinationPlayerId);
                va_SendClientMessageToAll(-1, ""COLOR_AQUAMARINE"%s (%d) Ha sido Violado.", accountInformation[destinationPlayerId][name], destinationPlayerId);
                GameTextForPlayer(destinationPlayerId, "~r~%s~n~Te ha violado", 1500, 4, accountInformation[playerid][name]);
            }
            default: {
                va_SendClientMessage(playerid, -1, ""COLOR_AQUAMARINE"Tu Intento De Violar A %s (%d) Ha Fallado.", accountInformation[destinationPlayerId][name], destinationPlayerId);
                va_SendClientMessage(destinationPlayerId, -1, ""COLOR_AQUAMARINE"%s (%d) Ha Intentado Violarte.", accountInformation[playerid][name], playerid);
            }
        }
    }
    return 1;
}