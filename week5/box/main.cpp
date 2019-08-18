#include "Box.hpp"	
#include <iostream>
#include <stdint.h>

/*
	Expected output of box1 volume: 85.2
	Expected output of box1 surface area: 129.08

	Expected output of box2 volume: 1
	Expected output of box2 surface area: 6
*/

int main() {
	//passing parameters to class object, h = 2.4, w = 7.1, l = 5.0
	Box box1(2.4, 7.1, 5.0);

	//passing parameters to class object, default		
	Box box2;	

	//declare variables to test class and call functions					
	double volume1 = box1.calcVolume();
	double surfaceArea1 = box1.calcSurfaceArea();
	double volume2	= box2.calcVolume();
	double surfaceArea2	= box2.calcSurfaceArea();

	std::cout << "Volume of box: " << volume1 << std::endl;
	std::cout << "Surface area of box: " << surfaceArea1 << std::endl;
	std::cout << "Volume of box: " << volume2 << std::endl;
	std::cout << "Surface area of box: " << surfaceArea2 << std::endl;	
}
