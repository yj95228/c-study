#include <iostream>
#include "Person.h"
using namespace std;

class Person;
class Gun {
private:
	int bullet;
public:
	Gun(int bullet): bullet(bullet) {}
	Gun() {}
	void shot() {
		bullet--;
		cout << "����" << endl;
	}
};
class Police : public Person {
public:
	Gun g;
	Person pp;
	Police() {};
	void policeShot() {
		g.shot();
	}
};
int main() {
	Police pol;
	pol.policeShot();
	pol.pp.setName("�浿");
	return 0;
}