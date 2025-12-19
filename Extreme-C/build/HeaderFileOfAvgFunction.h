#ifndef HEADER_FILE_OF_AVG_FUNCTION
#define HEADER_FILE_OF_AVG_FUNCTION

typedef enum {
	NONE,
	NORMAL,
	SQUARED
} average_type_t;

// declare function
double avg(int*, int, average_type_t);

#endif 