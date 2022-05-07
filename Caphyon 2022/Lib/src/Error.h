#pragma once

class Error {
public:
  enum class mErrorCodes { invalidFile, noInput, invalidInput };
  void InterpretError(const Error::mErrorCodes& aErrorCode);
};
