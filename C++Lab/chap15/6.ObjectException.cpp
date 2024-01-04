#include <iostream>
using namespace std;

class ExceptionA {
public:
	void print() {
		cout << "ExceptionA" << endl;
	}
};
class ExceptionB {
public:
	void print() {
		cout << "ExceptionB" << endl;
	}
};

void second();
void third();
void first() {
	cout << "First Function" << endl;
	second();
	cout << "End of First Function" << endl;
}
void second() {
	cout << "Second Function" << endl;
	try {
		third();
	}
	catch (ExceptionA ex) {
		cout << "Second function �����Դϴ�" << endl;
		ex.print();
	}
	cout << "End of Second Function" << endl;
}
void third() {
	cout << "Third Function" << endl;
	//throw ExceptionA();
	throw ExceptionB();
	cout << "End of Third Function" << endl;
}

int main() {
	try {
		first();
	}
	catch (int ex) {
		cout << "Main �Լ� int catch �Դϴ�" << endl;
		cout << "�Ѿ�� ���� " << ex << "�Դϴ�" << endl;
	}
	catch (char ex) {
		cout << "Main �Լ� char catch �Դϴ�" << endl;
		cout << "�Ѿ�� ���� " << ex << "�Դϴ�" << endl;
	}
	catch (ExceptionA ex) {
		ex.print();
	}
	catch (ExceptionB ex) {
		ex.print();
	}
	cout << "End of Main Function" << endl;
	return 0;
}