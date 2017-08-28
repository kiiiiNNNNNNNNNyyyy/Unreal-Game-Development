// In order to create a new C++ files, always use Add->New Items
#include <iostream>			 //we use cascading to include standard stuff
#include <string>
#include "FBullCowGame.h"

FBullCowGame BCGame;	//instantiating an object object of the game
void PrintIntro() {
	// Introduction to the game
	constexpr int word_length = 5;

	std::cout << "Welcome to Bulls and Cow Game! \n";
	std::cout << "Can you guess the " << word_length << " letter isogram I am thinking of ? " << std::endl;
	return;
}

std::string GetGuess() {
	
	int CurrentTry = BCGame.GetCurrentTry();
 
	std::cout << "Try " << CurrentTry << ". Enter your guess!! : ";

	// Get a guess from the player
	std::string Guess = ""; // upper case because of Unreal coding standard
	std::cout << "\nEnter your Guess : ";
	std::getline(std::cin, Guess);
	return Guess;
	 
}

// When we create functions using tools, they are automatically added to the main.h file
void PlayGame()
{
	BCGame.Reset();
	int MaxTries = BCGame.GetMaxTries();

	// Loop for the number of turns asking for guesses
	constexpr int number_of_turns = 5;

	//TODO Chnge from for to a while loop
	for (int i = 0; i < number_of_turns; i++) {
		std::string Guess = GetGuess();	// TODO make loop checking valid

		// Submit valid guess to the game	
		std::cout << "Your guess was " << Guess << std::endl;
	}
}

bool AskToPlayAgain() {
	std::cout << "\n Do you wanna play again? : ";
	std::string Response = "";
	getline(std::cin, Response);
	return (Response[0] == 'y') ||  (Response[0] == 'Y');
}

// The entry point of the application
int main() {

	bool wants_to_play_again = false;
	do{
		PrintIntro();
		PlayGame();

		// TODO -  Add todo list to added to the task list in visual studio task list
		wants_to_play_again = AskToPlayAgain();
	}while (wants_to_play_again);
	
	
	return 0;
}
