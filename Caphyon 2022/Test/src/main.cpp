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
    throw "Error while opening the inputfile. File may not exist!"s;
}

void inner_mad() { throw std::exception(); }

void mad() { auto ptr = std::make_unique<int>(); }

int main() {
  /*int n;
  string s;
  try {
    fun(n);
    fun(s);
    cout << n << "\n" << s << " -ok\n";
  } catch (string ceva) { cout << ceva << "\n"; }*/
  cout << "Salut\n";
  mad();
  cout << "Salut iara\n";
}
