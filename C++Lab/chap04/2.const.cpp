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
	const int * const pb = &b; // 포인터 변수 뒤에도 const 붙여야 됨
	// pb = &a;
	cout << *pb << endl;

	Test1 t;
	t.change();
	return 0;
}