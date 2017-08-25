// In order to create a new C++ files, always use Add->New Items
#include <iostream>			 //we use cascading to include standard stuff
#include <string>
using namespace std;

void PrintIntro() {
	// Introduction to the game
	constexpr int word_length = 5;

	std::cout << "Welcome to Bulls and Cow Game! \n";
	std::cout << "Can you guess the " << word_length << " letter isogram I am thinking of ? " << std::endl;
	return;
}

std::string GetGuessAndPrintBack() {
	// Get a guess from the player
	std::string Guess = ""; // upper case because of Unreal coding standard
	std::cout << "\nEnter your Guess : ";
	std::getline(std::cin, Guess);

	// Repeat the guess back to them
	std::cout << "Your guess was " << Guess << std::endl;
	return Guess;
}


// The entry point of the application
int main() {

	PrintIntro();
	GetGuessAndPrintBack();
	
	return 0;
}