#include <iostream>

using namespace std;

class First {
private:
	int num1, num2;
public:
	First(int num1 = 0, int num2 = 0) :num1(num1), num2(num2) { cout << "init 생성자" << endl; }
	First(First& f) :num1(f.num1), num2(f.num2) { cout << "복사 생성자" << endl; }
	First operator=(const First& f) {
		cout << "first 대입연산자" << endl;
		this->num1 = f.num1;
		this->num2 = f.num2;
		return *this;
	}
	void print() {
		cout << num1 << "," << num2 << endl;
	}
};
class Second {
private:
	First f;
public:
	Second(First& f) : f(f) {}
};
class Third {
private:
	First f;
public:
	Third(First& f) {
		this->f = f;
	}
};
int main03() {
	First f(10, 20);
	cout << "-----------------" << endl;
	Second s(f);
	cout << "-----------------" << endl;
	Third t(f);
	return 0;
}