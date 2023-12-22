#include <stdio.h>
#include <string.h>
void func4(int** arr2) {
	// 2차원 배열을 이중포인터로 지정했기 때문에 에러가 남
	//printf("%d %d\n", arr2[0][0], arr2[1][0]);
}
void func5(int(*arr2)[2]) {
	// 2차원 배열을 이중포인터로 지정했기 때문에 에러가 남
	printf("%d %d\n", arr2[0][0], arr2[1][0]);
}
void func6(int** arr2) {
	printf("%d %d\n", **arr2, *((*arr2 + 1) + 1));
}
int main09() {
	// 일차원배열
	int arr[5];
	printf("%u %u %u %u\n", arr, &arr, arr + 1, &arr + 1);
	// 이차원배열
	int arr2[2][2] = { {1,3},{5,7} };
	printf("%u %u %u %u\n", arr2, &arr2, arr2[1], &arr2[1]);
	int* p = arr2;
	printf("%d %d\n", *p, *(p + 2));
	// 2차원 배열을 이중포인터로 지정했기 때문에 에러가 남
	//func4(arr2);
	// 배열포인터
	// 배열포인터는 1차원 포인터변수입니다
	int(*ap)[2] = arr2;
	printf("%u %u %u %u %u\n", arr2, ap, ap + 1, (*ap) + 1, (*(ap + 0) + 1));
	func5(arr2);
	int** pp = &ap;
	printf("%d %d\n", **pp, *((*pp + 1) + 1));

	func6(&ap);
	return 0;
}