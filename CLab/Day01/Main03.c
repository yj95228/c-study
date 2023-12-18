#include <stdio.h>

int main03() {
	char a = 'A';
	printf("%c\n", a);
	printf("%d\n", a);
	printf("%o\n", a);
	printf("%x\n", a);

	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(a));
	printf("%3d\n", 1234567);
	return 0;
}