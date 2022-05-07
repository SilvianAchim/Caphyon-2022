#include "Solve.h"
#include "pch.h"

int main() {
  std::string inputFile = "input.txt";
  std::string outputFile = "output.txt";
  Solve mSolve(inputFile, outputFile);
  mSolve.SolveProblem();
}
