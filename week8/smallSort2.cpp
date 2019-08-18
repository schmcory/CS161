#include <iostream>
#include <stdint.h>

void smallSort2(int *, int *, int *);

int main() {
	int a = 14;
	int b = -90;
	int c = 2;

	smallSort2(&a, &b, &c);

	std::cout << a << ", " << b << ", " << c << std::endl;
	
}

void smallSort2(int *a, int *b, int *c) {
	if(a > b) {
		int temp = *a;
		*a = *b; 
		*b = temp;
	}

	if(a > c) {
		int temp = *a;
		*a = *c;
		*c = temp; 
	}

	if(b > c) {
		int temp = *b;
		*b = *c;
		*c = temp; 
	}

	return;
}
