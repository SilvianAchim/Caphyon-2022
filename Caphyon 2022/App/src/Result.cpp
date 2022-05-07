#include "Result.h"
#include "Error.h"

Result::Result(int aLength, std::string aPlanet)
    : mLength(aLength), mLeftPointer(INT_MIN) {
  mPlanet = aPlanet; // ? -- Clang error
  mRightPointer = GetNextShip(0);
  if (mRightPointer == NotFound) throw Error::mErrorCodes::noShips;
}

long long Result::GenerateResult() {
  long long ans = 0;
  for (int i = 0; i < mLength; i++) {
    if (mPlanet[i] == SHIP) {
      mLeftPointer = mRightPointer;
      mRightPointer = GetNextShip(i + 1);
    } else {
      if (mLeftPointer != NotFound && mLeftPointer != INT_MIN &&
          mRightPointer != NotFound) {
        ans += std::min(
            long long((mRightPointer - i) * (mPlanet[i] - '0')),
            long long((i - mLeftPointer) * (mPlanet[i] - '0')));
      } else if (mLeftPointer != NotFound && mLeftPointer != INT_MIN) {
        ans += long long((i - mLeftPointer) * (mPlanet[i] - '0'));
      } else if (mRightPointer != NotFound) {
        ans += long long((mRightPointer - i) * (mPlanet[i] - '0'));
      } else {
        throw Error::mErrorCodes::unexpectedError;
      }
    }
  }
  return ans;
}

int Result::GetNextShip(const int& aPos) {
  for (int i = aPos; i < mLength; i++) {
    if (mPlanet[i] == SHIP) return i;
  }
  return NotFound;
}
