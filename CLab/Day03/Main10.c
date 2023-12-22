#include <stdio.h>

int plus(int a, int b) { return a + b;}
int minus(int a, int b) { return a - b; }
int cross(int a, int b) { return a * b; }
int divi(int a, int b) { return a / b; }

int functionPoint(int(*fp)(int, int), int a, int b) {
	return fp(a, b);
}

int main10() {
	printf("%d\n", plus);
	printf("%d\n", minus);
	printf("%d\n", cross);
	printf("%d\n", divi);

	// 함수 포인터
	int (*fp)(int a, int b);
	fp = plus;
	printf("%u %u\n", plus, fp);
	printf("%d %d\n", plus(6,3), fp(6,3));
	fp = minus;
	printf("%d %d\n", minus(6,3), fp(6,3));
	fp = cross;
	printf("%d %d\n", cross(6,3), fp(6,3));
	fp = divi;
	printf("%d %d\n", divi(6,3), fp(6,3));

	int res1 = functionPoint(plus, 6, 3);
	printf("%d\n", res1);
	int res2 = functionPoint(minus, 6, 3);
	printf("%d\n", res2);
	int res3 = functionPoint(cross, 6, 3);
	printf("%d\n", res3);
	int res4 = functionPoint(divi, 6, 3);
	printf("%d\n", res4);
	return 0;
}