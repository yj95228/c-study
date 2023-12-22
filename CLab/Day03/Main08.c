#include <stdio.h>

// int** parrs = arrs;
void func3(int** arrs) {
	printf("%d %d %d\n", arrs[0][0], arrs[1][2], arrs[2][0]);
	printf("%d %d %d\n", **arrs, *(*(arrs+1)+2), **(arrs+2));
	printf("%d\n", sizeof(arrs));
}

int main08() {
	int arr1[] = { 1,2,3 };
	int arr2[] = { 4,5,6,7,8 };
	int arr3[] = { 9 };
	int* arrs[3] = { arr1, arr2, arr3 };
	printf("%d\n", sizeof(arrs));
	func3(arrs);
	return 0;
}