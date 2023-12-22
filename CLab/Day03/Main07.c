#include <stdio.h>
#include <string.h>

// 변수의 life scope

// 전역변수
int g = 100;

void func1() {
	// func1의 지역변수
	int a = 20;
	int c = 40;
	printf("%d %d %d\n", a, c, g);
}

int main07() {
	// main의 지역변수
	int a = 10;
	int b = 30;
	printf("%d %d %d\n", a, b, g);
	func1();
	func2();
	return 0;
}