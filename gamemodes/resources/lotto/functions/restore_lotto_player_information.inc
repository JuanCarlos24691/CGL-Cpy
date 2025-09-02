forward RestoreLottoPlayerInformation(const lottoId);
public RestoreLottoPlayerInformation(const lottoId) {
    if (lottoPlayerInformation[lottoId][name][0] != EOS)
        lottoPlayerInformation[lottoId][name][0] = EOS;

    if (lottoPlayerInformation[lottoId][reserved])
        lottoPlayerInformation[lottoId][reserved] = false;
    return 1;
}