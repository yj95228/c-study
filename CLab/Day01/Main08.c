#include <stdio.h>
#include <stdlib.h>

int main08() {
	int a = 1;
	// 0000000 00000000 00000000 00000001
	a = 2;
	// 0000000 00000000 00000000 00000010
	a = 4;
	// 0000000 00000000 00000000 00000100

	a = a >> 1;
	printf("%d\n", a);
	a = a << 2;
	printf("%d\n", a);
	return 0;
}