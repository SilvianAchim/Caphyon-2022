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
  std::string InterpretError(const Error::mErrorCodes& aErrorCode);
};
