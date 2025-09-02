forward VerifyPassword(const passwordEntered[], const hashDestination[], const Func:callBack<>);
public VerifyPassword(const passwordEntered[], const hashDestination[], const Func:callBack<>) {
    Indirect_Claim(callBack);
    bcrypt_check(passwordEntered, hashDestination, "Indirect_FromCallback", "ii", _:callBack, true);
    return 1;
}