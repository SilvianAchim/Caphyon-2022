#include "Error.h"
#include "pch.h"

void Error::InterpretError(const Error::mErrorCodes& aErrorCode) {
  switch (aErrorCode) {
    case invalidFile:
      std::cout << "Error while opening the input file. File does not exists!";
      break;
    case invalidInput:
      std::cout << "Invalid string(planet) length!";
      break;
    case noInput:
      std::cout << "Error while reading from the input file. File may be empty or does "
                   "not contain all the elements!";
      break;
    default:
      std::cout << aErrorCode << " An unkowned error occured!";
      break;
  }
}
