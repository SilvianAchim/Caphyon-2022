#pragma once
#include "FileHandler.h"
#include "pch.h"

class Solve {
public:
  Solve(std::string aInputFileName, std::string aOutputFileName);
  void SolveProblem();
  void ReadInput();

private:
  std::unique_ptr<FileHandler> mFileHandler;
  int mLength;
  std::string mPlanet;
};
