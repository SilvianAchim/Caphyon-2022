#pragma once

class Error {
public:
  enum class mErrorCodes { invalidFile, noInput, invalidInput, noShips, unexpectedError };
  void InterpretError(const Error::mErrorCodes& aErrorCode);
};
