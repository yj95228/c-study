#include <iostream>
using namespace std;
int main06() {
	// c style
	// �������� ����
	int arr[3];
	// �������� ����
	int* pa = (int*)malloc(sizeof(int) * 3);
	free(pa);

	// c++ style;
	// �������� ����
	int arr1[3];
	// �������� ����
	int* pa2 = new int[3];
	pa2[0] = 10;
	pa2[1] = 20;
	pa2[2] = 30;
	cout << pa2[0] << "," << pa2[1] << "," << pa2[2] << endl;
	delete[] pa2;
	return 0;
}