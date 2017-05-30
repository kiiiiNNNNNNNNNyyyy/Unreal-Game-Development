#include <iostream>																		//pre processor directive
#include <string>
#include "FBullCow2.h"

using FText = std::string;
using int32 = int;

void PrintIntro();
FText GetGuess();
void PlayGame();
bool PlayAgain();
FBullCow BCGame;

void PlayGame();

int32 main() {

	bool bplayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bplayAgain = PlayAgain();
	}while (bplayAgain);

	return 0;

}

//print the intro
void PrintIntro() {
													//this thing can be evaluated at the compile time.
	std::cout << "Welcome to Bull and Cow, a fun word game!!\n";								//std = standard To get into the standard namespace
	std::cout << "Can you guess the " << BCGame.GetHiddenWordLength();
	std::cout << " letter isogram I'm thinking of?\n" << std::endl;
	return;

}

void PlayGame()
{

	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTries;

	for (int32 i = 0; i < MaxTries; i++) {
		FText Guess = GetGuess();

		FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);
		std::cout << "Bulls = " << BullCowCount.Bulls	;
		std::cout << "Cows = " << BullCowCount.Cows << std::endl;
	}
}

//Guess the number
FText GetGuess() {
	
	std::cout << "Enter your guess : ";
	FText Guess = "";
	std::getline(std::cin, Guess);
	return Guess;

}

bool PlayAgain() {
	std::cout << "Do you wanna play again (y/n)? ";
	FText Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');

}