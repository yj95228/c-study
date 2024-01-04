#include <iostream>
#include <set>
#include <algorithm>
#include "Person.h"
using namespace std;
/*
	set 
		���Ұ� �ߺ����� �ȴ´�
		������ �ȴ�
		insert �Լ��� ���Եȴ�
		�ߺ��� ������� �ȴ´�
		�׷��� �߰��Ǵ� �ߺ�����Ÿ�� ���õȴ�
*/

template <typename T>
void print(set<T>&s) {
	for (Person* p : s){
		p->printPerson();
	}
	cout << endl << endl;
}


int main() {
	set<Person*> sets;
	Person* p1 = new Person("�Ѹ�", 7);
	Person* p2 = new Person("�����", 8);
	Person* p3 = new Person("��ġ", 9);
	
	sets.insert(p1);
	sets.insert(p2);
	sets.insert(p3);

	print(sets);
	// �ߺ��� ���õȴ�
	sets.insert(p2);
	print(sets);

	// ã�� (�Ѹ�)
	// set<Person*>::iterator itr = sets.find(p1);
	// (*itr)->printPerson();
	// ã�� (�����)
	auto itr = sets.find(p2);
	(*itr)->printPerson();
	
	return 0;
}
