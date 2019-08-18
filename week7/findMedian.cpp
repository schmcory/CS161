#include <iostream>
#include <stdint.h>
#include <algorithm>

double findMedian(int [], int);

int main() {
	int array[] = {23, 5, -10, 0, 0, 321, 1, 2, 99, 30};

	int size;
	size = sizeof(array)/sizeof(array[0]);

	std::cout << "Size: " << size << std::endl;
	std::sort(array, array + size);

	std::cout << "Sorted Array: ";
	for(int i = 0; i < size; i++) {
		std::cout << array[i] << ' ';
	}

	std::cout << std::endl;

	std::cout << "Meadian: " << findMedian(array, size) << std::endl;

	return 0;
}

double findMedian(int array [], int size) {
	double median;

	if(size % 2 == 0) {
		median = (double)(array[(size - 1)/2] + array[size/2])/2;
	}

	else {
		median = (double)array[size/2];
	}

	return median;
}
