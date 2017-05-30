#include "FBullCow2.h"

using int32 = int;
using FText = std::string;

FBullCow::FBullCow() {
	Reset();
}

void FBullCow::Reset() {
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;
	MyCurrentTry  =1 ;
	return;
}

int FBullCow::GetMaxTries() const {	
	return MyMaxTries; 
}

int FBullCow::GetCurrentTry() const {
	return MyCurrentTry; 
}

bool FBullCow::IsGameWon() const {
	return false;
}

bool FBullCow::CheckGuessValidity(FText	) {
	return false;
}