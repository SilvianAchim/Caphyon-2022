#pragma once
#include "pch.h"

class Solver {
public:
  Solver(int aLength, std::string aPlanet);
  long long GenerateResult();

private:
  const char SHIP = '0';
  const int NotFound = -1;
  int mLength, mLeftPointer, mRightPointer;
  std::string mPlanet;
  int GetNextShip(const int& aPos);
};
