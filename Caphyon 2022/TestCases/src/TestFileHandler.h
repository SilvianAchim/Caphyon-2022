#pragma once
#include "pch.h"

class TestFileHandler {
public:
  std::string RunTests();

private:
  const std::string VALID = "OK";
  std::string OpenInputFile();
  std::string ReadFromFile();
  std::string WriteToFile();
};
