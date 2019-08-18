#include "taxicab.hpp"	
#include <iostream>
#include <stdint.h>
#include <cstdlib>

/*
	Expected Output: 3
	Expected Output: -1
	Expected Output: 4
	Expected Output: -1
	Expected Output: 4
	Expected Output: 8
*/

int main() {
	//Taxicab object tests the defaults
	Taxicab cab1;

	//Taxicab object tests inputs			
	Taxicab cab2(5, -8);	

	//Taxicab object function call sets how far the x coordinate should move
	cab1.moveX(3);

	//Taxicab object function call sets how far the y coordinate should move		
	cab1.moveY(-1);	

	//Taxicab object function call sets how far the x coordinate should move		
	cab2.moveX(-1);		

	//Taxicab object function call sets how far the y coordinate should move		
	cab2.moveY(7);	

	std::cout << "X-coordinates: " << cab1.getXCoords() << std::endl;			
	std::cout << "Y-coordinates: " << cab1.getYCoords() << std::endl;
	std::cout << "X-coordinates: " << cab2.getXCoords() << std::endl;
	std::cout << "Y-coordinates: " << cab2.getYCoords() << std::endl;
	std::cout << "Distance traveled: " << cab1.getDistanceTraveled() << std::endl; 
	std::cout << "Distance traveled: " << cab2.getDistanceTraveled() << std::endl;
}
