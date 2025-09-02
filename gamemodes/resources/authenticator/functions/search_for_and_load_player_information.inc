forward SearchForAndUploadAccountInfo(const playerid, const nameOfTheAccountToSearchFor[]);
public SearchForAndUploadAccountInfo(const playerid, const nameOfTheAccountToSearchFor[]) {
    inline const ILoadAccountInformation(const result) {
        if (result == 0) {
            va_SendClientMessage(playerid, -1, "Se ha producido un error al intentar cargar la información de tu cuenta, por favor, vuelve a ingresar.");
            return Kick(playerid);
        }

        if (!accountInformation[playerid][loggedIn])
            accountInformation[playerid][loggedIn] = true;

        accountInformationOld[playerid] = accountInformation[playerid];
    }

    inline const ISearchAccountInformation(const result) {
        if (result == 0 || !accountInformation[playerid][exists]) {
            va_SendClientMessage(playerid, -1, "Se ha producido un error al intentar cargar la información de tu cuenta, por favor, vuelve a ingresar.");
            return Kick(playerid);
        }

        LoadAccountInformation(playerid, accountInformation[playerid][UUID], using inline ILoadAccountInformation);
    }

    SearchAccountInformation(playerid, nameOfTheAccountToSearchFor, using inline ISearchAccountInformation);
    return 1;
}