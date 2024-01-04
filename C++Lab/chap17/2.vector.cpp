#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

/*
	vector
		동적배열구조 (크기가 자동조절)
		push_back, end, begin, back, front, size .......
		push_front 없어요
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
	ps.push_back(new Person("둘리", 7));
	ps.push_back(new Person("도우너", 7));
	ps.push_back(new Person("또치", 7));
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