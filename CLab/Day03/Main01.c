#include <stdio.h>

int main01() {
	char a = 'f';
	char* pa = &a;

	printf("%u %u\n", &a, pa);
	a++;
	printf("%c\n", a);
	(*pa)++;
	printf("%c\n", *pa);
	printf("%d %d\n", sizeof(a), sizeof(pa));

	int b = 10;
	int c = 5;
	int* pb = &b;
	printf("%d\n", *pb);
	return 0;
}