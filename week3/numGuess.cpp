
#include <iostream>
#include <stdint.h>
#include <iomanip>

int main() {
	int numGuess; 			//variable holds the number for player to guess
	int playerGuess;		//variable holds the player's guess
	int numTries;			//variable holds the number of tries it took for the player to guess

	std::cout << "Enter the number for the player to guess." << std::endl;
	std::cin >> numGuess; 

	std::cout << "Enter your guess." << std::endl;

	//for loop calculates the number of tries it take the user to guess
	for(numTries = 1; ; numTries++) {
		std::cin >> playerGuess;

		//input validation
		if(!(std::cin.fail())) {
			//if the number guessed by the player is greater than the number 
			if(numGuess < playerGuess) {
				std::cout << "Too high - try again." << std::endl;
			}

			//if the number guessed by the player is less than the number
			else if(numGuess > playerGuess) {
				std::cout << "Too low - try again." << std::endl;
			}	


			//if the number guessed by the player is equal to the number
			else if(playerGuess == numGuess) {
				std::cout << "You guessed it in " << numTries << " tries." << std::endl;
				break;	//breaks out of the loop
			}
		}

		//else - enter numbers only statement
		else {
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Please enter numbers only." << std::endl;	
		}
	}

	return 0;
}
