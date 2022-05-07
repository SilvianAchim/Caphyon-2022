#include "FileHandler.h"
#include "pch.h"

FileHandler::FileHandler(
    const std::string& aInputFileName, const std::string& aOutputFileName) {
  mInputFile.open(aInputFileName);
  if (!mInputFile) { throw Error::mErrorCodes::invalidFile; }
  mOutputFile.open(aOutputFileName);
}

FileHandler::~FileHandler() {
  mInputFile.close();
  mOutputFile.close();
}
