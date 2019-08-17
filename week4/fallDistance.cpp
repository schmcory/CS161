    

#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <cmath>

int fallDistance(double);	//function prototype

int main() {
	fallDistance(3.2);		//call fallDistance function, pass 3.2 as fallingTime
}

int fallDistance(double fallingTime) {
	double t;			//variable holds the time 
	t = fallingTime;	//set equal to falling time parameter passed

	double d;
	d = .5 * 9.8 * (pow(t,2));		//set d vartiable equal to the distance fallen 
	std::cout << d << std::endl;	//print distance to the console

	return d;	//return distance
}
