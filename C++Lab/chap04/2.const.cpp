#include <iostream>

using namespace std;

class Test1 {
public:
	int a=10;
	void change() const {
		a; // a++
		cout << a << endl;
	}
};

int main02() {
	int a = 10;
	const int b = 20;
	// b = 30;
	const int * const pb = &b; // ������ ���� �ڿ��� const �ٿ��� ��
	// pb = &a;
	cout << *pb << endl;

	Test1 t;
	t.change();
	return 0;
}