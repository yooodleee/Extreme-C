#include <stdio.h>

#define CODE \
printf("%d\n", i);			/* use of undeclared identifier 'i' */

int main(int argc, char** argv) {
	CODE
	return 0;
}