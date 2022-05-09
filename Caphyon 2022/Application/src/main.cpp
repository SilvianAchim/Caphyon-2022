#include "Solve.h"
#include "pch.h"

int main() {
  //Before run make sure that project app is an application(.exe)
  //For testing change project App to static library(.lib)
  std::string inputFile = "liniaro-planet.in";
  std::string outputFile = "liniaro-planet.out";
  Solve mSolve(inputFile, outputFile);
  mSolve.SolveProblem();
}
