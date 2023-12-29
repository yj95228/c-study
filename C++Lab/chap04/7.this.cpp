#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

// this : 자기 객체 주소로 가지는 변수
class ThisTest {
public:
	int a;
	ThisTest() {
		this->a = a;
	}
	void print() {
		this->
		a = 10;
	}
	ThisTest* aa() {
		cout << "aa" << endl;
		return this; // = new ThisTest()
	}
	ThisTest* bb() {
		cout << "bb" << endl;
		return this; // = new ThisTest()
	}
	ThisTest* cc() {
		cout << "cc" << endl;
		return this; // = new ThisTest()
	}
};

int main07() {
	ThisTest t;
	t.a = 10;
	ThisTest t1;
	t1.aa()->bb()->cc();

	ThisTest* t2 = new ThisTest;

	return 0;
}