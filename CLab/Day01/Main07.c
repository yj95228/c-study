#include <stdio.h>
#include <stdlib.h>

int main07() {
	int a = 5, b = 3;
	int res;
	res = (++a, b++);
	printf("%d\n", res);
	res = a > b ? 100 : 200;
	printf("%d\n", res);
	return 0;
}