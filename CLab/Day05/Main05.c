#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// �����޸𸮸� �̿��� ���ڿ� ó��
// �Լ����ڷ� �ѱ��

void print_str(char**p) {
	while (*p != NULL) {
		printf("%s\n", *p);
		p++;
	}
}
int main05() {
	/*
	char* c = "hello";
	c[2] = 'h';
	printf("%s\n", c);
	*/

	char tmp[30 + 1];
	char* str[10] = { 0 };
	int i = 0;
	while (i < 10) {
		printf("���ڿ��� �Է��ϼ���\n");
		gets(tmp);
		if (strcmp(tmp, "end") == 0) break;
		str[i] = malloc(strlen(tmp) + 1);
		strcpy(str[i], tmp);
		i++;
	}
	print_str(str);
	for (int i = 0; str[i] != NULL; i++) {
		free(str[i]);
	}
	return 0;
}