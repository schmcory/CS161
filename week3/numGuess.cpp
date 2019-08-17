
#include <iostream>
#include <stdint.h>
#include <iomanip>

int main() {
	int numGuess; 
	int playerGuess;

	std::cout << "Enter the number for the player to guess." << std::endl;
	std::cin >> numGuess; 

	std::cout << "Enter your guess." << std::endl;
	std::cin >> playerGuess; 

	while(numGuess != playerGuess) {
		for(int i = 0; i++) {
			if(numGuess > playerGuess) {
				std::cout << "Too high - try again." << std::endl;
			}

			else if(numGuess < playerGuess) {
				std::cout << "Too low - try again." << std::endl;
			}

			numTries = i;
		}
	}

	if(playerGuess == numGuess) {
		std::cout << "You guessed it in " << numTries << " tries." << std::endl;
	}

	return 0;
}
