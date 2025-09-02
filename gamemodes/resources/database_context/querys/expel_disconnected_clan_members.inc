forward ExpelDisconnectedClanMembers(const uniqueIdentifierOfTheSavedClan, const Func:callBack<i>);
public ExpelDisconnectedClanMembers(const uniqueIdentifierOfTheSavedClan, const Func:callBack<i>) {
    inline const QueryInline() {
        @.callBack(cache_affected_rows());
        Indirect_Release(callBack);
    }

    if (MySQL_TQueryInline(databaseConnection, using inline QueryInline, "UPDATE accounts SET assigned_clan = 255 WHERE in_game = 0 AND assigned_clan = %d", uniqueIdentifierOfTheSavedClan))
        Indirect_Claim(callBack);
    return 1;
}