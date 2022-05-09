#include "Error.h"
#include "pch.h"

Error::Error() {
  mErrors[mErrorCodes::invalidInputFile] =
      "Error while opening the input file. File does not exists!"s;
  mErrors[mErrorCodes::invalidInput] = "Invalid input!"s;
  mErrors[mErrorCodes::noShips] =
      "The linearo-planet has no ships. Ask Elon Musk to send one ship!"s;
  mErrors[mErrorCodes::unexpectedError] = "An unkowned error occured!"s;
  mErrors[mErrorCodes::invalidOutputFile] =
      "Error while writing to the outputfile. It may be deleted!"s;
}

std::string Error::InterpretError(const mErrorCodes& aErrorCode) {
  return mErrors[aErrorCode];
}
