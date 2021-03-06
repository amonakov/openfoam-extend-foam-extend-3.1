const dictionary& stressControl =
  mesh.solutionDict().subDict("solidMechanics");

int nCorr(readInt(stressControl.lookup("nCorrectors")));
scalar convergenceTolerance(readScalar(stressControl.lookup("U")));
int infoFrequency(readInt(stressControl.lookup("infoFrequency")));
