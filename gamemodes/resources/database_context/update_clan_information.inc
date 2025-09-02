#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    ProcessClanInformation();
    SetTimer("UpdateClanInformation", 500, true);
    return 1;
}

forward UpdateClanInformation();
public UpdateClanInformation() {
    for (new i = 0; i < numberOfClansCreated; i++) {
        if (clanInformation[i][uniqueClanIdentifier] != clanOld[i][uniqueClanIdentifier] || strcmp(clanInformation[i][leader], clanOld[i][leader], true) || strcmp(clanInformation[i][subLeader], clanOld[i][subLeader], true) || strcmp(clanInformation[i][name], clanOld[i][name], true) || strcmp(clanInformation[i][tag], clanOld[i][tag], true) || strcmp(clanInformation[i][argb], clanOld[i][argb], true) || strcmp(clanInformation[i][hexadecimal], clanOld[i][hexadecimal], true) || strcmp(clanInformation[i][level], clanOld[i][level], true) || strcmp(clanInformation[i][members], clanOld[i][members], true)) {
            inline const ISaveClanInformation(const result) {
                if (result == 0)
                    return printf("[CLANES] Se ha producido un error al intentar guardar el clan %d.", clanInformation[i][UUID]);

                printf("[CLANES] Se ha guardado el clan %d.", clanInformation[i][UUID]);
                clanOld[i] = clanInformation[i];
            }

            SaveClanInformation(i, clanInformation[i][UUID], using inline ISaveClanInformation);
        }
    }
    return 1;
}