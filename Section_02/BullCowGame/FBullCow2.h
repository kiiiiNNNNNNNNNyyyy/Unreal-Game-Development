#pragma once
#include <string>

using FString = std::string;
using int32 = int; 

struct FBullCowCount {
	int32 Bulls = 0;
	int32 Cows = 0;	
};


//we donot use 'using namespace in header files
class FBullCow {

public:
	
	FBullCow();

	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	int32 GetHiddenWordLength() const;

	bool CheckGuessValidity(FString) const;	
	bool IsGameWon() const;

	void Reset();
	FBullCowCount SubmitGuess(FString);

private:
	int32 MyCurrentTry;
	int32 MyMaxTries;
	FString MyHiddenWord;
};