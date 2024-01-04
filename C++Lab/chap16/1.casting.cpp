#include <iostream>

using namespace std;

class Father {
public:
	virtual void print() {
		cout << "Print Father" << endl;
	}
};
class Son : public Father {
public:
	void print() {
		cout << "Print Son" << endl;
	}
};

int main01() {
	Father* f = new Son();
	f->print();
	Son* s = (Son*)f;
	s->print();
	return 0;
}