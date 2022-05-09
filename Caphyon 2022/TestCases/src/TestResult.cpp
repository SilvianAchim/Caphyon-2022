#include "TestResult.h"
#include "Error.h"
#include "Result.h"
#include "pch.h"

std::string TestResult::RunTests() {
  std::string output = ResultTester();
  if (output != VALID) return output;
  return VALID;
}

std::string TestResult::ResultTester() {
  try { // Test 1
    Result result(6, "10411");
    result.GenerateResult();
    return "Test failed: TestResult test 1 | Result failed to return an error!"s;
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::invalidInput) {
      return "Test failed: TestResult test 1 | Result returned an unexpected error!"s;
    }
  }
  try { // Test 2
    Result result(6, "114112");
    result.GenerateResult();
    return "Test failed: TestResult test 2 | Result failed to return an error!"s;
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::noShips) {
      return "Test failed: TestResult test 2 | Result returned an unexpected error!"s;
    }
  }
  try { // Test 3
    Result result(6, "014012");
    long long output = result.GenerateResult();
    if (output != 10) { return "Test failed: TestResult test 3 | Wrong Answer!"s; }
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestResult test 3 | Result returned an error!"s;
  }
  try { // Test 4
    Result result(0, "");
    result.GenerateResult();
    return "Test failed: TestResult test 4 | Result failed to return an error!"s;
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::invalidInput) {
      return "Test failed: TestResult test 4 | Result returned an unexpected error!"s;
    }
  }
  try { // Test 5
    Result result(8, "01010101");
    long long output = result.GenerateResult();
    if (output != 4) { return "Test failed: TestResult test 5 | Wrong Answer!"s; }
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestResult test 5 | Result returned an error!"s;
  }
  try { // Test 6
    Result result(8, "01111111");
    long long output = result.GenerateResult();
    if (output != 28) { return "Test failed: TestResult test 6 | Wrong Answer!"s; }
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestResult test 6 | Result returned an error!"s;
  }
  try { // Test 7
    Result result(8, "11111110");
    long long output = result.GenerateResult();
    if (output != 28) { return "Test failed: TestResult test 7 | Wrong Answer!"s; }
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestResult test 7 | Result returned an error!"s;
  }
  try { // Test 8
    Result result(9, "111111101");
    long long output = result.GenerateResult();
    if (output != 29) { return "Test failed: TestResult test 8 | Wrong Answer!"s; }
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestResult test 8 | Result returned an error!"s;
  }
  try { // Test 9
    Result result(9, "101111111");
    long long output = result.GenerateResult();
    if (output != 29) { return "Test failed: TestResult test 9 | Wrong Answer!"s; }
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestResult test 9 | Result returned an error!"s;
  }
  try { // Test 10
    Result result(1, "0");
    long long output = result.GenerateResult();
    if (output != 0) { return "Test failed: TestResult test 10 | Wrong Answer!"s; }
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestResult test 10 | Result returned an error!"s;
  }
  try { // Test 11
    Result result(2, "09");
    long long output = result.GenerateResult();
    if (output != 9) { return "Test failed: TestResult test 11 | Wrong Answer!"s; }
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestResult test 11 | Result returned an error!"s;
  }
  try { // Test 12
    Result result(2, "90");
    long long output = result.GenerateResult();
    if (output != 9) { return "Test failed: TestResult test 12 | Wrong Answer!"s; }
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestResult test 12 | Result returned an error!"s;
  }
  try { // Test 13
    Result result(3, "901");
    long long output = result.GenerateResult();
    if (output != 10) { return "Test failed: TestResult test 13 | Wrong Answer!"s; }
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestResult test 13 | Result returned an error!"s;
  }
  try { // Test 14
    Result result(3, "901");
    long long output = result.GenerateResult();
    if (output != 10) { return "Test failed: TestResult test 14 | Wrong Answer!"s; }
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestResult test 14 | Result returned an error!"s;
  }
  try { // Test 15
    Result result(-6, "11401");
    result.GenerateResult();
    return "Test failed: TestResult test 15 | Result failed to return an error!"s;
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::invalidInput) {
      return "Test failed: TestResult test 15 | Result returned an unexpected error!"s;
    }
  }
  try { // Test 16
    Result result(6, "000000");
    long long output = result.GenerateResult();
    if (output != 0) { return "Test failed: TestResult test 16 | Wrong Answer!"s; }
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestResult test 16 | Result returned an unexpected error!"s;
  }
  try { // Test 17
    Result result(5, "11011");
    long long output = result.GenerateResult();
    if (output != 6) { return "Test failed: TestResult test 17 | Wrong Answer!"s; }
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestResult test 17 | Result returned an unexpected error!"s;
  }
  try { // Test 18
    Result result(6, "111011");
    long long output = result.GenerateResult();
    if (output != 9) { return "Test failed: TestResult test 18 | Wrong Answer!"s; }
  } catch (const Error::mErrorCodes&) {
    return "Test failed: TestResult test 18 | Result returned an unexpected error!"s;
  }
  try { // Test 19
    Result result(6, "10#$%1");
    result.GenerateResult();
    return "Test failed: TestResult test 19 | Result failed to return an error!"s;
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::invalidInput) {
      return "Test failed: TestResult test 19 | Result returned an unexpected error!"s;
    }
  }
  try { // Test 20
    Result result(6, "12#456");
    result.GenerateResult();
    return "Test failed: TestResult test 20 | Result failed to return an error!"s;
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::invalidInput) {
      return "Test failed: TestResult test 20 | Result returned an unexpected error!"s;
    }
  }
  try { // Test 21
    Result result(-6, "10#$%1");
    result.GenerateResult();
    return "Test failed: TestResult test 21 | Result failed to return an error!"s;
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::invalidInput) {
      return "Test failed: TestResult test 21 | Result returned an unexpected error!"s;
    }
  }
  try { // Test 22
    Result result(-1, "10#$%1");
    result.GenerateResult();
    return "Test failed: TestResult test 22 | Result failed to return an error!"s;
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::invalidInput) {
      return "Test failed: TestResult test 22 | Result returned an unexpected error!"s;
    }
  }
  return VALID;
}
