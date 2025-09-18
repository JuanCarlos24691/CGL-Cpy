stock RepairTextdrawString(string[], bool:space = true) {
    for (new length = strlen(string), position; position < length; position ++) {
        switch (string[position]) {
            case 'à': string[position] = 151;
            case 'á': string[position] = 152;
            case 'â': string[position] = 153;
            case 'ä': string[position] = 154;
            case 'À': string[position] = 128;
            case 'Á': string[position] = 129;
            case 'Â': string[position] = 130;
            case 'Ä': string[position] = 131;
            case 'è': string[position] = 157;
            case 'é': string[position] = 158;
            case 'ê': string[position] = 159;
            case 'ë': string[position] = 160;
            case 'È': string[position] = 134;
            case 'É': string[position] = 135;
            case 'Ê': string[position] = 136;
            case 'Ë': string[position] = 137;
            case 'ì': string[position] = 161;
            case 'í': string[position] = 162;
            case 'î': string[position] = 163;
            case 'ï': string[position] = 164;
            case 'Ì': string[position] = 138;
            case 'Í': string[position] = 139;
            case 'Î': string[position] = 140;
            case 'Ï': string[position] = 141;
            case 'ò': string[position] = 165;
            case 'ó': string[position] = 166;
            case 'ô': string[position] = 167;
            case 'ö': string[position] = 168;
            case 'Ò': string[position] = 142;
            case 'Ó': string[position] = 143;
            case 'Ô': string[position] = 144;
            case 'Ö': string[position] = 145;
            case 'ù': string[position] = 169;
            case 'ú': string[position] = 170;
            case 'û': string[position] = 171;
            case 'ü': string[position] = 172;
            case 'Ù': string[position] = 146;
            case 'Ú': string[position] = 147;
            case 'Û': string[position] = 148;
            case 'Ü': string[position] = 149;
            case 'ñ': string[position] = 174;
            case 'Ñ': string[position] = 173;
            case '¡': string[position] = 64;
            case '¿': string[position] = 175;
            case '`': string[position] = 177;
            case '&': string[position] = 38;
            case ' ': {
                if (space)
                    string[position] = '_';
            }
            default:
                string[position] = string[position];
        }
    }
}