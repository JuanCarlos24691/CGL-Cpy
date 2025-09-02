forward RestoreBanInformation(const playerid);
public RestoreBanInformation(const playerid) {
    if (banInformation[playerid][UUID] != 0)
        banInformation[playerid][UUID] = 0;

    if (banInformation[playerid][name] != EOS)
        banInformation[playerid][name] = EOS;

    if (banInformation[playerid][ip] != EOS)
        banInformation[playerid][ip] = EOS;

    if (banInformation[playerid][reason] != EOS)
        banInformation[playerid][reason] = EOS;

    if (banInformation[playerid][date] != EOS)
        banInformation[playerid][date] = EOS;
    return 1;
}