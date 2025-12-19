#include <stdio.h>
#include "HeaderFileOfAvgFunction.h"

int main(int argc, char** argv) {
	// declare array
	int array[5];

	// fill array
	array[0] = 10;
	array[1] = 3;
	array[2] = 5;
	array[3] = -8;
	array[4] = 9;

	double average = avg(array, 5, NORMAL);
	printf("The average: %f\n", average);

	average = avg(array, 5, SQUARED);
	printf("The squared average: %f\n", average);

	return 0;
}