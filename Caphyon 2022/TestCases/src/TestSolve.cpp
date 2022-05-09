#include "TestSolve.h"
#include "Solve.h"

std::string TestSolve::RunTests() {
  std::string output = SolveTester();
  if (output != VALID) return output;
  return VALID;
}

std::string TestSolve::SolveTester() {
  try { // Test 1
    Solve solve("src/TestFiles/testSolve1IN.txt", "src/TestFiles/testSolve1OUT.txt");
    solve.SolveProblem();
    FileHandler file("src/TestFiles/testSolve1OUT.txt", randomOutput);
    long long result;
    file.ReadFromFile(result);
    if (result != 10) return "Test failed : TestSolve test 1 | Wrong Answer!"s;
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestSolve test 1 | Solve returned an unexpected error!"s;
  }
  return VALID;
}
