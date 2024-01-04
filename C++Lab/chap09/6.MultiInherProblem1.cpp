#include <iostream>

using namespace std;

class Father {
public:
	virtual void print() { cout << "father print" << endl; }
};
class Mother {
public:
	virtual void print() { cout << "mother print" << endl; }
};
class Son : public Father, public Mother {
public:
	virtual void print() {
		Father::print();
		cout << "son print" << endl;
		Mother::print();
	}
};
int main06() {
	Father* f = new Father();
	f->print();

	Mother* m = new Mother();
	m->print();
	
	Son* s = new Son();
	s->print();

	return 0;
}