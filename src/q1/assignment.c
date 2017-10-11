#include <stdio.h>

int main(int arg, char* argc[]) {
	int a;
	int* b;
	long c;
	double *d;
	char **e;

	printf("'int a' has a size of %d bytes.\n", sizeof(a));
	printf("'int* b' has a size of %d bytes.\n", sizeof(b));
	printf("'long c' has a size of %d bytes.\n", sizeof(c));
	printf("'double *d' has a size of %d bytes.\n", sizeof(d));
	printf("'char **e' has a size of %d bytes.\n", sizeof(e));
	return 0;
}