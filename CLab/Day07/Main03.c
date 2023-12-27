#include <stdio.h>
#define NAME_CONCAT(x,y) (x ## y)
#define PRINT_VALUE(x) printf(#x " = %d\n", x)
#define PRINT_STR(x) printf(#x)

int main03() {
	int a1, a2;
	NAME_CONCAT(a, 1) = 10;
	NAME_CONCAT(a, 2) = 20;
	printf("%d %d\n", a1, a2);
	PRINT_VALUE(a1 + a2);
	PRINT_STR("문자열 출력입니다\n");
	return 0;
}