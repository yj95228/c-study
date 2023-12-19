#include <stdio.h>

void printArr(int* arr) {
	printf("printArr : %d\n", sizeof(arr));
}

int main() {
	int a = 10;
	// 포인터 변수: 주소를 담는 변수
	int* p = &a;
	printf("%d %u %u %d %d\n", a, &a, p, *p, **&p); // 10 1072691028 1072691028 10 10

	a++;
	(*p)++;
	printf("%d\n", a);

	int b = 5;
	p = &b;
	(*p)++;
	printf("%d %d\n", a, b);

	int* q = &a;
	int res = *p + *q;
	printf("%d\n", res);

	long long c = 123;
	printf("%d %d %d\n", sizeof(c), sizeof(a), sizeof(p));

	int arr[5];
	printf("main : %d\n", sizeof(arr));
	printArr(arr);
	return 0;
}