#include "TestFileHandler.h"
#include "Error.h"
#include "FileHandler.h"
#include "pch.h"

std::string TestFileHandler::RunTests() {
  std::string output;
  output = OpenInputFile();
  if (output != VALID) return output;
  output = ReadFromFile();
  if (output != VALID) return output;
  output = WriteToFile();
  if (output != VALID) return output;
  return "OK";
}

std::string TestFileHandler::OpenInputFile() {
  std::string randomOutput = "testtttt.txt";
  try { // Test 1
    FileHandler test("src/TestFiles/testInput0.txt", randomOutput);
    return "Test failed: FileHandler test 1 | FileHandler failed to return an error "
           "while opening an unexisted file!"s;
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::invalidInputFile) {
      return "Test failed: FileHandler test 1 | FileHandler returned an unexpected error "
             "while opening the input file!"s;
    }
  }
  try { // Test 2
    FileHandler test("src/TestFiles/testInput1.txt", randomOutput);
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::noError)
      return "Test failed: FileHandler test2 | FileHandler returned an error while "
             "opening a valid file!"s;
  }
  return VALID;
}

std::string TestFileHandler::ReadFromFile() {
  std::string randomOutput = "src/TestFiles/testtttt.test";
  try { // Test3
    FileHandler test("src/TestFiles/testInput1.txt", randomOutput);
    int n;
    test.ReadFromFile(n);
    return "Test failed: FileHandler test 3 | FileHandler failed to return an error "
           "while reading from an unexisted file!"s;
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::noInput) {
      return "Test failed: FileHandler test 3 | FileHandler returned an unexpected error "
             "while reading from the input file!"s;
    }
  }
  try { // Test 4
    FileHandler test("src/TestFiles/testInput2.txt", randomOutput);
    int n;
    test.ReadFromFile(n);
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::noError)
      return "Test failed: FileHandler test4 | FileHandler returned an error while "
             "reading "
             "from a valid file!"s;
  }
  try { // Test 5
    FileHandler test("src/TestFiles/testInput2.txt", randomOutput);
    int n, m;
    test.ReadFromFile(n);
    test.ReadFromFile(m);
    return "Test failed: FileHandler test 5 | FileHandler failed to return an error!"s;
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::noInput) {
      return "Test failed: FileHandler test 5 | FileHandler returned an unexpected error "
             "while reading from the input file!"s;
    }
  }
  try { // Test 6
    FileHandler test("src/TestFiles/testInput3.txt", randomOutput);
    int n;
    test.ReadFromFile(n);
    std::string s;
    test.ReadFromFile(s);
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::noError)
      return "Test failed: FileHandler test 6 | FileHandler returned an error while "
             "reading from a valid file!"s;
  }
  return VALID;
}

std::string TestFileHandler::WriteToFile() {
  int testInt = 76;
  std::string testString = "7688888888888888";
  std::string randomOutput = "src/TestFiles/testtttt.test";
  try { // Test 7
    FileHandler test("src/TestFiles/testInput1.txt", "src/TestFiles/testOutput1.txt");
    test.WriteToFile(testInt);
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::noError)
      return "Test failed: FileHandler test 7 | FileHandler returned an error while "
             "writing to a valid file!"s;
  }
  try { // Test 8
    FileHandler test("src/TestFiles/testInput1.txt", "src/TestFiles/testOutput2.txt");
    test.WriteToFile(testString);
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::noError)
      return "Test failed: FileHandler test 8 | FileHandler returned an error while "
             "writing to a valid file!"s;
  }
  try { // Test 9
    FileHandler test("src/TestFiles/testOutput1.txt", randomOutput);
    int input;
    test.ReadFromFile(input);
    if (input != testInt) {
      return "Test failed: FileHandler test 9 | FileHandler failed to output the desired value!"s;
    }
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::noError)
      return "Test failed: FileHandler test 9 | FileHandler returned an error while "
             "reading from a valid file!"s;
  }
  try { // Test 10
    FileHandler test("src/TestFiles/testOutput2.txt", randomOutput);
    std::string input;
    test.ReadFromFile(input);
    if (input != testString) {
      return "Test failed: FileHandler test 10 | FileHandler failed to output the desired value!"s;
    }
  } catch (const Error::mErrorCodes& aErrorCode) {
    if (aErrorCode != Error::mErrorCodes::noError)
      return "Test failed: FileHandler test 10 | FileHandler returned an error while "
             "reading from a valid file!"s;
  }
  return VALID;
}
