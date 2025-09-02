#include <YSI_Coding\y_hooks>

hook OnGameModeInit() {
    for (new i = 0; i < MAX_PLAYERS; i++) {
        for (new b = 0; b < MAX_PLAYER_VEHICLES; b++)
            playerVehicleCreationInfo[i][vehicles][b] = INVALID_VEHICLE_ID;

        playerVehicleCreationInfo[i][primaryColor] = -1;
        playerVehicleCreationInfo[i][secondaryColor] = -1;
    }

    vehicleCreationInformation[0][idOfVehicle]    = 400;
    vehicleCreationInformation[0][vehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[0][vehicleName], "landstal");

    vehicleCreationInformation[1][idOfVehicle]    = 401;
    vehicleCreationInformation[1][vehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[1][vehicleName], "bravura");

    vehicleCreationInformation[2][idOfVehicle]    = 402;
    vehicleCreationInformation[2][vehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[2][vehicleName], "buffalo");

    vehicleCreationInformation[3][idOfVehicle]    = 403;
    vehicleCreationInformation[3][vehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[3][vehicleName], "linerun");

    vehicleCreationInformation[4][idOfVehicle]    = 404;
    vehicleCreationInformation[4][vehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[4][vehicleName], "peren");

    vehicleCreationInformation[5][idOfVehicle]    = 405;
    vehicleCreationInformation[5][vehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[5][vehicleName], "sentinel");

    vehicleCreationInformation[6][idOfVehicle]    = 406;
    vehicleCreationInformation[6][vehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[6][vehicleName], "dumper");

    vehicleCreationInformation[7][idOfVehicle]    = 407;
    vehicleCreationInformation[7][vehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[7][vehicleName], "firetruk");

    vehicleCreationInformation[8][idOfVehicle]    = 408;
    vehicleCreationInformation[8][vehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[8][vehicleName], "trash");

    vehicleCreationInformation[9][idOfVehicle]    = 409;
    vehicleCreationInformation[9][vehiclePrice]   = 15000;
    strcpy(vehicleCreationInformation[9][vehicleName], "stretch");

    vehicleCreationInformation[10][idOfVehicle]   = 410;
    vehicleCreationInformation[10][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[10][vehicleName], "manana");

    vehicleCreationInformation[11][idOfVehicle]   = 411;
    vehicleCreationInformation[11][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[11][vehicleName], "infernus");

    vehicleCreationInformation[12][idOfVehicle]   = 412;
    vehicleCreationInformation[12][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[12][vehicleName], "voodoo");

    vehicleCreationInformation[13][idOfVehicle]   = 413;
    vehicleCreationInformation[13][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[13][vehicleName], "pony");

    vehicleCreationInformation[14][idOfVehicle]   = 414;
    vehicleCreationInformation[14][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[14][vehicleName], "mule");

    vehicleCreationInformation[15][idOfVehicle]   = 415;
    vehicleCreationInformation[15][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[15][vehicleName], "cheetah");

    vehicleCreationInformation[16][idOfVehicle]   = 416;
    vehicleCreationInformation[16][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[16][vehicleName], "ambulan");

    vehicleCreationInformation[17][idOfVehicle]   = 417;
    vehicleCreationInformation[17][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[17][vehicleName], "leviathn");

    vehicleCreationInformation[18][idOfVehicle]   = 418;
    vehicleCreationInformation[18][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[18][vehicleName], "moonbeam");

    vehicleCreationInformation[19][idOfVehicle]   = 419;
    vehicleCreationInformation[19][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[19][vehicleName], "esperant");

    vehicleCreationInformation[20][idOfVehicle]   = 420;
    vehicleCreationInformation[20][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[20][vehicleName], "taxi");

    vehicleCreationInformation[21][idOfVehicle]   = 421;
    vehicleCreationInformation[21][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[21][vehicleName], "washing");

    vehicleCreationInformation[22][idOfVehicle]   = 422;
    vehicleCreationInformation[22][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[22][vehicleName], "bobcat");

    vehicleCreationInformation[23][idOfVehicle]   = 423;
    vehicleCreationInformation[23][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[23][vehicleName], "mrwhoop");

    vehicleCreationInformation[24][idOfVehicle]   = 424;
    vehicleCreationInformation[24][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[24][vehicleName], "bfinject");

    vehicleCreationInformation[25][idOfVehicle]   = 425;
    vehicleCreationInformation[25][vehiclePrice]  = 1000000;
    strcpy(vehicleCreationInformation[25][vehicleName], "hunter");

    vehicleCreationInformation[26][idOfVehicle]   = 426;
    vehicleCreationInformation[26][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[26][vehicleName], "premier");

    vehicleCreationInformation[27][idOfVehicle]   = 427;
    vehicleCreationInformation[27][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[27][vehicleName], "enforcer");

    vehicleCreationInformation[28][idOfVehicle]   = 428;
    vehicleCreationInformation[28][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[28][vehicleName], "securica");

    vehicleCreationInformation[29][idOfVehicle]   = 429;
    vehicleCreationInformation[29][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[29][vehicleName], "banshee");

    vehicleCreationInformation[30][idOfVehicle]   = 430;
    vehicleCreationInformation[30][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[30][vehicleName], "predator");

    vehicleCreationInformation[31][idOfVehicle]   = 431;
    vehicleCreationInformation[31][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[31][vehicleName], "bus");

    vehicleCreationInformation[32][idOfVehicle]   = 432;
    vehicleCreationInformation[32][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[32][vehicleName], "rhino");

    vehicleCreationInformation[33][idOfVehicle]   = 433;
    vehicleCreationInformation[33][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[33][vehicleName], "barracks");

    vehicleCreationInformation[34][idOfVehicle]   = 434;
    vehicleCreationInformation[34][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[34][vehicleName], "hotknife");

    vehicleCreationInformation[35][idOfVehicle]   = 435;
    vehicleCreationInformation[35][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[35][vehicleName], "artict1");

    vehicleCreationInformation[36][idOfVehicle]   = 436;
    vehicleCreationInformation[36][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[36][vehicleName], "previon");

    vehicleCreationInformation[37][idOfVehicle]   = 437;
    vehicleCreationInformation[37][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[37][vehicleName], "coach");

    vehicleCreationInformation[38][idOfVehicle]   = 438;
    vehicleCreationInformation[38][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[38][vehicleName], "cabbie");

    vehicleCreationInformation[39][idOfVehicle]   = 439;
    vehicleCreationInformation[39][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[39][vehicleName], "stallion");

    vehicleCreationInformation[40][idOfVehicle]   = 440;
    vehicleCreationInformation[40][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[40][vehicleName], "rumpo");

    vehicleCreationInformation[41][idOfVehicle]   = 441;
    vehicleCreationInformation[41][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[41][vehicleName], "rcbandit");

    vehicleCreationInformation[42][idOfVehicle]   = 442;
    vehicleCreationInformation[42][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[42][vehicleName], "romero");

    vehicleCreationInformation[43][idOfVehicle]   = 443;
    vehicleCreationInformation[43][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[43][vehicleName], "packer");

    vehicleCreationInformation[44][idOfVehicle]   = 444;
    vehicleCreationInformation[44][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[44][vehicleName], "monster");

    vehicleCreationInformation[45][idOfVehicle]   = 445;
    vehicleCreationInformation[45][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[45][vehicleName], "admiral");

    vehicleCreationInformation[46][idOfVehicle]   = 446;
    vehicleCreationInformation[46][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[46][vehicleName], "squalo");

    vehicleCreationInformation[47][idOfVehicle]   = 447;
    vehicleCreationInformation[47][vehiclePrice]  = 1000000;
    strcpy(vehicleCreationInformation[47][vehicleName], "seaspar");

    vehicleCreationInformation[48][idOfVehicle]   = 448;
    vehicleCreationInformation[48][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[48][vehicleName], "pizzaboy");

    vehicleCreationInformation[49][idOfVehicle]   = 449;
    vehicleCreationInformation[49][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[49][vehicleName], "tram");

    vehicleCreationInformation[50][idOfVehicle]   = 450;
    vehicleCreationInformation[50][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[50][vehicleName], "artict2");

    vehicleCreationInformation[51][idOfVehicle]   = 451;
    vehicleCreationInformation[51][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[51][vehicleName], "turismo");

    vehicleCreationInformation[52][idOfVehicle]   = 452;
    vehicleCreationInformation[52][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[52][vehicleName], "speeder");

    vehicleCreationInformation[53][idOfVehicle]   = 453;
    vehicleCreationInformation[53][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[53][vehicleName], "reefer");

    vehicleCreationInformation[54][idOfVehicle]   = 454;
    vehicleCreationInformation[54][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[54][vehicleName], "tropic");

    vehicleCreationInformation[55][idOfVehicle]   = 455;
    vehicleCreationInformation[55][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[55][vehicleName], "flatbed");

    vehicleCreationInformation[56][idOfVehicle]   = 456;
    vehicleCreationInformation[56][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[56][vehicleName], "yankee");

    vehicleCreationInformation[57][idOfVehicle]   = 457;
    vehicleCreationInformation[57][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[57][vehicleName], "caddy");

    vehicleCreationInformation[58][idOfVehicle]   = 458;
    vehicleCreationInformation[58][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[58][vehicleName], "solair");

    vehicleCreationInformation[59][idOfVehicle]   = 459;
    vehicleCreationInformation[59][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[59][vehicleName], "topfun");

    vehicleCreationInformation[60][idOfVehicle]   = 460;
    vehicleCreationInformation[60][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[60][vehicleName], "skimmer");

    vehicleCreationInformation[61][idOfVehicle]   = 461;
    vehicleCreationInformation[61][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[61][vehicleName], "pcj600");

    vehicleCreationInformation[62][idOfVehicle]   = 462;
    vehicleCreationInformation[62][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[62][vehicleName], "faggio");

    vehicleCreationInformation[63][idOfVehicle]   = 463;
    vehicleCreationInformation[63][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[63][vehicleName], "freeway");

    vehicleCreationInformation[64][idOfVehicle]   = 464;
    vehicleCreationInformation[64][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[64][vehicleName], "rcbaron");

    vehicleCreationInformation[65][idOfVehicle]   = 465;
    vehicleCreationInformation[65][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[65][vehicleName], "rcraider");

    vehicleCreationInformation[66][idOfVehicle]   = 466;
    vehicleCreationInformation[66][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[66][vehicleName], "glendale");

    vehicleCreationInformation[67][idOfVehicle]   = 467;
    vehicleCreationInformation[67][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[67][vehicleName], "oceanic");

    vehicleCreationInformation[68][idOfVehicle]   = 468;
    vehicleCreationInformation[68][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[68][vehicleName], "sanchez");

    vehicleCreationInformation[69][idOfVehicle]   = 469;
    vehicleCreationInformation[69][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[69][vehicleName], "sparrow");

    vehicleCreationInformation[70][idOfVehicle]   = 470;
    vehicleCreationInformation[70][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[70][vehicleName], "patriot");

    vehicleCreationInformation[71][idOfVehicle]   = 471;
    vehicleCreationInformation[71][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[71][vehicleName], "quad");

    vehicleCreationInformation[72][idOfVehicle]   = 472;
    vehicleCreationInformation[72][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[72][vehicleName], "coastg");

    vehicleCreationInformation[73][idOfVehicle]   = 473;
    vehicleCreationInformation[73][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[73][vehicleName], "dinghy");

    vehicleCreationInformation[74][idOfVehicle]   = 474;
    vehicleCreationInformation[74][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[74][vehicleName], "hermes");

    vehicleCreationInformation[75][idOfVehicle]   = 475;
    vehicleCreationInformation[75][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[75][vehicleName], "sabre");

    vehicleCreationInformation[76][idOfVehicle]   = 476;
    vehicleCreationInformation[76][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[76][vehicleName], "rustler");

    vehicleCreationInformation[77][idOfVehicle]   = 477;
    vehicleCreationInformation[77][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[77][vehicleName], "zr350");

    vehicleCreationInformation[78][idOfVehicle]   = 478;
    vehicleCreationInformation[78][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[78][vehicleName], "walton");

    vehicleCreationInformation[79][idOfVehicle]   = 479;
    vehicleCreationInformation[79][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[79][vehicleName], "regina");

    vehicleCreationInformation[80][idOfVehicle]   = 480;
    vehicleCreationInformation[80][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[80][vehicleName], "comet");

    vehicleCreationInformation[81][idOfVehicle]   = 481;
    vehicleCreationInformation[81][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[81][vehicleName], "bmx");

    vehicleCreationInformation[82][idOfVehicle]   = 482;
    vehicleCreationInformation[82][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[82][vehicleName], "burrito");

    vehicleCreationInformation[83][idOfVehicle]   = 483;
    vehicleCreationInformation[83][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[83][vehicleName], "camper");

    vehicleCreationInformation[84][idOfVehicle]   = 484;
    vehicleCreationInformation[84][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[84][vehicleName], "marquis");

    vehicleCreationInformation[85][idOfVehicle]   = 485;
    vehicleCreationInformation[85][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[85][vehicleName], "baggage");

    vehicleCreationInformation[86][idOfVehicle]   = 486;
    vehicleCreationInformation[86][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[86][vehicleName], "dozer");

    vehicleCreationInformation[87][idOfVehicle]   = 487;
    vehicleCreationInformation[87][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[87][vehicleName], "maverick");

    vehicleCreationInformation[88][idOfVehicle]   = 488;
    vehicleCreationInformation[88][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[88][vehicleName], "newschop");

    vehicleCreationInformation[89][idOfVehicle]   = 489;
    vehicleCreationInformation[89][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[89][vehicleName], "rancher");

    vehicleCreationInformation[90][idOfVehicle]   = 490;
    vehicleCreationInformation[90][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[90][vehicleName], "fbiranch");

    vehicleCreationInformation[91][idOfVehicle]   = 491;
    vehicleCreationInformation[91][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[91][vehicleName], "virgo");

    vehicleCreationInformation[92][idOfVehicle]   = 492;
    vehicleCreationInformation[92][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[92][vehicleName], "greenwoo");

    vehicleCreationInformation[93][idOfVehicle]   = 493;
    vehicleCreationInformation[93][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[93][vehicleName], "jetmax");

    vehicleCreationInformation[94][idOfVehicle]   = 494;
    vehicleCreationInformation[94][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[94][vehicleName], "hotring");

    vehicleCreationInformation[95][idOfVehicle]   = 495;
    vehicleCreationInformation[95][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[95][vehicleName], "sandking");

    vehicleCreationInformation[96][idOfVehicle]   = 496;
    vehicleCreationInformation[96][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[96][vehicleName], "blistac");

    vehicleCreationInformation[97][idOfVehicle]   = 497;
    vehicleCreationInformation[97][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[97][vehicleName], "polmav");

    vehicleCreationInformation[98][idOfVehicle]   = 498;
    vehicleCreationInformation[98][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[98][vehicleName], "boxville");

    vehicleCreationInformation[99][idOfVehicle]   = 499;
    vehicleCreationInformation[99][vehiclePrice]  = 15000;
    strcpy(vehicleCreationInformation[99][vehicleName], "benson");

    vehicleCreationInformation[100][idOfVehicle]  = 500;
    vehicleCreationInformation[100][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[100][vehicleName], "mesa");

    vehicleCreationInformation[101][idOfVehicle]  = 501;
    vehicleCreationInformation[101][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[101][vehicleName], "rcgoblin");

    vehicleCreationInformation[102][idOfVehicle]  = 502;
    vehicleCreationInformation[102][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[102][vehicleName], "hotrina");

    vehicleCreationInformation[103][idOfVehicle]  = 503;
    vehicleCreationInformation[103][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[103][vehicleName], "hotrinb");

    vehicleCreationInformation[104][idOfVehicle]  = 504;
    vehicleCreationInformation[104][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[104][vehicleName], "bloodra");

    vehicleCreationInformation[105][idOfVehicle]  = 505;
    vehicleCreationInformation[105][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[105][vehicleName], "rnchlure");

    vehicleCreationInformation[106][idOfVehicle]  = 506;
    vehicleCreationInformation[106][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[106][vehicleName], "supergt");

    vehicleCreationInformation[107][idOfVehicle]  = 507;
    vehicleCreationInformation[107][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[107][vehicleName], "elegant");

    vehicleCreationInformation[108][idOfVehicle]  = 508;
    vehicleCreationInformation[108][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[108][vehicleName], "journey");

    vehicleCreationInformation[109][idOfVehicle]  = 509;
    vehicleCreationInformation[109][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[109][vehicleName], "bike");

    vehicleCreationInformation[110][idOfVehicle]  = 510;
    vehicleCreationInformation[110][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[110][vehicleName], "mtbike");

    vehicleCreationInformation[111][idOfVehicle]  = 511;
    vehicleCreationInformation[111][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[111][vehicleName], "beagle");

    vehicleCreationInformation[112][idOfVehicle]  = 512;
    vehicleCreationInformation[112][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[112][vehicleName], "cropdust");

    vehicleCreationInformation[113][idOfVehicle]  = 513;
    vehicleCreationInformation[113][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[113][vehicleName], "stunt");

    vehicleCreationInformation[114][idOfVehicle]  = 514;
    vehicleCreationInformation[114][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[114][vehicleName], "petro");

    vehicleCreationInformation[115][idOfVehicle]  = 515;
    vehicleCreationInformation[115][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[115][vehicleName], "rdtrain");

    vehicleCreationInformation[116][idOfVehicle]  = 516;
    vehicleCreationInformation[116][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[116][vehicleName], "nebula");

    vehicleCreationInformation[117][idOfVehicle]  = 517;
    vehicleCreationInformation[117][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[117][vehicleName], "majestic");

    vehicleCreationInformation[118][idOfVehicle]  = 518;
    vehicleCreationInformation[118][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[118][vehicleName], "buccanee");

    vehicleCreationInformation[119][idOfVehicle]  = 519;
    vehicleCreationInformation[119][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[119][vehicleName], "shamal");

    vehicleCreationInformation[120][idOfVehicle]  = 520;
    vehicleCreationInformation[120][vehiclePrice] = 1000000;
    strcpy(vehicleCreationInformation[120][vehicleName], "hydra");

    vehicleCreationInformation[121][idOfVehicle]  = 521;
    vehicleCreationInformation[121][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[121][vehicleName], "fcr900");

    vehicleCreationInformation[122][idOfVehicle]  = 522;
    vehicleCreationInformation[122][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[122][vehicleName], "nrg");

    vehicleCreationInformation[123][idOfVehicle]  = 523;
    vehicleCreationInformation[123][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[123][vehicleName], "copbike");

    vehicleCreationInformation[124][idOfVehicle]  = 524;
    vehicleCreationInformation[124][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[124][vehicleName], "cement");

    vehicleCreationInformation[125][idOfVehicle]  = 525;
    vehicleCreationInformation[125][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[125][vehicleName], "towtruck");

    vehicleCreationInformation[126][idOfVehicle]  = 526;
    vehicleCreationInformation[126][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[126][vehicleName], "fortune");

    vehicleCreationInformation[127][idOfVehicle]  = 527;
    vehicleCreationInformation[127][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[127][vehicleName], "cadrona");

    vehicleCreationInformation[128][idOfVehicle]  = 528;
    vehicleCreationInformation[128][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[128][vehicleName], "fbitruck");

    vehicleCreationInformation[129][idOfVehicle]  = 529;
    vehicleCreationInformation[129][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[129][vehicleName], "willard");

    vehicleCreationInformation[130][idOfVehicle]  = 530;
    vehicleCreationInformation[130][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[130][vehicleName], "forklift");

    vehicleCreationInformation[131][idOfVehicle]  = 531;
    vehicleCreationInformation[131][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[131][vehicleName], "tractor");

    vehicleCreationInformation[132][idOfVehicle]  = 532;
    vehicleCreationInformation[132][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[132][vehicleName], "combine");

    vehicleCreationInformation[133][idOfVehicle]  = 533;
    vehicleCreationInformation[133][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[133][vehicleName], "feltzer");

    vehicleCreationInformation[134][idOfVehicle]  = 534;
    vehicleCreationInformation[134][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[134][vehicleName], "remingtn");

    vehicleCreationInformation[135][idOfVehicle]  = 535;
    vehicleCreationInformation[135][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[135][vehicleName], "slamvan");

    vehicleCreationInformation[136][idOfVehicle]  = 536;
    vehicleCreationInformation[136][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[136][vehicleName], "blade");

    vehicleCreationInformation[137][idOfVehicle]  = 537;
    vehicleCreationInformation[137][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[137][vehicleName], "freight");

    vehicleCreationInformation[138][idOfVehicle]  = 538;
    vehicleCreationInformation[138][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[138][vehicleName], "streak");

    vehicleCreationInformation[139][idOfVehicle]  = 539;
    vehicleCreationInformation[139][vehiclePrice] = 1000000;
    strcpy(vehicleCreationInformation[139][vehicleName], "vortex");

    vehicleCreationInformation[140][idOfVehicle]  = 540;
    vehicleCreationInformation[140][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[140][vehicleName], "vincent");

    vehicleCreationInformation[141][idOfVehicle]  = 541;
    vehicleCreationInformation[141][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[141][vehicleName], "bullet");

    vehicleCreationInformation[142][idOfVehicle]  = 542;
    vehicleCreationInformation[142][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[142][vehicleName], "clover");

    vehicleCreationInformation[143][idOfVehicle]  = 543;
    vehicleCreationInformation[143][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[143][vehicleName], "sadler");

    vehicleCreationInformation[144][idOfVehicle]  = 544;
    vehicleCreationInformation[144][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[144][vehicleName], "firela");

    vehicleCreationInformation[145][idOfVehicle]  = 545;
    vehicleCreationInformation[145][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[145][vehicleName], "hustler");

    vehicleCreationInformation[146][idOfVehicle]  = 546;
    vehicleCreationInformation[146][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[146][vehicleName], "intruder");

    vehicleCreationInformation[147][idOfVehicle]  = 547;
    vehicleCreationInformation[147][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[147][vehicleName], "primo");

    vehicleCreationInformation[148][idOfVehicle]  = 548;
    vehicleCreationInformation[148][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[148][vehicleName], "cargobob");

    vehicleCreationInformation[149][idOfVehicle]  = 549;
    vehicleCreationInformation[149][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[149][vehicleName], "tampa");

    vehicleCreationInformation[150][idOfVehicle]  = 550;
    vehicleCreationInformation[150][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[150][vehicleName], "sunrise");

    vehicleCreationInformation[151][idOfVehicle]  = 551;
    vehicleCreationInformation[151][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[151][vehicleName], "merit");

    vehicleCreationInformation[152][idOfVehicle]  = 552;
    vehicleCreationInformation[152][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[152][vehicleName], "utility");

    vehicleCreationInformation[153][idOfVehicle]  = 553;
    vehicleCreationInformation[153][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[153][vehicleName], "nevada");

    vehicleCreationInformation[154][idOfVehicle]  = 554;
    vehicleCreationInformation[154][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[154][vehicleName], "yosemite");

    vehicleCreationInformation[155][idOfVehicle]  = 555;
    vehicleCreationInformation[155][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[155][vehicleName], "windsor");

    vehicleCreationInformation[156][idOfVehicle]  = 556;
    vehicleCreationInformation[156][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[156][vehicleName], "monstera");

    vehicleCreationInformation[157][idOfVehicle]  = 557;
    vehicleCreationInformation[157][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[157][vehicleName], "monsterb");

    vehicleCreationInformation[158][idOfVehicle]  = 558;
    vehicleCreationInformation[158][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[158][vehicleName], "uranus");

    vehicleCreationInformation[159][idOfVehicle]  = 559;
    vehicleCreationInformation[159][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[159][vehicleName], "jester");

    vehicleCreationInformation[160][idOfVehicle]  = 560;
    vehicleCreationInformation[160][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[160][vehicleName], "sultan");

    vehicleCreationInformation[161][idOfVehicle]  = 561;
    vehicleCreationInformation[161][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[161][vehicleName], "stratum");

    vehicleCreationInformation[162][idOfVehicle]  = 562;
    vehicleCreationInformation[162][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[162][vehicleName], "elegy");

    vehicleCreationInformation[163][idOfVehicle]  = 563;
    vehicleCreationInformation[163][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[163][vehicleName], "raindanc");

    vehicleCreationInformation[164][idOfVehicle]  = 564;
    vehicleCreationInformation[164][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[164][vehicleName], "rctiger");

    vehicleCreationInformation[165][idOfVehicle]  = 565;
    vehicleCreationInformation[165][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[165][vehicleName], "flash");

    vehicleCreationInformation[166][idOfVehicle]  = 566;
    vehicleCreationInformation[166][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[166][vehicleName], "tahoma");

    vehicleCreationInformation[167][idOfVehicle]  = 567;
    vehicleCreationInformation[167][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[167][vehicleName], "savanna");

    vehicleCreationInformation[168][idOfVehicle]  = 568;
    vehicleCreationInformation[168][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[168][vehicleName], "bandito");

    vehicleCreationInformation[169][idOfVehicle]  = 569;
    vehicleCreationInformation[169][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[169][vehicleName], "freiflat");

    vehicleCreationInformation[170][idOfVehicle]  = 570;
    vehicleCreationInformation[170][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[170][vehicleName], "streakc");

    vehicleCreationInformation[171][idOfVehicle]  = 571;
    vehicleCreationInformation[171][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[171][vehicleName], "kart");

    vehicleCreationInformation[172][idOfVehicle]  = 572;
    vehicleCreationInformation[172][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[172][vehicleName], "mower");

    vehicleCreationInformation[173][idOfVehicle]  = 573;
    vehicleCreationInformation[173][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[173][vehicleName], "duneride");

    vehicleCreationInformation[174][idOfVehicle]  = 574;
    vehicleCreationInformation[174][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[174][vehicleName], "sweeper");

    vehicleCreationInformation[175][idOfVehicle]  = 575;
    vehicleCreationInformation[175][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[175][vehicleName], "broadway");

    vehicleCreationInformation[176][idOfVehicle]  = 576;
    vehicleCreationInformation[176][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[176][vehicleName], "tornado");

    vehicleCreationInformation[177][idOfVehicle]  = 577;
    vehicleCreationInformation[177][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[177][vehicleName], "at400");

    vehicleCreationInformation[178][idOfVehicle]  = 578;
    vehicleCreationInformation[178][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[178][vehicleName], "dft30");

    vehicleCreationInformation[179][idOfVehicle]  = 579;
    vehicleCreationInformation[179][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[179][vehicleName], "huntley");

    vehicleCreationInformation[180][idOfVehicle]  = 580;
    vehicleCreationInformation[180][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[180][vehicleName], "stafford");

    vehicleCreationInformation[181][idOfVehicle]  = 581;
    vehicleCreationInformation[181][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[181][vehicleName], "bf400");

    vehicleCreationInformation[182][idOfVehicle]  = 582;
    vehicleCreationInformation[182][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[182][vehicleName], "newsvan");

    vehicleCreationInformation[183][idOfVehicle]  = 583;
    vehicleCreationInformation[183][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[183][vehicleName], "tug");

    vehicleCreationInformation[184][idOfVehicle]  = 584;
    vehicleCreationInformation[184][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[184][vehicleName], "petrotr");

    vehicleCreationInformation[185][idOfVehicle]  = 585;
    vehicleCreationInformation[185][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[185][vehicleName], "emperor");

    vehicleCreationInformation[186][idOfVehicle]  = 586;
    vehicleCreationInformation[186][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[186][vehicleName], "wayfarer");

    vehicleCreationInformation[187][idOfVehicle]  = 587;
    vehicleCreationInformation[187][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[187][vehicleName], "euros");

    vehicleCreationInformation[188][idOfVehicle]  = 588;
    vehicleCreationInformation[188][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[188][vehicleName], "hotdog");

    vehicleCreationInformation[189][idOfVehicle]  = 589;
    vehicleCreationInformation[189][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[189][vehicleName], "club");

    vehicleCreationInformation[190][idOfVehicle]  = 590;
    vehicleCreationInformation[190][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[190][vehicleName], "freibox");

    vehicleCreationInformation[191][idOfVehicle]  = 591;
    vehicleCreationInformation[191][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[191][vehicleName], "artict3");

    vehicleCreationInformation[192][idOfVehicle]  = 592;
    vehicleCreationInformation[192][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[192][vehicleName], "androm");

    vehicleCreationInformation[193][idOfVehicle]  = 593;
    vehicleCreationInformation[193][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[193][vehicleName], "dodo");

    vehicleCreationInformation[194][idOfVehicle]  = 594;
    vehicleCreationInformation[194][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[194][vehicleName], "rccam");

    vehicleCreationInformation[195][idOfVehicle]  = 595;
    vehicleCreationInformation[195][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[195][vehicleName], "launch");

    vehicleCreationInformation[196][idOfVehicle]  = 596;
    vehicleCreationInformation[196][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[196][vehicleName], "copcarla");

    vehicleCreationInformation[197][idOfVehicle]  = 597;
    vehicleCreationInformation[197][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[197][vehicleName], "copcarsf");

    vehicleCreationInformation[198][idOfVehicle]  = 598;
    vehicleCreationInformation[198][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[198][vehicleName], "policelv");

    vehicleCreationInformation[199][idOfVehicle]  = 599;
    vehicleCreationInformation[199][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[199][vehicleName], "policeru");

    vehicleCreationInformation[200][idOfVehicle]  = 600;
    vehicleCreationInformation[200][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[200][vehicleName], "picador");

    vehicleCreationInformation[201][idOfVehicle]  = 601;
    vehicleCreationInformation[201][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[201][vehicleName], "swatvan");

    vehicleCreationInformation[202][idOfVehicle]  = 602;
    vehicleCreationInformation[202][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[202][vehicleName], "alpha");

    vehicleCreationInformation[203][idOfVehicle]  = 603;
    vehicleCreationInformation[203][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[203][vehicleName], "phoenix");

    vehicleCreationInformation[204][idOfVehicle]  = 604;
    vehicleCreationInformation[204][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[204][vehicleName], "glenshit");

    vehicleCreationInformation[205][idOfVehicle]  = 605;
    vehicleCreationInformation[205][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[205][vehicleName], "sadlshit");

    vehicleCreationInformation[206][idOfVehicle]  = 606;
    vehicleCreationInformation[206][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[206][vehicleName], "bagboxa");

    vehicleCreationInformation[207][idOfVehicle]  = 607;
    vehicleCreationInformation[207][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[207][vehicleName], "bagboxb");

    vehicleCreationInformation[208][idOfVehicle]  = 608;
    vehicleCreationInformation[208][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[208][vehicleName], "tugstair");

    vehicleCreationInformation[209][idOfVehicle]  = 609;
    vehicleCreationInformation[209][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[209][vehicleName], "boxburg");

    vehicleCreationInformation[210][idOfVehicle]  = 610;
    vehicleCreationInformation[210][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[210][vehicleName], "farmtr1");

    vehicleCreationInformation[211][idOfVehicle]  = 611;
    vehicleCreationInformation[211][vehiclePrice] = 15000;
    strcpy(vehicleCreationInformation[211][vehicleName], "utiltr1");
    return 1;
}

hook OnPlayerDisconnect(playerid, text[]) {
    RestoreVehicleCreationInfo(playerid);
    return 1;
}

hook OnPlayerDeath(playerid, killerid, WEAPON:weapon) {
    RestoreVehicleCreationInfo(playerid);
    return 1;
}

hook OnVehicleDeath(vehicleid, killerid) {
    foreach (new i : Player) {
        for (new b = 0; b < MAX_PLAYER_VEHICLES; b++) {
            if (vehicleid == playerVehicleCreationInfo[i][vehicles][b]) {
                DestroyVehicle(playerVehicleCreationInfo[i][vehicles][b]);
                playerVehicleCreationInfo[i][vehicles][b] = INVALID_VEHICLE_ID;
            }
        }
    }
    return 1;
}