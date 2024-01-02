#include <iostream>

using namespace std;

class Person {
public:
	virtual void play() { cout << "Person play " << endl; }
	virtual ~Person() { cout << "Person �Ҹ���" << endl; }
};

class Student : public Person {
public:
	void play() { cout << "Student play " << endl; }
	void study() { cout << " study " << endl; }
	~Student() { cout << "Student �Ҹ���" << endl; }
};

class PartTimeStudent : public Student {
public:
	void play() { cout << "PartTimeStudent play " << endl; }
	void work() { cout << " work " << endl; }
	~PartTimeStudent() { cout << "PartTimeStudent �Ҹ���" << endl; }
};

int main() {
	Person* sp = (Person*) new Person();
	sp->play();
	Person* ss = new Student();
	ss->play();
	Person* ps = new PartTimeStudent();
	ps->play();

	// delete sp;
	// delete ss;
	delete ps;
	return 0;
}