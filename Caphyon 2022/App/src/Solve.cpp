#include "Solve.h"
#include "FileHandler.h"
#include "Result.h"
#include "pch.h"

Solve::Solve(std::string aInputFileName, std::string aOutputFileName)
    : mFileHandler(std::make_unique<FileHandler>(aInputFileName, aOutputFileName)),
      mLength(0) {}

void Solve::SolveProblem() {
  try {
    ReadInput();
    Result result(mLength, mPlanet);
    std::cout << result.GenerateResult();
  } catch (const Error::mErrorCodes& aErrorCode) {
    Error error;
    std::cout << error.InterpretError(aErrorCode);
  }
}

void Solve::ReadInput() {
  mFileHandler->ReadFromFile(mLength);
  mFileHandler->ReadFromFile(mPlanet);
}
