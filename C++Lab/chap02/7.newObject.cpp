#include <iostream>
using namespace std;

typedef struct profile {
	int a = 10;
	void print() {
		cout << a << endl;
	}
} Profile;

class Person {
private:
protected:
public:
	int a;
	void print() {
		cout << a << endl;
	}
};

int main() {
	Profile p;
	p.a = 20;
	p.print();

	// c style
	Person* p3 = (Person*)malloc(sizeof(Person));
	p3->a = 30;
	p3->print();
	free(p3);

	// c++ style
	// ���� ���� ���
	Person p2;
	p2.a = 10;
	cout << p2.a;
	p2.print();

	// ���� ���� ���
	Person* p4 = new Person; // Person() ��ȣ ���̵� �� ���̵� ����
	p4->a = 50;
	p4->print();
	delete p4;
	return 0;
}