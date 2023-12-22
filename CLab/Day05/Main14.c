#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

// ����ü ����Ʈ �迭�� �Լ� ���� ����
void printPerson4(Person** ps, int size) {
	for (int i = 0; i < size; i++) {
		printf("%s %d %s\n", (*ps[i]).name, ps[i]->age, (*(ps + i))->addr);
	}
}

// ����ü ����Ʈ �迭
int main14() {
	Person p1 = {"�Ѹ�",7,"�ֹ���"};
	Person p2 = {"��ġ",8,"�ֹ���"};
	Person p3 = {"�����",9,"�ֹ���"};

	Person* ps[3];
	ps[0] = &p1;
	ps[1] = &p2;
	ps[2] = &p3;

	for (int i = 0; i < 3; i++) {
		printf("%s %d %s\n", (*ps[i]).name, ps[i]->age, (*(ps+i))->addr);
	}
	int size = sizeof(ps) / sizeof(Person*);
	printPerson4(ps, 3);
	return 0;
}