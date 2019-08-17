#include <iostream>
#include <stdint.h>
#include <iomanip>

int main() {
	double number[5];       //array variable holds five numbers entered by the user
    	double sum;             //sum variable holds the sum of the numbers
	double average;         //average variable holds the average of the 5 numbers

	std::cout << "Please enter five numbers: " << std::endl;

    //for loop adds numbers the the array and adds them up
	for(int i=0; i < 5; i++) {
		std::cin >> number[i];
       		sum += number[i];;

        //input validation
		if(std::cin.fail()) {
			std::cout << "Please only enter a number." << std::endl;
			std::cin.clear();
			std::cin.ignore();
			i -= 1;
		}
	}

    	//average is the sum of all of the numbers divided by 5
	average = sum/5;

    	//for testing purposes
    	//std::cout << "The sum of these numbers are: " << sum << std::endl;

    	//final print statement
	std::cout << "The average of those numbers is: " << average << std::endl;

    	//terminate program
	return 0;
}
