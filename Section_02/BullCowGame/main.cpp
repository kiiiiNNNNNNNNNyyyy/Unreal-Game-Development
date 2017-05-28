#include <iostream>																		//pre processor directive
#include <string>

using namespace std;

void PrintIntro();
string  GetGuess();
void PlayGame();
bool PlayAgain();

void PlayGame();

int main() {

	PrintIntro();
	PlayGame();
	PlayAgain();

	return 0;

}

//print the intro
void PrintIntro() {

	constexpr int word_length = 10;														//this thing can be evaluated at the compile time.
	cout << "Welcome to Bull and Cow, a fun word game!!\n";								//std = standard To get into the standard namespace
	cout << "Can you guess the " << word_length << " letter isogram I'm thinking of?\n";


}

void PlayGame()
{
	constexpr int number_of_turns = 5;

	for (int i = 0; i < number_of_turns; i++) {
		string Guess = GetGuess();
		cout << "Your guess was: " << Guess << endl;
		cout << endl;
	}
}

//Guess the number
string GetGuess() {
	
	cout << "Enter your guess : ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;

}

bool PlayAgain() {
	cout << "Do you wanna play again? ";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');

}