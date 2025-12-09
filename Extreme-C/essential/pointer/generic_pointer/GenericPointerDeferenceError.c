#include <stdio.h>

int main(int argc, char** argv) {
	int var = 9;
	int* ptr = &var;
	void* gptr = ptr;
	printf("%d\n", *gptr);		/* Error: dereferencing a generic pointer */

	return 0;
}