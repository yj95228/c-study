#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

typedef unsigned int UINT;
typedef struct person Person;

Person printPerson(Person p) {
	printf("�̸� : %s, ���� : %d, �ּ� : %s\n", p.name, p.age, p.addr);
	return p;
}

int main08() {
	UINT a = 10;
	printf("%d\n", a);

	Person p = {"�Ѹ�",7,"�ֹ���"};
	printPerson(p);
	Person p1 = { "��ġ",9,"�ֹ���" };
	printPerson(p1);
	return 0;
}