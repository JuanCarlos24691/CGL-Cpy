forward UpdateStatisticsInformation(const playerid);
public UpdateStatisticsInformation(const playerid) {
    if (!accountInformation[playerid][inGame])
        return RestoreStatisticsInformation(playerid);

    if (accountInformation[playerid][assignedClan] != NO_TEAM)
        statisticsInformation[playerid][uniqueClanIdentifier] = SearchClanIndex(accountInformation[playerid][assignedClan]);

    // -

    if (accountInformation[playerid][assignedClan] != NO_TEAM && !isequal(clanInformation[statisticsInformation[playerid][uniqueClanIdentifier]][tag], "No tag", true)) {
        strcpy(statisticsInformation[playerid][name], "~w~");
        strcpy(statisticsInformation[playerid][name], "(");
        strcat(statisticsInformation[playerid][name], clanInformation[statisticsInformation[playerid][uniqueClanIdentifier]][tag]);
        strcat(statisticsInformation[playerid][name], ")");
        strcat(statisticsInformation[playerid][name], " ");
        strcat(statisticsInformation[playerid][name], accountInformation[playerid][name]);
    } else {
        strcpy(statisticsInformation[playerid][name], "~w~");
        strcpy(statisticsInformation[playerid][name], accountInformation[playerid][name]);
    }

    if (strlen(statisticsInformation[playerid][name]) > 22)
        format(statisticsInformation[playerid][name], 23, "%s..", ret_strmid(statisticsInformation[playerid][name], 0, 22));

    RepairTextdrawString(statisticsInformation[playerid][name]);

    // -

    format(statisticsInformation[playerid][deaths], 25, "~r~MUERTES: ~w~%d", accountInformation[playerid][deaths]);

    if (strlen(statisticsInformation[playerid][deaths]) > 25)
        format(statisticsInformation[playerid][deaths], 26, "%s..", ret_strmid(statisticsInformation[playerid][deaths], 0, 25));

    RepairTextdrawString(statisticsInformation[playerid][deaths]);

    // -

    format(statisticsInformation[playerid][killings], 25, "~g~ASESINATOS: ~w~%d", accountInformation[playerid][killings]);

    if (strlen(statisticsInformation[playerid][killings]) > 25)
        format(statisticsInformation[playerid][killings], 26, "%s..", ret_strmid(statisticsInformation[playerid][killings], 0, 25));

    RepairTextdrawString(statisticsInformation[playerid][killings]);

    // -

    format(statisticsInformation[playerid][level], 28, "~b~~h~SCORE: ~w~%d", accountInformation[playerid][level]);

    if (strlen(statisticsInformation[playerid][level]) > 28)
        format(statisticsInformation[playerid][level], 29, "%s..", ret_strmid(statisticsInformation[playerid][level], 0, 28));

    RepairTextdrawString(statisticsInformation[playerid][level]);

    // -

    switch (accountInformation[playerid][level]) {
        case 0..199: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~HORRIBLE");
        case 200..449: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~MANCO");
        case 450..649: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~NOOB");
        case 650..849: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~APRENDIZ");
        case 850..1049: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~BASICO");
        case 1050..1299: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~AVANZADO");
        case 1300..1799: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~INTERMEDIO");
        case 1800..2049: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~GASTER");
        case 2050..2299: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~SICARIO");
        case 2300..2549: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~PROFECCIONAL");
        case 2550..2799: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~CAPO");
        case 2800..3099: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~SANGUINARIO");
        case 3100..3399: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~ASPIRANTE PRO");
        case 3400..3699: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~PRO");
        case 3700..3999: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~PRO GAMER");
        case 4000..4299: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~SUPER PRO");
        case 4300..4599: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~IMPARABLE");
        case 4600..4899: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~PRO MATADOR");
        case 4900..5199: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~SUPER MATADOR");
        case 5200..5499: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~SUPER GAMER PRO");
        case 5500..5799: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~INMORTAL");
        case 5800..6099: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~PSICOPATA");
        case 6100..6499: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~RAMBO");
        case 6500..7299: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~HITLER");
        case 7300..8099: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~LEYENDA");
        case 8100: strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~DIOS");
        default:
            strcpy(statisticsInformation[playerid][range], "~p~RANGO: ~w~DIOS");
    }

    if (strlen(statisticsInformation[playerid][range]) > 25)
        format(statisticsInformation[playerid][range], 26, "%s..", ret_strmid(statisticsInformation[playerid][range], 0, 25));

    RepairTextdrawString(statisticsInformation[playerid][range]);

    // -

    if (accountInformation[playerid][assignedClan] != NO_TEAM) {
        statisticsInformation[playerid][clanColor] = clanInformation[statisticsInformation[playerid][uniqueClanIdentifier]][argb];
        strcpy(statisticsInformation[playerid][clanName], clanInformation[statisticsInformation[playerid][uniqueClanIdentifier]][name]);
    } else {
        statisticsInformation[playerid][clanColor] = -1;
        strcpy(statisticsInformation[playerid][clanName], "Sin clan");
    }

    if (strlen(statisticsInformation[playerid][clanName]) > 17)
        format(statisticsInformation[playerid][clanName], 20, "%s..", ret_strmid(statisticsInformation[playerid][clanName], 0, 17));

    RepairTextdrawString(statisticsInformation[playerid][clanName]);

    // -

    CreateStatisticsTextDrawings(playerid, statisticsInformation[playerid][name], statisticsInformation[playerid][deaths], statisticsInformation[playerid][killings], statisticsInformation[playerid][level], statisticsInformation[playerid][range], statisticsInformation[playerid][clanName], statisticsInformation[playerid][clanColor]);
    return 1;
}