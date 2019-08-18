#include <iostream>
#include <stdint.h>
#include <cmath>
#include "Person.hpp"

int stdDev(Person, int);

int main() {
	Person p1 = new Person("Cory", 28);
	Person p1 = new Person("Ez", 27);
	Person p1 = new Person("Katie", 25);

	Person array[] = {p1, p2, p3};

	int size;
	size = sizeof(array)/sizeof(array[0]);

	stdDev(array, size);

	return 0;
}

int stdDev(Person *array[], int size) {
	int sum = 0;
	int mean;
	int stdDev;

	for(int i = 0; i < size; ++i) {
		sum += array[i].getAge();
	}

	mean = sum/size;

	for(int j = 0; j < size; ++j) {
		stdDev += pow(array[j].getAge() - mean, 2);
	}

	return sqrt(stdDev/size);
}
