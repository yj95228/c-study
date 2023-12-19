#include <stdio.h>

int main07() {
	int a = 10;
	int arr[2] = { 1, 2 };
	printf("%d %u %d %u\n", a, &a, arr[0], arr);

	// + 연산
	printf("%d %u %d %u %d %d %d\n", a+1, (&a)+1, arr[0]+1, arr+1, *arr, *(arr+1), *(arr+2));

	// 주소연산의 주의점 -> 아래와 같은 코드 lvalue error
	// arr++;
	// (&a)++;
	return 0;
}