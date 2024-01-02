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

int main01() {
	
	Person sp;
	sp.play();
	Student ss;
	ss.play();
	PartimeStudent ps;
	ps.play();
	
	ss = (PartimeStudent)ps;
	ss.play();
	/*sp = (Person)ss;*/
	sp = (Person)ps;
	sp.play();


	return 0;
}