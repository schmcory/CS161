#include <iostream>
#include <stdint.h>
#include <iomanip>

int main() {
	int cents;			//cents variable holds the number of cents entered by the user
	int q, d, n, p;		//q, d, n, p holds amount of quarters, dimes, nickles, pennies

	std::cout << "Please enter an amount in cents less than a dollar." << std::endl;
	std::cin >> cents;

	//input validation
	while(std::cin.fail() || !(cents > 0 && cents <= 99)) {
		std::cout << "Please only enter a number between 0 and 99." << std::endl;
		std::cin.clear();
		std::cin.ignore();
		std::cin >> cents;
	}

		//find minimum number of coins
		q = cents/25;			//divide by 25
		cents %= 25; 			//find remainder

		d = cents/10;			//divide by 10
		cents %= 10;			//find remainder

		n = cents/5;			//divide by 5
		cents %= 5;				//find remainder

		p = cents/1;			//divide by 1

		//output statements
		std::cout << "Your change will be" << std::endl;
		std::cout << "Q: " << q << std::endl;
		std::cout << "D: " << d << std::endl;
		std::cout << "N: " << n << std::endl;
		std::cout << "P: " << p << std::endl;

	//terminate main()
	return 0;
}
