#include <iostream>
#include <stack>
#include <string>
#include "Person.h"
/*
	stack
	FILO �� �ڷᱸ��
	push, pop, top 

*/
int main() {
	stack<Person*> s;
	s.push(new Person("�Ѹ�", 7));
	s.push(new Person("�����", 8));
	s.push(new Person("��ġ", 9));

	s.top()->printPerson() ;
	s.pop();
	s.top()->printPerson();
	return 0;
}
