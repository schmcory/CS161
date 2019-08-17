
#include <iostream>
#include <stdint.h>
#include <iomanip>

int main() {
	int numGuess; 
	int playerGuess;
	int numTries;
	int j;

	std::cout << "Enter the number for the player to guess." << std::endl;
	std::cin >> numGuess; 

	std::cout << "Enter your guess." << std::endl;

	for(numTries = 1; ; numTries++) {
		std::cin >> playerGuess;

		if(std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Please enter numbers only." << std::endl;	
		}

		else if(numGuess < playerGuess) {
			std::cout << "Too high - try again." << std::endl;
		}

		else if(numGuess > playerGuess) {
			std::cout << "Too low - try again." << std::endl;
		}

		else if(playerGuess == numGuess) {
			std::cout << "You guessed it in " << numTries << " tries." << std::endl;
			break;
		}
	}


	return 0;
}
