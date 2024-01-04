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
		cout << "개가 먹습니다" << endl;
	}
	void bark() {
		cout << "짖습니다" << endl;
	}
};
class Human : public Animal {
public:
	void eat() {
		cout << "사람이 먹습니다" << endl;
	}
};
class Bird : public Animal, public IFly {
public:
	void eat() {
		cout << "새가 먹습니다" << endl;
	}
	void fly() {
		cout << "새가 날아다닙니다" << endl;
	}
};
class Superman : public Human, public IFly {
public:
	void eat() {
		cout << "사람이 먹습니다" << endl;
	}
	void fly() {
		cout << "슈퍼맨이 날아다닙니다" << endl;
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