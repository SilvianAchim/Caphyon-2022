#include "Error.h"
#include "pch.h"

void Error::InterpretError(const Error::mErrorCodes& aErrorCode) {
  switch (aErrorCode) {
    case Error::mErrorCodes::invalidFile:
      std::cout << "Error while opening the input file. File does not exists!";
      break;
    case Error::mErrorCodes::invalidInput:
      std::cout << "Invalid string(planet) length!";
      break;
    case Error::mErrorCodes::noInput:
      std::cout << "Error while reading from the input file. File may be empty or does "
                   "not contain all the elements!";
      break;
    case Error::mErrorCodes::noShips:
      std::cout << "The linearo-planet has no ships. Ask Elon Musk to send one ship!";
      break;
    case Error::mErrorCodes::unexpectedError:
      std::cout << "An unkowned error occured!";
      break;
    default:
      std::cout << "An unkowned error occured!";
      break;
  }
}
