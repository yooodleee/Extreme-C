int main(int argc, char** argv) {
	int var = 100;
	int* ptr = 0;		/* null pointer */
	ptr = &var;			/* reference operator & */
	*ptr = 200;			/* dereference pointer * */

	return 0;
}