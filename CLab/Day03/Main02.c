#include <stdio.h>

void fa(int arr[], int size) {
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	printf("fa : %d %d\n", sizeof(arr), size);

	for (int i = 0; i < size; i++) {
		printf("%d \t", *(arr + i));
	}
	printf("\n");
}

void fStr(char* str) {
	printf("%s\n", str);
}

int main02() {
	int arr[] = { 1,3,5 };
	int* pa = arr;

	printf("%u %u\n", pa, arr);
	printf("%d %d\n", *(pa+0), pa[0]);
	printf("%d %d\n", *(pa+1), pa[1]);
	printf("main: %d\n", sizeof(arr));
	int size = sizeof(arr) / sizeof(int);
	fa(arr, size);

	char str[] = "hello";
	char* ps = str;
	printf("%c %s\n", *ps, ps);
	fStr(str);

	return 0;
}