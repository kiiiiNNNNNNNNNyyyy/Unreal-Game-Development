#pragma once
#include <string>
//we donot use 'using namespace in header files
class FBullCow {

public:
	void Reset();
	int	GetMaxTries();
	int GetCurrentTry();
	bool IsGameWon();
	bool CheckGuessValidity(std::string);

private:
	int MyCurrentTry;
	int MyMaxTries;

};