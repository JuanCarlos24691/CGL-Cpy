forward IsAlphaNumeric(const string[]);
public IsAlphaNumeric(const string[]) {
    if (isempty(string))
        return true;

    for (new i = 0; i < strlen(string); i++) {
        new c = strgetc(string, i);

        if (!(c >= '0' && c <= '9') && !(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z') && c != 'á' && c != 'é' && c != 'í' && c != 'ó' && c != 'ú' && c != 'Á' && c != 'É' && c != 'Í' && c != 'Ó' && c != 'Ú' && c != 'ñ' && c != 'Ñ')
            return false;
    }
    return true;
}