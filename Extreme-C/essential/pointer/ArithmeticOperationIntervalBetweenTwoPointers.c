#include <stdio.h>

int main(int argc, char** argv) {
	int var = 1;

	int* int_ptr = NULL;
	int_ptr = &var;

	char* char_ptr = NULL;
	char_ptr = (char*)&var;

	printf("Before arithmetic: int_ptr: %u, char_ptr: %u\n", (unsigned int)int_ptr, (unsigned int)char_ptr);

	int_ptr++;		/* general arithmentic step size: 4 byte */
	char_ptr++;		/* char arithmetic step size: 1 byte */

	printf("After arithmetic: int_ptr: %u, char_ptr: %u\n", (unsigned int)int_ptr, (unsigned int)char_ptr);

	return 0;
}

// Output:
/*
Before arithmetic: int_ptr: 2400188084, char_ptr: 2400188084
After arithmetic: int_ptr: 2400188088, char_ptr: 2400188085
*/