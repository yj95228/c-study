#include <stdio.h>
#define SUM(a,b) ((a)+(b))
#define MUL(a,b) ((a)*(b))

int main02() {
	int a = 10;
	int b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b));
	printf("x * y = %d\n", MUL(x, y));
}