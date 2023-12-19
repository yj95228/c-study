#include <stdio.h>
#include <stdlib.h>
#include "myfunction.h"

int main01() {
	int a = 10, b = 5;
	int res1, res2, res3, res4;

	res1 = sum(a, b);
	res2 = minus(a, b);
	res3 = cross(a, b);
	res4 = division(a, b);
	printf("%d + %d = %d\n", a, b, res1);
	printf("%d - %d = %d\n", a, b, res2);
	printf("%d * %d = %d\n", a, b, res3);
	printf("%d / %d = %d\n", a, b, res4);
	return 0;
}