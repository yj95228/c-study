#include <iostream>
#include <queue>
#include <string>
#include "Person.h"
/*
	queue
	FIFO �� �ڷᱸ��
	front : ���� �տ��� ��Ҹ� ����
	back : ���� �ڿ��� ��Ҹ� ���� 
	pop : ����տ��ִ� ��Ҹ� ������ ����
	push : �ɵڿ� ����
*/
int main() {
	queue<Person*> q;
	q.push(new Person("�Ѹ�", 7));
	q.push(new Person("�����", 8));
	q.push(new Person("��ġ", 9));

	q.front()->printPerson();
	q.pop();
	q.front()->printPerson();
	q.back()->printPerson();
	return 0;
}
