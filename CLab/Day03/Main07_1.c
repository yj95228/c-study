#include <stdio.h>
#include <string.h>
extern int g;

void func2() {
	int d = 10;
	printf("%d %d \n", d, g);
}