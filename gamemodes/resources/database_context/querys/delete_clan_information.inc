forward DeleteClanInformation(const universalUniqueIdentifier, const Func:callBack<i>);
public DeleteClanInformation(const universalUniqueIdentifier, const Func:callBack<i>) {
    inline const QueryInline() {
        @.callBack(cache_affected_rows());
        Indirect_Release(callBack);
    }

    if (MySQL_TQueryInline(databaseConnection, using inline QueryInline, "DELETE FROM clans WHERE UUID = %d", universalUniqueIdentifier))
        Indirect_Claim(callBack);
    return 1;
}