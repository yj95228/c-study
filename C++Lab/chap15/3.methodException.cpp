#include <iostream>

using namespace std;

void calc(int a, int b) {
	if (b == 0) {
		throw b;
	}
	cout << "���� " << a / b << endl;
	cout << "�������� " << a % b << endl;
}

int main03() {
	int a, b;
	cout << "�� ���� �Է��ϼ���" << endl;
	cin >> a >> b;

	try {
		calc(a, b);
		cout << "calc �Լ� ����" << endl;
	}
	catch (int ex) {
		cout << "����� " << ex << "�� �� �����ϴ�" << endl;
	}

	cout << "end of main" << endl;

	return 0;
}