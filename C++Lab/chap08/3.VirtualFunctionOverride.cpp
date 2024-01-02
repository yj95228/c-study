#include <iostream>

using namespace std;

class Person {
public:
	 virtual void play() { cout << "person play " << endl; }
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
	Person* sp = (Person*)new Person();
	sp->play();

	Person* ss = new Student();
	ss->play();

	Person* ps = new PartimeStudent();
	ps->play();

	delete sp;
	delete ss;
	delete ps;



	return 0;
}