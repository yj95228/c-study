#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ���� �޸��� ���Ҵ��� �̿��� ���ڿ� ó��
int main04() {
	char tmp[30 + 1];
	// ������ �迭
	char* str[3];
	for (int i = 0; i < 3; i++) {
		printf("���ڿ��� �Է��ϼ���\n");
		gets(tmp);
		str[i] = (char*) malloc(strlen(tmp) + 1);
		strcpy(str[i], tmp);
	}

	for (int i = 0; i < 3; i++) {
		printf("%s\n", str[i]);
	}
	// free(str); -> �̷��� �ϸ� �޸� ���� �ȵ�
	for (int i = 0; i < 3; i++) {
		free(str[i]);
	}
	return 0;
}