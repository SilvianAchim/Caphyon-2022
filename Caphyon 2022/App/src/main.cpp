#include "Solve.h"
#include "pch.h"

int main() {
  //Before run make sure that project app is an application(.exe)
  //For testing change project app to static lib(.lib)
  std::string inputFile = "input.txt";
  std::string outputFile = "output.txt";
  Solve mSolve(inputFile, outputFile);
  mSolve.SolveProblem();
}
