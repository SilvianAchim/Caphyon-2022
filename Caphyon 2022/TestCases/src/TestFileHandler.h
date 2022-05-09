#pragma once
#include "pch.h"

class TestFileHandler {
public:
  std::string RunTests();

private:
  const std::string VALID = "OK";
  const std::string randomOutput = "src/TestFilestesttttt.test";
  std::string OpenInputFile();
  std::string ReadFromFile();
  std::string WriteToFile();
};
