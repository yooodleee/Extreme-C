#include <stdio.h>

#define PRINT(a) printf("%d\n", a);
#define LOOP(v, s, e) for (int v = s; v <= e; v++) {
#define ENDLOOP }

int main(int argc, char** argv) {
	LOOP(counter, 1, 10)
		PRINT(counter)
		ENDLOOP
		return 0;
}

// Output:
/*
1
2
3
4
5
6
7
8
9
10
*/