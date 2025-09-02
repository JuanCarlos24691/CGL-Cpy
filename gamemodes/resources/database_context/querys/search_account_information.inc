forward SearchAccountInformation(const playerid, const nameOfTheAccountToBeSearched[], const Func:callBack<i>);
public SearchAccountInformation(const playerid, const nameOfTheAccountToBeSearched[], const Func:callBack<i>) {
    inline const IMySQL_TQueryInline() {
        new rows;
        cache_get_row_count(rows);

        if (rows > 0) {
            cache_get_value_name_int(0, "UUID", accountInformation[playerid][UUID]);
            cache_get_value_name(0, "player_name", accountInformation[playerid][name]);
            cache_get_value_name(0, "password", accountInformation[playerid][password]);
            cache_get_value_name_int(0, "skin", accountInformation[playerid][skin]);
            cache_get_value_name(0, "ban_time", accountInformation[playerid][banTime]);
            cache_get_value_name(0, "ban_reason", accountInformation[playerid][banReason]);
            cache_get_value_name(0, "ban_date", accountInformation[playerid][banDate]);

            if (!accountInformation[playerid][exists])
                accountInformation[playerid][exists] = true;
        }
        
        @.callBack(rows);
        Indirect_Release(callBack);
    }

    if (MySQL_TQueryInline(databaseConnection, using inline IMySQL_TQueryInline, "SELECT UUID, player_name, password, skin, ban_time, ban_reason, ban_date FROM accounts WHERE player_name = '%e' LIMIT 1", nameOfTheAccountToBeSearched))
        Indirect_Claim(callBack);
    return 1;
}