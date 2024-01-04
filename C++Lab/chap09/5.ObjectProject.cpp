#include <iostream>

using namespace std;
class IFly {
public:
	virtual void fly() = 0;
};
class Animal {
public:
	virtual void eat() = 0;
};
class Dog : public Animal {
public:
	void eat() {
		cout << "���� �Խ��ϴ�" << endl;
	}
	void bark() {
		cout << "¢���ϴ�" << endl;
	}
};
class Human : public Animal {
public:
	void eat() {
		cout << "����� �Խ��ϴ�" << endl;
	}
};
class Bird : public Animal, public IFly {
public:
	void eat() {
		cout << "���� �Խ��ϴ�" << endl;
	}
	void fly() {
		cout << "���� ���ƴٴմϴ�" << endl;
	}
};
class Superman : public Human, public IFly {
public:
	void eat() {
		cout << "����� �Խ��ϴ�" << endl;
	}
	void fly() {
		cout << "���۸��� ���ƴٴմϴ�" << endl;
	}
};

void toEat(Animal* a) {
	a->eat();
}
void toFly(IFly* f) {
	f->fly();
}
int main05() {
	// Animal* a = new Animal();

	Dog* d = new Dog();
	Bird* b = new Bird();
	Human* h = new Human();
	Superman* s = new Superman();

	toEat(d);
	toEat(b);
	toEat(h);
	toEat(s);

	toFly(b);
	toFly(s);

	return 0;
}