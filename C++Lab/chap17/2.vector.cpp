#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

/*
	vector
		�����迭���� (ũ�Ⱑ �ڵ�����)
		push_back, end, begin, back, front, size .......
		push_front �����
*/
class Person {
	string name;
	int age;
public:
	Person(string name, int age) :name(name), age(age) {}
	void print() {
		cout << name << "," << age << endl;
	}
};
int main() {
	vector<Person*> ps;
	ps.push_back(new Person("�Ѹ�", 7));
	ps.push_back(new Person("�����", 7));
	ps.push_back(new Person("��ġ", 7));
	for (vector<int>::size_type i = 0; i < ps.size(); i++) {
		ps[i]->print();
	}
	for (vector<Person*>::iterator itr = ps.begin(); itr != ps.end(); itr++)
	{
		(*itr)->print();
	}
	for_each(ps.begin(), ps.end(), [](Person* p) {p->print(); });
	

	return 0;
}