forward SearchBanInformation(const playerid, const IPToBeSearched[], const Func:callBack<i>);
public SearchBanInformation(const playerid, const IPToBeSearched[], const Func:callBack<i>) {
    inline const QueryInline() {
        new rows;
        cache_get_row_count(rows);

        if (rows > 0) {
            cache_get_value_name(0, "UUID", banInformation[playerid][UUID]);
            cache_get_value_name(0, "name", banInformation[playerid][name]);
            cache_get_value_name(0, "ip", banInformation[playerid][ip]);
            cache_get_value_name(0, "reason", banInformation[playerid][reason]);
            cache_get_value_name(0, "date", banInformation[playerid][date]);
        }

        @.callBack(rows);
        Indirect_Release(callBack);
    }

    if (MySQL_TQueryInline(databaseConnection, using inline QueryInline, "SELECT UUID, name, ip, reason, date FROM bans WHERE ip = '%e' LIMIT 1", IPToBeSearched))
        Indirect_Claim(callBack);
    return 1;
}