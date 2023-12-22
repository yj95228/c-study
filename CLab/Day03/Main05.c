#include <stdio.h>

int main05() {
	int a = 10;
	int* pa = &a;

	// 이중 포인터 변수
	int** ppa = &pa;
	printf("%u %u %u %u\n", &a, pa, &pa, ppa);
	printf("%d %d\n", *pa, **ppa);

	int arr1[] = {1,3,5};
	int arr2[] = {2,4,6,8,10};
	int* parr[2] = { arr1, arr2 };

	ppa = parr;
	printf("%d %d\n", **ppa, *(*(ppa+1)+2));
	printf("%d %d\n", ppa[0][0], ppa[1][2]);


	return 0;
}