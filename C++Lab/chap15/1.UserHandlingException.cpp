#include <iostream>

using namespace std;

int main01() {
	int a, b;
	cout << "�� ���� �Է��ϼ���" << endl;
	cin >> a >> b;

	if (b == 0) {
		cout << "����� 0�� �� �����ϴ�" << endl;
		return 0;
	}
	cout << "���� " << a / b << endl;
	cout << "�������� " << a % b << endl;

	return 0;
}