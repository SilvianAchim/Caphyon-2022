#pragma once
#include "pch.h"

class Error {
public:
  enum class mErrorCodes {
    invalidInputFile,
    noInput,
    invalidInput,
    noShips,
    unexpectedError,
    invalidOutputFile,
    noError
  };
  Error();
  std::string InterpretError(const mErrorCodes& aErrorCode);

private:
  std::unordered_map<mErrorCodes, std::string> mErrors;
};
