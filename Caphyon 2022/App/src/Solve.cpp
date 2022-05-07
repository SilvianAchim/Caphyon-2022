#include "Solve.h"
#include "FileHandler.h"
#include "pch.h"

Solve::Solve(std::string aInputFileName, std::string aOutputFileName)
    : mFileHandler(std::make_unique<FileHandler>(aInputFileName, aOutputFileName)),
      mLength(0) {}

void Solve::SolveProblem() {
  Error error;
  try {
    ReadInput();
  } catch (const Error::mErrorCodes& aErrorCode) { error.InterpretError(aErrorCode); }
}

void Solve::ReadInput() {
  mFileHandler->ReadFromFile(mLength);
  mFileHandler->ReadFromFile(mPlanet);
  if (mPlanet.size() != mLength) { throw Error::mErrorCodes::invalidInput; }
}
