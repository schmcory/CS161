#include <iostream>
#include <stdint.h>
#include <iomanip>

int main() {
	double number[5];
	double average;
	double sum;

	std::cout << "Please enter five numbers: " << std::endl;

	for(int i=0; i < 5; i++) {
		std::cin >> number[i];
		sum += number[i];

		if(std::cin.fail()) {
			std::cout << "Please only enter a number." << std::endl;
			std::cin.clear();
			std::cin.ignore();
			std::cin >> number[i];
		}
	}

	average = sum/5;

	std::cout << "The average of those numbers is: " << average << std::endl;

	return 0;
}
