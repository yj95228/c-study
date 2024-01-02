#include <iostream>

using namespace std;

class Person {
public:
	void play() { cout << "person play " << endl; }
};
class Student : public Person {
public:
	void play() { cout << "student play " << endl; }
	void study() { cout << " study " << endl; }
};
class PartimeStudent : public Student {
public:
	void play() { cout << "partimeStudent play " << endl; }
	void work() { cout << " work " << endl; }
};

int main() {
	Person* sp = new Person();
	sp->play();

	Student* ss = new Student();
	ss->play();

	PartimeStudent* ps = new PartimeStudent();
	ps->play();

	delete sp;
	delete ss;
	delete ps;

	

	return 0;
}