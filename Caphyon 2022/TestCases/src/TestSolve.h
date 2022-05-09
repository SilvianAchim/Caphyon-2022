#pragma once
#include "pch.h"
class TestSolve {
public:
  std::string RunTests();

private:
  const std::string VALID = "OK";
  const std::string randomOutput = "src/TestFiles/testtttt.test";
  std::string SolveTester();
};
