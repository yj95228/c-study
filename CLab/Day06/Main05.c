#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main05() {
	FILE* fd;
	fd = fopen("test.txt", "r");
	if (fd == NULL) {
		printf("������ ������ �ʾҽ��ϴ�\n");
		return 1;
	}
	char str[50];
	fscanf(fd, "%s", str);
	printf("���Ϸκ��� ���� ���ڿ�: %s", str);
	return 0;
}