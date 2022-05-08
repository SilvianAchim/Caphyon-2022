#include <map>
#include "FileHandler.h"
#include "pch.h"

using namespace std;

int main() {
  map<Error::mErrorCodes, string> m;
  m[Error::mErrorCodes::invalidInput] = "invalid inputttt";
  cout << m[Error::mErrorCodes::invalidInput] << endl;
  cout << m[Error::mErrorCodes::invalidInputFile];
}
