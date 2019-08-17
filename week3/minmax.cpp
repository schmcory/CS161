#include <iostream>
#include <stdint.h>
#include <iomanip>

int main() {
	int numbers;	//numbers variable holds the number of integers the user wants to enter
	int n;			//n variable holds the the numbers the user wants to enter
	int min;		//min variable holds the minumum variable 
	int max;		//max variable holds the maximum variable

	std::cout << "How many integers would you like to enter?" << std::endl;
	std::cin >> numbers;

	std::cout << "Please enter " << numbers << " integers" << std::endl;

	//for loop collects all the numbers the user wants to enter
	for(int i = 0; i < numbers; i++) {
		std::cin >> n;

		//if statement finds the max
		if(n > max) {
			max = n;
		}

		//else if statement finds the min
		else if (n < min) {
			min = n;
		}
	}

	//min and max statement
	std::cout << "min: " << min << "\nmax: " << max << std::endl;

	//terminate main()
	return 0;
}
