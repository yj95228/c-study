#include <iostream>
#include <array>
#include <algorithm>

bool compare(int a, int b) { return a > b; }

using namespace std;
int main() {
	//int arr[] = { 1,3,5,7 };
	array<int, 6> arr = { 1,2,3,4,5,6 };
	sort(arr.begin(), arr.end(), compare);
	for (auto i : arr) {
		cout << i << " ";
	}
	cout << endl;

	// vector �� sort �Լ��� ����Ѵ�
	// ����Ʈ�� ��ü ������ �ִ�

	return 0;
}