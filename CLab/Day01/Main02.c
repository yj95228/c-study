#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main02() {
	int a, b;
	char c;

	printf("2���� ������ �Է��ϼ��� \n");
	scanf("%d %d", &a, &b);
	printf("�Է��Ͻ� ������ %d �� %d �Դϴ�\n", a, b);

	// fflush(stdin);	// ���۸� ����ֱ� (���� ��� - ǥ���� �ƴ�)
	while (getchar() != '\n');	// ǥ�� ���

	printf("���ڸ� �Է��ϼ���\n");
	scanf("%c", &c);
	printf("�Է��Ͻ� ���ڴ� %c �Դϴ�", c);

	return 0;
}