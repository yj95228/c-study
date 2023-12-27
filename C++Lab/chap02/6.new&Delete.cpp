#include <iostream>
using namespace std;
int main06() {
	// c style
	// 정적으로 선언
	int arr[3];
	// 동적으로 선언
	int* pa = (int*)malloc(sizeof(int) * 3);
	free(pa);

	// c++ style;
	// 정적으로 선언
	int arr1[3];
	// 동적으로 선언
	int* pa2 = new int[3];
	pa2[0] = 10;
	pa2[1] = 20;
	pa2[2] = 30;
	cout << pa2[0] << "," << pa2[1] << "," << pa2[2] << endl;
	delete[] pa2;
	return 0;
}