#include <iostream>

using namespace std;

class BaseOne {
public:
	BaseOne() { cout << "BaseOne 持失切" << endl; }
	void baseOneShow() { cout << "BaseOne show" << endl; };
};
class BaseTwo {
public:
	BaseTwo() { cout << "BaseTwo 持失切" << endl; }
	void baseTwoShow() { cout << "BaseTwo show" << endl; };
};
class Drived : public BaseOne, public BaseTwo {
public:
	Drived() { cout << "Drived 持失切" << endl; }
};
int main() {
	Drived* d = new Drived;
	d->baseOneShow();
	d->baseTwoShow();
	delete d;
	return 0;
}