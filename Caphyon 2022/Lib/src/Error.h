#pragma once

class Error {
public:
  enum mErrorCodes { invalidFile = 330, noInput = 331, invalidInput = 332 };
  void InterpretError(const Error::mErrorCodes& aErrorCode);
};
