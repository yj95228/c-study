#include <iostream>

using namespace std;

int main02() {
	int a, b;
	cout << "�� ���� �Է��ϼ���" << endl;
	cin >> a >> b;

	try {
		if (b == 0) {
			throw b;
			return 0;
		}
	}
	catch (int ex) {
		cout << "����� " << ex << "�� �� �����ϴ�" << endl;
	}

	cout << "���� " << a / b << endl;
	cout << "�������� " << a % b << endl;

	return 0;
}