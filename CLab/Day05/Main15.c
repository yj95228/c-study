#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"
#include "student.h"

// ����ü�� ���� �޸� ����
int main15() {
	Person* p = (Person*)malloc(sizeof(Person));
	strcpy(p->name, "�Ѹ�");
	p->age = 7;
	strcpy(p->addr, "�ֹ���");
	printf("%s %d %s \n", p->name, p->age, p->addr);
	free(p);

	Student* s = (Student*)malloc(sizeof(Student));
	s->addr = (char*)malloc(strlen("�ֹ���"));
	strcpy(s->name, "��ġ");
	s->age = 8;
	strcpy(s->addr, "�ֹ���");
	printf("%s %d %s \n", s->name, s->age, s->addr);
	free(s->addr);
	free(s);
	return 0;
}