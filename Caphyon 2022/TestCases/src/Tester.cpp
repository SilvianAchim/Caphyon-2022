#include "Tester.h"
#include "TestFileHandler.h"
#include "TestResult.h"
#include "pch.h"

void Tester::RunTests() {
  TestFileHandler testFileHandler;
  std::string output = testFileHandler.RunTests();
  if (output != VALID) {
    std::cout << output;
    return;
  }
  TestResult testResult;
  output = testResult.RunTests();
  if (output != VALID) {
    std::cout << output;
    return;
  }
  std::cout << "All tests succesfully passed!";
}
