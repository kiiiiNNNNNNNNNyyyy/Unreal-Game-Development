#pragma once
#include <string>

using FString = std::string;

//we donot use 'using namespace in header files
class FBullCow {

public:
	
	FBullCow();
	int	GetMaxTries() const;
	int GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset();
	bool CheckGuessValidity(FString);

private:
	int MyCurrentTry;
	int MyMaxTries;
		
};