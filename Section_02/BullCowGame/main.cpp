/*
	This is the console executable, that makes use of the Bullcow
	This acts as the view in a MVC pattern, and is responsible for all user interaction.
*/

// In order to create a new C++ files, always use Add->New Items
#include <iostream>			 //we use cascading to include standard stuff
#include <string>
#include "FBullCowGame.h"

using FText = std::string;
using int32 = int;

FBullCowGame BCGame;	//instantiating an object object of the game
void PrintIntro() {
	// Introduction to the game
	constexpr int32 word_length = 5;

	std::cout << "Welcome to Bulls and Cow Game! \n";
	std::cout << "Can you guess the " << word_length << " letter isogram I am thinking of ? " << std::endl;
	return;
}

FText GetGuess() {
	
	int32 CurrentTry = BCGame.GetCurrentTry();
 
	std::cout << "Try " << CurrentTry << ". Enter your guess!! : ";

	// Get a guess from the player
	FText Guess = ""; // upper case because of Unreal coding standard
	std::cout << "\nEnter your Guess : ";
	std::getline(std::cin, Guess);
	return Guess;
	 
}

// When we create functions using tools, they are automatically added to the main.h file
void PlayGame()
{
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTries();

	// Loop for the number of turns asking for guesses
	constexpr int32 number_of_turns = 5;

	//TODO Chnge from for to a while loop 
	for (int32 i = 0; i < number_of_turns; i++) {
		FText Guess = GetGuess();	// TODO make loop checking valid

		// Submit valid guess to the game
		FBullCowCount BullCowCount = BCGame.SubmitGuess(Guess);
		std::cout << "Bulls = " << BullCowCount.Bulls;
		std::cout << " .Cows = " << BullCowCount.Cows << std::endl;

		std::cout << "Your guess was " << Guess << std::endl;
	}
}

bool AskToPlayAgain() {
	std::cout << "\n Do you wanna play again? : ";
	FText Response = "";
	getline(std::cin, Response);
	return (Response[0] == 'y') ||  (Response[0] == 'Y');
}

// The entry point of the application
int32 main() {

	bool wants_to_play_again = false;
	do{
		PrintIntro();
		PlayGame();

		// TODO -  Add todo list to added to the task list in visual studio task list
		wants_to_play_again = AskToPlayAgain();
	}while (wants_to_play_again);
	
	
	return 0;
}
