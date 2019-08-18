    

#include <iostream>
#include <stdint.h>

void hailstone (int);

int main() {
	hailstone(3); 					//function call, test with n = 3, expected steps = 7
	hailstone(1);					//function call, test with n = 1, expected steps = 0
}

void hailstone (int n) {
	int steps = 0; 
	while(n > 1) {			//while n is greater than 1
		int r;				//r variable is the remainder of n 
		r = n % 2;			//r holds the remainder of n divided by 2

		std::cout << n << " ";	//print n

		if(r == 0) {			//if r == 0, remainder of n/2 
			n /= 2;				//divide n by 2	
		}

		else {
			n = n * 3 + 1;		//else multiply by 3 and 1
		}

		steps++; 				//increment steps
	}

	std::cout << std::endl;
	std::cout << steps << std::endl; 	//print steps

	return;
}
