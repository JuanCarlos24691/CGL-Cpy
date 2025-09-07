forward UpdateAssault();
public UpdateAssault() {
    if (timeInformation[hour] != 0 || timeInformation[minute] != 0)
        return 1;

    RestoreAssaultInformation(false, false, false, false);
    CreateAssaultCheckPoint();
    return 1;
}