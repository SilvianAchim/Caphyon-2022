#include "Solve.h"
#include "FileHandler.h"
#include "Solver.h"
#include "pch.h"

Solve::Solve(std::string aInputFileName, std::string aOutputFileName)
    : mFileHandler(std::make_unique<FileHandler>(aInputFileName, aOutputFileName)),
      mLength(1) {}

void Solve::SolveProblem() {
  try {
    ReadInput();
    Solver solver(mLength, mPlanet);
    std::cout << solver.GenerateResult();
  } catch (const Error::mErrorCodes& aErrorCode) {
    Error error;
    error.InterpretError(aErrorCode);
  }
}

void Solve::ReadInput() {
  mFileHandler->ReadFromFile(mLength);
  mFileHandler->ReadFromFile(mPlanet);
  if (mPlanet.size() != mLength) { throw Error::mErrorCodes::invalidInput; }
}
