#include "TestSolve.h"
#include "Solve.h"

std::string TestSolve::RunTests() {
  std::string output = SolveTester();
  if (output != VALID) return output;
  return VALID;
}

std::string TestSolve::SolveTester() {
  try { // Test 1
    auto aux = []() {
      Solve solve("src/TestFiles/testSolve1IN.txt", "src/TestFiles/testSolve1OUT.txt");
      solve.SolveProblem();
    };
    aux();
    FileHandler file("src/TestFiles/testSolve1OUT.txt", randomOutput);
    long long result;
    file.ReadFromFile(result);
    if (result != 10) return "Test failed : TestSolve test 1 | Wrong Answer!"s;
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestSolve test 1 | Solve returned an unexpected error!"s;
  }
  try { // Test 2
    auto aux = []() {
      Solve solve("src/TestFiles/testSolve2IN.txt", "src/TestFiles/testSolve2OUT.txt");
      solve.SolveProblem();
    };
    aux();
    FileHandler file("src/TestFiles/testSolve2OUT.txt", randomOutput);
    long long result;
    file.ReadFromFile(result);
    if (result != 4'999'950'000LL)
      return "Test failed : TestSolve test 2 | Wrong Answer!"s;
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestSolve test 2 | Solve returned an unexpected error!"s;
  }
  try { // Test 3
    auto aux = []() {
      Solve solve("src/TestFiles/testSolve3IN.txt", "src/TestFiles/testSolve3OUT.txt");
      solve.SolveProblem();
    };
    aux();
    FileHandler file("src/TestFiles/testSolve3OUT.txt", randomOutput);
    long long result;
    file.ReadFromFile(result);
    if (result != 4'999'950'000LL)
      return "Test failed : TestSolve test 3 | Wrong Answer!"s;
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestSolve test 3 | Solve returned an unexpected error!"s;
  }
  try { // Test 4
    auto aux = []() {
      Solve solve("src/TestFiles/testSolve4IN.txt", "src/TestFiles/testSolve4OUT.txt");
      solve.SolveProblem();
    };
    aux();
    FileHandler file("src/TestFiles/testSolve4OUT.txt", randomOutput);
    long long result;
    file.ReadFromFile(result);
    if (result != 44'999'550'000LL)
      return "Test failed : TestSolve test 4 | Wrong Answer!"s;
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestSolve test 4 | Solve returned an unexpected error!"s;
  }
  try { // Test 5
    auto aux = []() {
      Solve solve("src/TestFiles/testSolve5IN.txt", "src/TestFiles/testSolve5OUT.txt");
      solve.SolveProblem();
    };
    aux();
    FileHandler file("src/TestFiles/testSolve5OUT.txt", randomOutput);
    long long result;
    file.ReadFromFile(result);
    if (result != 44'999'550'000LL)
      return "Test failed : TestSolve test 5 | Wrong Answer!"s;
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestSolve test 5 | Solve returned an unexpected error!"s;
  }
  try { // Test 6
    auto aux = []() {
      Solve solve("src/TestFiles/testSolve6IN.txt", "src/TestFiles/testSolve6OUT.txt");
      solve.SolveProblem();
    };
    aux();
    FileHandler file("src/TestFiles/testSolve6OUT.txt", randomOutput);
    long long result;
    file.ReadFromFile(result);
    if (result != 22'500'000'000LL)
      return "Test failed : TestSolve test 6 | Wrong Answer!"s;
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestSolve test 6 | Solve returned an unexpected error!"s;
  }
  try { // Test 7
    auto aux = []() {
      Solve solve("src/TestFiles/testSolve7IN.txt", "src/TestFiles/testSolve7OUT.txt");
      solve.SolveProblem();
    };
    aux();
    FileHandler file("src/TestFiles/testSolve7OUT.txt", randomOutput);
    long long result;
    file.ReadFromFile(result);
    if (result != 2'362'570LL) return "Test failed : TestSolve test 7 | Wrong Answer!"s;
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestSolve test 7 | Solve returned an unexpected error!"s;
  }
  try { // Test 8
    auto aux = []() {
      Solve solve("src/TestFiles/testSolve8IN.txt", "src/TestFiles/testSolve8OUT.txt");
      solve.SolveProblem();
    };
    aux();
    FileHandler file("src/TestFiles/testSolve8OUT.txt", randomOutput);
    long long result;
    file.ReadFromFile(result);
    if (result != 2'360'401LL) return "Test failed : TestSolve test 8 | Wrong Answer!"s;
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestSolve test 8 | Solve returned an unexpected error!"s;
  }
  return VALID;
}
