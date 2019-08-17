    

#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <cmath>

int smallSort(int &, int &, int &);	//function prototype

int main() {
	int a = 14;
	int b = -90;
	int c = 2;

	smallSort(a,b,c);

	std::cout << a << "," << b << "," << c << std::endl;

	return 0;
}


int smallSort(int &a, int &b, int &c) {
	if(a > b) {
		int tmpa;
		tmpa = a;
		a = b; 
		b = tmpa;
	}

	if(b > c) {
		int tmpb;
		tmpb = b;
		b = c;
		c = tmpb;
	}
	return 0;
}
