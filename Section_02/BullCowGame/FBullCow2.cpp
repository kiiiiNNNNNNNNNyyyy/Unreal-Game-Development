#include "FBullCow2.h"

using int32 = int;
using FText = std::string;

FBullCow::FBullCow() {
	Reset();
}

void FBullCow::Reset() {

	constexpr	int MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	const FString HIDDEN_WORD = "ant";
	MyHiddenWord = HIDDEN_WORD;   
	
	MyCurrentTry  =1 ;
	return;
}

FBullCowCount FBullCow::SubmitGuess(FString Guess)
{
	MyCurrentTry++;
	FBullCowCount BullCowCount;
	int32 HiddenWordLength = MyHiddenWord.length();
	
	for (int32 MHWChar = 0; MHWChar < HiddenWordLength; MHWChar++) {
		for (int32 GChar = 0; GChar < HiddenWordLength; GChar++) {
			if (Guess[GChar] == MyHiddenWord[MHWChar]) {
				if (MHWChar == GChar ) {
					BullCowCount.Bulls++;
				}else{
					BullCowCount.Cows++;
				}
			}
		}
	}

	return BullCowCount;
}

int FBullCow::GetMaxTries() const {	
	return MyMaxTries; 
}

int FBullCow::GetCurrentTry() const {
	return MyCurrentTry; 
}

int32 FBullCow::GetHiddenWordLength() const{
	return MyHiddenWord.length();
}

bool FBullCow::IsGameWon() const {
	return false;
}

bool FBullCow::CheckGuessValidity(FText	) const {
	return false;
}