#include <iostream>

using namespace std;

class Base {
public:
	Base() { cout << "Base" << endl; }
	virtual ~Base() { cout << "~Base" << endl; }
};
class Sub1 : virtual public Base {
public:
	Sub1() { cout << "Sub1" << endl; }
	virtual ~Sub1() { cout << "~Sub1" << endl; }
};
class Sub2 : virtual public Base {
public:
	Sub2() { cout << "Sub2" << endl; }
	virtual ~Sub2() { cout << "~Sub2" << endl; }
};
class Dei : public Sub1, public Sub2 {
public:
	Dei() { cout << "Dei" << endl; }
	virtual ~Dei() { cout << "~Dei" << endl; }
};

int main() {
	// Base b;
	// Sub2 b;
	Dei d;
	return 0;
}