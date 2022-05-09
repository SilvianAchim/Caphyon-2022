#pragma once
#include "pch.h"
class TestSolve {
public:
  std::string RunTests();

private:
  const std::string VALID = "OK";
  const std::string randomOutput = "src/TestFilestesttttt.test";
  std::string SolveTester();
};
