#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

// ����ü �Լ� ���ڷ� �ѱ��
void printPerson1(Person p) {
	printf("�̸� : %s, ���� : %d, �ּ� : %s\n", p.name, p.age, p.addr);
	p.age++;
	printf("�̸� : %s, ���� : %d, �ּ� : %s\n", p.name, p.age, p.addr);
}

void printPerson2(Person ps[]) {
	printf("�̸� : %s, ���� : %d, �ּ� : %s\n", ps[0].name, ps[0].age, ps[0].addr);
	ps[0].age++;
	printf("�̸� : %s, ���� : %d, �ּ� : %s\n", ps[0].name, ps[0].age, ps[0].addr);
}

int main11() {
	Person p = { "�Ѹ�",7,"�ֹ���" };
	printPerson1(p);
	printf("main : �̸� : %s, ���� : %d, �ּ� : %s\n", p.name, p.age, p.addr);

	Person p2 = p;
	printf("p2 : �̸� : %s, ���� : %d, �ּ� : %s\n", p.name, p.age, p.addr);
	Person ps[3] = { {"�Ѹ�",7,"�ֹ���"}, {"��ġ",8,"�ֹ���"} , {"�����",9,"�ֹ���"} };
	printPerson2(ps);
	printf("main : �̸� : %s, ���� : %d, �ּ� : %s\n", ps[0].name, ps[0].age, ps[0].addr);
	return 0;
}