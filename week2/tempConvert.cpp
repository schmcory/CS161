#include <iostream>
#include <stdint.h>
#include <iomanip>

int main() {
	double c;	//c variable holds the celsius temperature input by the user
	double f;	//f variable holds the farenheit temperature input by the user

	//Prompts user to enter a celius temperautre 
	std::cout << "Please enter a Celsius temperature." << std::endl;
	std::cin >> c;

	while(std::cin.fail()) {
		std::cout << "Please only enter a number." << std::endl;
		std::cin.clear();
		std::cin.ignore();
		std::cin >> c;		
	}

	//the equation for farenheit to celsius takes the C temp multiplied by 9, divided by 5 and added 32
	f = (c * 9)/5 + 32;

	//prints the farenheit temperature
	std::cout << "The equivalent Farenheit temperature is: " << std::endl;
	std::cout << f << std::endl;

	//terminates main()
	return 0;
}
