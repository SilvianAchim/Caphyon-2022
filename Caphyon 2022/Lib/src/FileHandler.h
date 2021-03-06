#pragma once
#include "Error.h"
#include "pch.h"

class FileHandler {
public:
  FileHandler(const std::string& aInputFileName, const std::string& aOutputFileName);
  template <typename T>
  void ReadFromFile(T& aVar);
  template <typename T>
  void WriteToFile(const T& aOutput);
  ~FileHandler();

private:
  std::ifstream mInputFile;
  std::ofstream mOutputFile;
};

template <typename T>
void FileHandler::ReadFromFile(T& aVar) {
  if (mInputFile >> aVar) {
  } else {
    throw Error::mErrorCodes::invalidInput;
  }
}

template <typename T>
void FileHandler::WriteToFile(const T& aOutput) {
  if (mOutputFile << aOutput) {
  } else {
    throw Error::mErrorCodes::invalidOutputFile;
  }
}
