#include <fstream>
#include <iostream>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

template <typename T>
void fun(T& var) {
  if (fin) {
    if (fin >> var) {
    } else {
      throw "Error while reading from file. File may be empty!"s;
    }
  } else
    throw "Error while opening the input file. File may not exist!"s;
}

class Errors {
public:
  enum TareFrate { invalidCeva = 100, valid = 200 };
};

int main() {
  int i = 99;
  Errors err;
  switch (i) {
    case err.invalidCeva:
      cout << "Fraer\n";
      break;
    case err.valid:
      cout << "Gaga\n";
      break;
    default:
      cout << "An unkowned error has occured!\n";
      break;
  }
}
