#include "Solver.h"
#include "Error.h"

Solver::Solver(int aLength, std::string aPlanet)
    : mPlanet(aPlanet), mLength(aLength), mLeftPointer(INT_MIN) {
  mRightPointer = GetNextShip(0);
  if (mRightPointer == NotFound) throw Error::mErrorCodes::noShips;
}

long long Solver::GenerateResult() {
  long long ans = 0;
  for (int i = 0; i < mLength; i++) {
    if (mPlanet[i] == SHIP) {
      mLeftPointer = mRightPointer;
      mRightPointer = GetNextShip(i + 1);
    } else {
      if (mLeftPointer != NotFound && mLeftPointer != INT_MIN &&
          mRightPointer != NotFound) {
        ans += std::min(
            1LL * (mRightPointer - i) * (mPlanet[i] - '0'),
            1LL * (i - mLeftPointer) * (mPlanet[i] - '0'));
      } else if (mLeftPointer != NotFound && mLeftPointer != INT_MIN) {
        ans += 1LL * (i - mLeftPointer) * (mPlanet[i] - '0');
      } else if (mRightPointer != NotFound) {
        ans += 1LL * (mRightPointer - i) * (mPlanet[i] - '0');
      } else {
        throw Error::mErrorCodes::unexpectedError;
      }
    }
  }
  return ans;
}

int Solver::GetNextShip(const int& aPos) {
  for (int i = aPos; i < mLength; i++) {
    if (mPlanet[i] == SHIP) return i;
  }
  return NotFound;
}
