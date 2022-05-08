#pragma once
#include "pch.h"

class TestResult {
public:
  std::string RunTests();

private:
  const std::string VALID = "OK";
};
