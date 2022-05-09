#pragma once
#include "pch.h"

class Error {
public:
  enum class mErrorCodes {
    invalidInputFile,
    invalidInput,
    noShips,
    unexpectedError,
    invalidOutputFile
  };
  Error();
  std::string InterpretError(const mErrorCodes& aErrorCode);

private:
  std::unordered_map<mErrorCodes, std::string> mErrors;
};
