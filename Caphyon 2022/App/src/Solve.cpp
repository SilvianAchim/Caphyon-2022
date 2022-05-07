#include "Solve.h"
#include "FileHandler.h"
#include "pch.h"

Solve::Solve(std::string aInputFileName, std::string aOutputFileName)
    : mFileHandler(std::make_unique<FileHandler>(aInputFileName, aOutputFileName)),
      mLength(0),
      mPlanet("") {}

void Solve::SolveProblem() {
  try {
    ReadInput();
  } catch (std::string error) { std::cout << error << std::endl; }
}

void Solve::ReadInput() {
  mFileHandler->ReadFromFile(mLength);
  mFileHandler->ReadFromFile(mPlanet);
}
