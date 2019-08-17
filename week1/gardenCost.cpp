#include <iostream>
#include <stdint.h>
#include <iomanip>

//function prototype
int inputValidation(double &input);

// a simple example program
int main()
{
    double soilCost;			//variable holds cost of soil input by user
    double flowerSeedsCost;		//variable holds cost of flowers input by user 
    double fenceCost;			//variable holds cost of fence input by user
    double totalCost;			//variable holds total cost calculated by the program

    //initial statement prints to introduce the program
    std::cout << "This program will calculate the cost of your garden center." << std::endl;

    	//Asks user for the cost of their soil
    	std::cout << "What does the soil cost?" << std::endl;
    	std::cout << "$";
    	std::cin >> soilCost;

    	//input validation
   		inputValidation(soilCost);

    	//Asks user for cost of flower seeds
    	std::cout << "What do the flower seeds cost?" << std::endl;
    	std::cout << "$";
    	std::cin >> flowerSeedsCost;

    	//input validation
    	inputValidation(flowerSeedsCost);  		

    	//Asks user for cost of fence
   		std::cout << "What does the fence cost?" << std::endl;
    	std::cout << "$";
    	std::cin >> fenceCost;

    	//input validation
    	inputValidation(fenceCost); 

    //test input
    //std::cout << "soil cost: $" << soilCost << " flower seeds cost: $" << flowerSeedsCost << " fence cost: $" << fenceCost << std::endl;	   

    //calculates the total cost
    totalCost = soilCost + flowerSeedsCost + fenceCost; 

    //prints total cost with two decimal places
    std::cout << "The total cost of your garden center is $" << std::setprecision(2) << std::fixed << totalCost << "." << std::endl;
    
    //terminates program
    return 0;
}

//input validation function
int inputValidation(double &input) {
    	while(std::cin.fail()) {
    		std::cout << "Please only enter a number." << std::endl;
    		std::cin.clear();
    		std::cin.ignore();
    		std::cout << "$"; 
    		std::cin >> input;
    	}
    	return input;
}
