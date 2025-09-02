forward LoadClansInformation(const Func:callBack<i>);
public LoadClansInformation(const Func:callBack<i>) {
    inline const QueryInline() {
        for (new i = 0; i < cache_num_rows(); i++) {
            cache_get_value_index_int(i, 0, clanInformation[i][UUID]);
            cache_get_value_index_int(i, 1, clanInformation[i][uniqueClanIdentifier]);
            cache_get_value_index(i, 2, clanInformation[i][leader]);
            cache_get_value_index(i, 3, clanInformation[i][subLeader]);
            cache_get_value_index(i, 4, clanInformation[i][name]);
            cache_get_value_index(i, 5, clanInformation[i][tag]);
            cache_get_value_index_int(i, 6, clanInformation[i][argb]);
            cache_get_value_index(i, 7, clanInformation[i][hexadecimal]);
            cache_get_value_index(i, 8, clanInformation[i][level]);
            cache_get_value_index(i, 9, clanInformation[i][members]);
        }

        for (new i = 0; i < cache_num_rows(); i++)
            clanOld[i] = clanInformation[i];

        if (numberOfClansCreated != cache_num_rows())
            numberOfClansCreated = cache_num_rows();

        @.callBack(cache_num_rows());
        Indirect_Release(callBack);
    }

    if (MySQL_TQueryInline(databaseConnection, using inline QueryInline, "SELECT UUID, unique_clan_identifier, leader, sub_leader, name, tag, argb, hexadecimal, level, members FROM `clans`"))
        Indirect_Claim(callBack);
    return 1;
}