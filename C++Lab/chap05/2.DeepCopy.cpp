#include <iostream>
#include "Sample.h"

using namespace std;
class DeepCopy {
private:
	int a;
	char* name;
public:
	DeepCopy() {}
	DeepCopy(int a, char* name): a(a), name(name) {
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	DeepCopy(const DeepCopy& s) : a(s.a) {
		this->name = new char[strlen(s.name) + 1];
		strcpy(this->name, s.name);
	}
	void print() const {
		cout << a << "," << name << endl;
	}
	~DeepCopy() {
		delete name;
	}
};

DeepCopy copy1(DeepCopy c) {
	return c;
}
int main02() {
	char name[] = "abc";
	DeepCopy d(10, name);
	d.print();

	name[0] = 'h';
	d.print();

	DeepCopy f(20, name);
	DeepCopy g = copy1(f);
	return 0;
}