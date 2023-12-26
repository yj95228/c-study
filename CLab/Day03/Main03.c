#include <stdio.h>

int main03() {
	printf("%u %u %c %c\n", "apple", "apple" + 1, *("apple"+1), "apple"[1]);

	int arr[2][3] = { {1,3,5},{7,9,11} };
	int* p = arr;
	printf("%d %d %d\n", *p, *(p + 2), *(p + 4));
	return 0;
}