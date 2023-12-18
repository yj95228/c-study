#include <stdio.h>
#include <stdlib.h>

int main04() {
	int a = 10;
	int b = 20;
	int c;

	c = a + b;
	printf("%d\n", c);		// 값
	printf("%u\n", &c);		// 주소
	printf("%u\n", *&c);	// 주소에 해당하는 값
	return 0;
}