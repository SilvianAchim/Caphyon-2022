#include "Error.h"
#include "pch.h"

std::string Error::InterpretError(const Error::mErrorCodes& aErrorCode) {
  switch (aErrorCode) {
    case Error::mErrorCodes::invalidInputFile:
      return "Error while opening the input file. File does not exists!"s;
    case Error::mErrorCodes::invalidInput:
      return "Invalid string(planet) length!"s;
    case Error::mErrorCodes::noInput:
      return "Error while reading from the input file. File may be empty or does "
             "not contain all the elements!"s;
    case Error::mErrorCodes::noShips:
      return "The linearo-planet has no ships. Ask Elon Musk to send one ship!"s;
    case Error::mErrorCodes::unexpectedError:
      return "An unkowned error occured!"s;
    case Error::mErrorCodes::invalidOutputFile:
      return "Error while writing to the outputfile. It may be deleted!"s;
    default:
      return "An unkowned error occured!"s;
  }
}
