#include <stdio.h>

int main06() {
	// ascii code
	for (int i = 0; i < 254; i++) {
		printf("%d : %c\n", i, i);
	};

	printf("���ڸ� �Է��ϼ���\n");
	char c;
	c = getchar();
	printf("�Է��Ͻ� ���ڴ� ");
	putchar(c);
	printf("�Դϴ�\n");

	puts("���ڿ��� �Է��ϼ���\n");
	char str[10];
	gets(str);
	puts("�Է��Ͻ� ���ڿ��� ");
	puts(str);
	printf("�Դϴ�\n");
	return 0;
}