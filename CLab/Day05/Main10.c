#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

// ����ü �迭
int main10() {
	Person ps[3] = { {"�Ѹ�",7,"�ֹ���"}, {"��ġ",8,"�ֹ���"} , {"�����",9,"�ֹ���"} };
	for (int i = 0; i < 3; i++) {
		printf("�̸� : %s, ���� : %d, �ּ� : %s\n", ps[i].name, ps[i].age, ps[i].addr);
	}
	Person p;
	printf("�̸��� �Է��ϼ���\n");
	scanf("%s", p.name);
	printf("���̸� �Է��ϼ���\n");
	scanf("%d", &p.age);
	printf("�ּҸ� �Է��ϼ���\n");
	scanf("%s", p.addr);
	printf("�̸� : %s, ���� : %d, �ּ� : %s\n", p.name, p.age, p.addr);

	for (int i = 0; i < 3; i++) {
		printf("�̸��� �Է��ϼ���\n");
		scanf("%s", ps[i].name);
		printf("���̸� �Է��ϼ���\n");
		scanf("%d", &ps[i].age);
		printf("�ּҸ� �Է��ϼ���\n");
		scanf("%s", ps[i].addr);
	}
	return 0;
}