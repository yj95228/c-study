#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int main09() {
	// ����ü�� ���� ���� ���
	Student s1 = { "�Ѹ�",7,"�ֹ���" };
	strcpy(s1.name, "��ġ");
	s1.age = 9;
	s1.addr = (char*)malloc(strlen("�ֹ���") + 1);
	strcpy(s1.addr, "�ֹ���");
	printf("�̸� : %s, ���� : %d, �ּ� : %s\n", s1.name, s1.age, s1.addr);
	free(s1.addr);
	return 0;
}