forward EncryptPassword(const passwordEntered[], const cost, const Func:callBack<>);
public EncryptPassword(const passwordEntered[], const cost, const Func:callBack<>) {
    Indirect_Claim(callBack);
    bcrypt_hash(passwordEntered, cost, "Indirect_FromCallback", "ii", _:callBack, true);
    return 1;
}