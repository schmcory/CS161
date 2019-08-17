#include <iostream>
#include <stdint.h>

void inputValidation(int);

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
    	while(std::cin.fail()) {
   			inputValidation(soilCost);
   			std::cin >> soilCost;
    	}

    	//Asks user for cost of flower seeds
    	std::cout << "What do the flower seeds cost?" << std::endl;
    	std::cout << "$";
    	std::cin >> flowerSeedsCost;

    	//input validation
    	while(std::cin.fail()) {
    		inputValidation(flowerSeedsCost);
     		std::cin >> flowerSeedsCost;   		
    	}

    	//Asks user for cost of fence
   		std::cout << "What does the fence cost?" << std::endl;
    	std::cout << "$";
    	std::cin >> fenceCost;

    	//input validation
    	while(std::cin.fail()) {
    		inputValidation(fenceCost); 
     		std::cin >> fenceCost;
    	}   

    //test input
    //std::cout << "soil cost: $" << soilCost << " flower seeds cost: $" << flowerSeedsCost << " fence cost: $" << fenceCost << std::endl;	   

    //calculates the total cost
    totalCost = soilCost + flowerSeedsCost + fenceCost; 

    //prints total cost
    std::cout << "The total cost of the garden center is $" << totalCost << "." << std::endl;
    
    //terminates program
    return 0;
}

void inputValidation(int input) {
    	if(std::cin.fail()) {
    		std::cout << "Please only enter a number." << std::endl;
    		std::cin.clear();
    		std::cin.ignore();
    		std::cout << "$"; 
    	}
    	return;
}
